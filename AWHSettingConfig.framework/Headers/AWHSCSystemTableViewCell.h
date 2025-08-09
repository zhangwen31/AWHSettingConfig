//
//  AWHSCSystemTableViewCell.h
//  AWHSettingConfig
//
//  Created by 王恒 on 2023/8/5.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSCSystemTableViewCell : UITableViewCell

@property (nonatomic, strong) NSString *titleName;

@property (nonatomic, strong) NSString *rightTitle;

@property (nonatomic, assign) BOOL isHiddenLine;

@end

NS_ASSUME_NONNULL_END
