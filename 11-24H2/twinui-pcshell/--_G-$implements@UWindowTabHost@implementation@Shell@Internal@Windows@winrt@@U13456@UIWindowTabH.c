/*
 * XREFs of ??_G?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAPEAXI@Z @ 0x18057D87C
 * Callers:
 *     ??_E?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@WFA@EAAPEAXI@Z @ 0x18057D820 (--_E-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabH.c)
 * Callees:
 *     ??1immersive_shell_component@winrt@@UEAA@XZ @ 0x1801CDD44 (--1immersive_shell_component@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

char *__fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::Shell::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,winrt::immersive_shell_component,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,winrt::cloaked<Windows::Internal::Shell::IWindowTabHostInternal>>::`scalar deleting destructor'(
        char *a1,
        char a2)
{
  winrt::immersive_shell_component::~immersive_shell_component((winrt::immersive_shell_component *)(a1 + 48));
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x88);
  return a1;
}
