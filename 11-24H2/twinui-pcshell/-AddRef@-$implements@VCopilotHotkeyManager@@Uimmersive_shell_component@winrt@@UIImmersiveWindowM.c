/*
 * XREFs of ?AddRef@?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@UEAAKXZ @ 0x180238AB0
 * Callers:
 *     ?AddRef@?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@W7EAAKXZ @ 0x18058AF50 (-AddRef@-$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImm_ea_18058AF50.c)
 *     ?AddRef@?$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@winrt@@WBA@EAAKXZ @ 0x18058AF60 (-AddRef@-$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uim.c)
 *     ?AddRef@?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@WBI@EAAKXZ @ 0x18058AF70 (-AddRef@-$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImm_ea_18058AF70.c)
 *     ?AddRef@?$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@winrt@@WCA@EAAKXZ @ 0x18058AF80 (-AddRef@-$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winr_ea_18058AF80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(a1 + 48);
}
