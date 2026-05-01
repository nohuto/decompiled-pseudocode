/*
 * XREFs of ?find_interface@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180135F70
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UWindowTabHost@Shell@Internal@Windows@winrt@@UIWindowTabHost@2345@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@45@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@234@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18057CCD8 (--$find@U-$find_iid_traits@UWindowTabHost@implementation@Shell@Internal@Windows@win_ea_18057CCD8.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::Shell::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,winrt::immersive_shell_component,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,winrt::cloaked<Windows::Internal::Shell::IWindowTabHostInternal>>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 80;
  return winrt::impl::interface_list<winrt::Windows::Internal::Shell::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>(v3);
}
