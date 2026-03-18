/*
 * XREFs of ?Apply@ShellForegroundBoost@@YAXPEAUtagPROCESSINFO@@_N@Z @ 0x1400F7620
 * Callers:
 *     NtUserShellForegroundBoostProcess @ 0x1400F7130 (NtUserShellForegroundBoostProcess.c)
 * Callees:
 *     ?DeBoost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1400F7674 (-DeBoost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1400F77E4 (-Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall ShellForegroundBoost::Apply(ShellForegroundBoost *this, struct tagPROCESSINFO *a2)
{
  __int64 v3; // rax
  __int64 UserSessionState; // rax

  if ( (_BYTE)a2 )
  {
    UserSessionState = W32GetUserSessionState(this, a2);
    CShellForegroundBoost::Boost(*(CShellForegroundBoost **)(UserSessionState + 18936), this);
  }
  else
  {
    v3 = W32GetUserSessionState(this, a2);
    CShellForegroundBoost::DeBoost(*(CShellForegroundBoost **)(v3 + 18936), this);
  }
}
