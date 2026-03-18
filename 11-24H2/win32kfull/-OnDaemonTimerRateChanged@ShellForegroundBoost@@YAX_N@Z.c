/*
 * XREFs of ?OnDaemonTimerRateChanged@ShellForegroundBoost@@YAX_N@Z @ 0x1401D2090
 * Callers:
 *     <none>
 * Callees:
 *     ?DeBoostAll@CShellForegroundBoost@@QEAAXXZ @ 0x14021EB84 (-DeBoostAll@CShellForegroundBoost@@QEAAXXZ.c)
 */

void __fastcall ShellForegroundBoost::OnDaemonTimerRateChanged(ShellForegroundBoost *this, __int64 a2)
{
  __int64 UserSessionState; // rax

  if ( !(_BYTE)this )
  {
    UserSessionState = W32GetUserSessionState(this, a2);
    CShellForegroundBoost::DeBoostAll(*(CShellForegroundBoost **)(UserSessionState + 18936));
  }
}
