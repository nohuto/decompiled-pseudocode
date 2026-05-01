/*
 * XREFs of ?find_interface@?$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@UIGlobalRudeWindowNotifications@@UIInputHostLayoutChanges@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18058B760
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@VTouchGestureComponent@@@impl@winrt@@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIGlobalRudeWindowNotifications@@UIInputHostLayoutChanges@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VTouchGestureComponent@@@12@@Z @ 0x18058ABCC (--$find@U-$find_iid_traits@VTouchGestureComponent@@@impl@winrt@@@-$interface_list@UIImmersiveShe.c)
 */

__int64 __fastcall winrt::implements<TouchGestureComponent,winrt::immersive_shell_component,IGlobalRudeWindowNotifications,IInputHostLayoutChanges>::find_interface(
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
      return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IGlobalRudeWindowNotifications,IInputHostLayoutChanges>::find<winrt::impl::find_iid_traits<TouchGestureComponent>>(v7);
    v4 = v2 + 24;
  }
  return v4 & -(__int64)(v2 != 0);
}
