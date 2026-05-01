/*
 * XREFs of ?find_interface@?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180637420
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@VCopilotHotkeyManager@@@impl@winrt@@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VCopilotHotkeyManager@@@12@@Z @ 0x18061E0F8 (--$find@U-$find_iid_traits@VCopilotHotkeyManager@@@impl@winrt@@@-$interface_list@UIImmersiveShel.c)
 */

__int64 __fastcall winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 - 48;
  v3 = *a2 == winrt::impl::guid_v<IObjectWithSite>;
  v7[0] = v2;
  v7[1] = (__int64)a2;
  if ( v3 && a2[1] == 0x52733D00AA0029A2LL )
  {
    v4 = v2 + 16;
  }
  else
  {
    if ( *a2 != winrt::impl::guid_v<IServiceProvider> || a2[1] != 0xFA096000AA003480uLL )
      return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::find<winrt::impl::find_iid_traits<CopilotHotkeyManager>>(v7);
    v4 = v2 + 24;
  }
  return v4 & -(__int64)(v2 != 0);
}
