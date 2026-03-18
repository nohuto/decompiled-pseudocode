/*
 * XREFs of ?RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ @ 0x14000FED8
 * Callers:
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x140003BD4 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?OnHotKeyDetected@HotKeyCallback@@UEAAJIII_K0@Z @ 0x14000E7E0 (-OnHotKeyDetected@HotKeyCallback@@UEAAJIII_K0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140004EE0 (__security_check_cookie.c)
 *     ??$duration_cast@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@_JU?$ratio@$00$0DLJKMKAA@@3@$0A@@chrono@std@@YA?AV?$duration@_JU?$ratio@$00$00@std@@@01@AEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@01@@Z @ 0x14000EF7C (--$duration_cast@V-$duration@_JU-$ratio@$00$00@std@@@chrono@std@@_JU-$ratio@$00$0DLJKMKAA@@3@$0A.c)
 *     ?RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000FD74 (-RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4Diag.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x14001023C (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 */

void __fastcall BlackScreenDiagnostics::RunDiagnosticsFromHotkey(BlackScreenDiagnostics *this)
{
  __int64 v1; // [rsp+20h] [rbp-38h] BYREF
  __int64 v2; // [rsp+28h] [rbp-30h] BYREF
  UUID Uuid; // [rsp+30h] [rbp-28h] BYREF

  Beep(0x1EEu, 0xC8u);
  Uuid = 0LL;
  UuidCreate(&Uuid);
  v2 = *(_QWORD *)std::chrono::steady_clock::now(&v1) - qword_140019C20;
  std::chrono::duration_cast<std::chrono::duration<__int64,std::ratio<1,1>>,__int64,std::ratio<1,1000000000>,0>(
    &v1,
    &v2);
  if ( v1 < 30 )
  {
    BlackScreenDiagnostics::CBlackScreenDiagnosticReport::RunDiagnostics(0, 4, &Uuid);
  }
  else
  {
    BlackScreenDiagnostics::CBlackScreenDiagnosticReport::RunDiagnostics(0, 7, &Uuid);
    qword_140019C20 = *(_QWORD *)std::chrono::steady_clock::now(&v1);
  }
}
