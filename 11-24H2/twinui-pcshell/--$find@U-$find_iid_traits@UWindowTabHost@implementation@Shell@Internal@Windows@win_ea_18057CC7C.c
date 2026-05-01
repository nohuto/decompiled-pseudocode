/*
 * XREFs of ??$find@U?$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@Shell@Internal@6@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18057CC7C
 * Callers:
 *     ??$find@U?$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UWindowTabHost@Shell@Internal@Windows@winrt@@UIWindowTabHost@2345@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@45@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@234@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18057CCD8 (--$find@U-$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@win_ea_18057CCD8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IObjectWithSite> && v1[1] == 0x52733D00AA0029A2LL )
  {
    v2 = *a1;
    v3 = *a1 + 48;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<IServiceProvider> && v1[1] == 0xFA096000AA003480uLL )
  {
    v2 = *a1;
    v3 = *a1 + 56;
    return v3 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>(a1);
}
