/*
 * XREFs of ?AddRef@?$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIImeContextMenuExperienceManager@@@winrt@@UEAAKXZ @ 0x180228FF0
 * Callers:
 *     ?AddRef@?$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIImeContextMenuExperienceManager@@@winrt@@W7EAAKXZ @ 0x1803F0F00 (-AddRef@-$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@w_ea_1803F0F00.c)
 *     ?AddRef@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@WBA@EAAKXZ @ 0x1803F0F10 (-AddRef@-$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimm.c)
 *     ?AddRef@?$implements@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIInputSwitchExperienceManager@@@winrt@@WBI@EAAKXZ @ 0x1803F0F20 (-AddRef@-$implements@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@Uimmers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,winrt::immersive_shell_component,IImeContextMenuExperienceManager>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(a1 + 40);
}
