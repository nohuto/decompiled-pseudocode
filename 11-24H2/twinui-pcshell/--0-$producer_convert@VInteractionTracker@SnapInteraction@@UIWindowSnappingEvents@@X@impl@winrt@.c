/*
 * XREFs of ??0?$producer_convert@VInteractionTracker@SnapInteraction@@UIWindowSnappingEvents@@X@impl@winrt@@QEAA@XZ @ 0x180293978
 * Callers:
 *     ??0?$producers_base@Uimmersive_shell_component@winrt@@V?$tuple@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x18014A398 (--0-$producers_base@Uimmersive_shell_component@winrt@@V-$tuple@UIObjectWithSite@@UIServiceProvid.c)
 *     ??0?$producers_base@VNPSMDesktopShellComponent@@V?$tuple@UIApplicationViewChangeListener@@@std@@@impl@winrt@@QEAA@XZ @ 0x18023A848 (--0-$producers_base@VNPSMDesktopShellComponent@@V-$tuple@UIApplicationViewChangeListener@@@std@@.c)
 *     ??0?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@QEAA@XZ @ 0x180293858 (--0-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHo.c)
 *     ??0?$producers_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@V?$tuple@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataModelSingleton@23456@UITaskGroupsComponent@DesktopTaskGroups@3456@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@std@@@impl@winrt@@QEAA@XZ @ 0x18029949C (--0-$producers_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@.c)
 *     ??0?$producers_base@VInteractionTracker@SnapInteraction@@V?$tuple@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@std@@@impl@winrt@@QEAA@XZ @ 0x18029A65C (--0-$producers_base@VInteractionTracker@SnapInteraction@@V-$tuple@UIInspectable@Foundation@Windo.c)
 *     ??0?$producers_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@V?$tuple@UIThemeCoordinator@Themes@UI@Internal@Windows@winrt@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@std@@@impl@winrt@@QEAA@XZ @ 0x18029BF80 (--0-$producers_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@V-$tuple@.c)
 *     ??0?$producers_base@VTouchEdgeGestureManager@@V?$tuple@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@std@@@impl@winrt@@QEAA@XZ @ 0x18029FA10 (--0-$producers_base@VTouchEdgeGestureManager@@V-$tuple@UIInspectable@Foundation@Windows@winrt@@U.c)
 * Callees:
 *     ??0?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@QEAA@XZ @ 0x18029399C (--0-$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotificat.c)
 */

_QWORD *winrt::impl::producer_convert<SnapInteraction::InteractionTracker,IWindowSnappingEvents,void>::producer_convert<SnapInteraction::InteractionTracker,IWindowSnappingEvents,void>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>();
  result = v0;
  *v0 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  return result;
}
