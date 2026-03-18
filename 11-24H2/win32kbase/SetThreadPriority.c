/*
 * XREFs of SetThreadPriority @ 0x140213440
 * Callers:
 *     <none>
 * Callees:
 *     ?SetThreadPriority@CInputThreadBase@@QEAAXXZ @ 0x140220034 (-SetThreadPriority@CInputThreadBase@@QEAAXXZ.c)
 */

void __fastcall SetThreadPriority(__int64 a1)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1);
  CInputThreadBase::SetThreadPriority(*(CInputThreadBase **)(UserSessionState + 18808));
}
