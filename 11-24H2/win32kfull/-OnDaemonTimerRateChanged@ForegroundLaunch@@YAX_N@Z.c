/*
 * XREFs of ?OnDaemonTimerRateChanged@ForegroundLaunch@@YAX_N@Z @ 0x1401C2940
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDaemonTimerRateChanged@CForegroundLaunch@@QEAAX_N@Z @ 0x1401C2970 (-OnDaemonTimerRateChanged@CForegroundLaunch@@QEAAX_N@Z.c)
 */

void __fastcall ForegroundLaunch::OnDaemonTimerRateChanged(ForegroundLaunch *this, __int64 a2)
{
  char v2; // bl
  __int64 UserSessionState; // rax

  v2 = (char)this;
  UserSessionState = W32GetUserSessionState(this, a2);
  CForegroundLaunch::OnDaemonTimerRateChanged(*(CForegroundLaunch **)(UserSessionState + 18928), v2);
}
