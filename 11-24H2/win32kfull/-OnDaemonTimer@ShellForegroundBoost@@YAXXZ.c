/*
 * XREFs of ?OnDaemonTimer@ShellForegroundBoost@@YAXXZ @ 0x1401B9670
 * Callers:
 *     <none>
 * Callees:
 *     ?DeBoostIfTime@CShellForegroundBoost@@QEAAX_J@Z @ 0x1401B96B0 (-DeBoostIfTime@CShellForegroundBoost@@QEAAX_J@Z.c)
 */

void __fastcall ShellForegroundBoost::OnDaemonTimer(ShellForegroundBoost *this, __int64 a2)
{
  __int64 v2; // rbx
  __int64 UserSessionState; // rax

  v2 = MEMORY[0xFFFFF78000000014];
  UserSessionState = W32GetUserSessionState(this, a2);
  CShellForegroundBoost::DeBoostIfTime(*(CShellForegroundBoost **)(UserSessionState + 18936), v2 - 50000000);
}
