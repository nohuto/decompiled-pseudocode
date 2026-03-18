/*
 * XREFs of ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x140003804
 * Callers:
 *     ?s_NotifyWndProc@CDwmAppHost@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1400037E0 (-s_NotifyWndProc@CDwmAppHost@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140002C30 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z @ 0x140003B70 (-OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z.c)
 *     ?OnClose@CDwmAppHost@@AEAAXXZ @ 0x1400042A4 (-OnClose@CDwmAppHost@@AEAAXXZ.c)
 *     ?CollectDWMCursorTelemetry@@YAXXZ @ 0x14000C8C4 (-CollectDWMCursorTelemetry@@YAXXZ.c)
 *     ?RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ @ 0x14000E4F8 (-RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ.c)
 */

LRESULT __fastcall CDwmAppHost::NotifyWndProc(CDwmAppHost *this, HWND a2, UINT a3, unsigned __int64 a4, LPARAM lParam)
{
  __int64 v5; // rbx
  unsigned int v6; // edx

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
