/*
 * XREFs of ??$find@U?$find_iid_traits@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UITaskGroupHost@TaskGroups@Shell@Internal@67@UITaskGroupDataModelSingleton@9Shell@Internal@67@UITaskGroupsComponent@DesktopTaskGroups@Shell@Internal@67@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180586FE0
 * Callers:
 *     ?find_interface@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801C0A20 (-find_interface@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IObjectWithSite> && v1[1] == 0x52733D00AA0029A2LL )
    return (*a1 + 40LL) & -(__int64)(*a1 != 0LL);
  else
    return winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>();
}
