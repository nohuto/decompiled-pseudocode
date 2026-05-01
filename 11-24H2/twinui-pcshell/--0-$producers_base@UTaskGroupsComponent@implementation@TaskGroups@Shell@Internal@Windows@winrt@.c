/*
 * XREFs of ??0?$producers_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@V?$tuple@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataModelSingleton@23456@UITaskGroupsComponent@DesktopTaskGroups@3456@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@std@@@impl@winrt@@QEAA@XZ @ 0x18029949C
 * Callers:
 *     ??0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180149580 (--0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$producer_convert@VInteractionTracker@SnapInteraction@@UIWindowSnappingEvents@@X@impl@winrt@@QEAA@XZ @ 0x180293978 (--0-$producer_convert@VInteractionTracker@SnapInteraction@@UIWindowSnappingEvents@@X@impl@winrt@.c)
 *     ??0?$producer_convert@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@X@impl@winrt@@QEAA@XZ @ 0x1802939CC (--0-$producer_convert@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winr.c)
 *     ??0?$producer_convert@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataModelSingleton@34567@X@impl@winrt@@QEAA@XZ @ 0x1802994F4 (--0-$producer_convert@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal_ea_1802994F4.c)
 *     ??0?$producer_convert@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupsComponent@DesktopTaskGroups@4567@X@impl@winrt@@QEAA@XZ @ 0x180299560 (--0-$producer_convert@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal_ea_180299560.c)
 *     ??0?$producer_convert@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@X@impl@winrt@@QEAA@XZ @ 0x1802995B4 (--0-$producer_convert@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal_ea_1802995B4.c)
 */

_QWORD *__fastcall winrt::impl::producers_base<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,std::tuple<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>>::producers_base<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,std::tuple<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>>(
        __int64 a1)
{
  __int64 v1; // r11
  __int64 v2; // r11
  _QWORD *v3; // r11
  _QWORD *v4; // rcx

  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,void>::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,void>(a1 + 16);
  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,void>::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,void>(v1 + 24);
  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,void>::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,void>(v2 + 32);
  winrt::impl::producer_convert<SnapInteraction::InteractionTracker,IWindowSnappingEvents,void>::producer_convert<SnapInteraction::InteractionTracker,IWindowSnappingEvents,void>();
  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>();
  *v3 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *v4 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>::`vftable';
  return v3;
}
