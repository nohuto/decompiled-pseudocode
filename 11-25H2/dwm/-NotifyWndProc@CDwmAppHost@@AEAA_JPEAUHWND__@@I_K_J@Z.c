/*
 * XREFs of ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x140003BD4
 * Callers:
 *     ?s_NotifyWndProc@CDwmAppHost@@CA_JPEAUHWND__@@I_K_J@Z @ 0x140003BB0 (-s_NotifyWndProc@CDwmAppHost@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140002E78 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z @ 0x140003F40 (-OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z.c)
 *     ?OnClose@CDwmAppHost@@AEAAXXZ @ 0x140004674 (-OnClose@CDwmAppHost@@AEAAXXZ.c)
 *     ?CollectDWMCursorTelemetry@@YAXXZ @ 0x14000E450 (-CollectDWMCursorTelemetry@@YAXXZ.c)
 *     ?RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ @ 0x14000FED8 (-RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ.c)
 */

LRESULT __fastcall CDwmAppHost::NotifyWndProc(CDwmAppHost *this, HWND a2, UINT a3, unsigned __int64 a4, LPARAM lParam)
{
  __int64 v5; // rbx
  int v6; // edx

  v5 = 0LL;
  switch ( a3 )
  {
    case 2u:
      PostQuitMessage(0);
      return v5;
    case 0x10u:
      CDwmAppHost::OnClose(this);
      return v5;
    case 0x15u:
      v6 = 8;
      goto LABEL_15;
    case 0x1Au:
      CDwmAppHost::OnSettingChange(this, a4, lParam);
      return v5;
  }
  if ( a3 != 786 )
  {
    if ( a3 != 794 )
      return DefWindowProcW(a2, a3, a4, lParam);
    v6 = 4;
LABEL_15:
    CDwmAppHost::LpcNotifySettingsChange(this, v6);
    return v5;
  }
  if ( a4 )
  {
    if ( a4 == 3 )
      CollectDWMCursorTelemetry();
  }
  else
  {
    BlackScreenDiagnostics::RunDiagnosticsFromHotkey(this);
  }
  return v5;
}
