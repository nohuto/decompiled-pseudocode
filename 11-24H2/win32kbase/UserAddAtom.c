/*
 * XREFs of UserAddAtom @ 0x14015B710
 * Callers:
 *     <none>
 * Callees:
 *     UserAddAtomToAtomTable @ 0x14019B030 (UserAddAtomToAtomTable.c)
 */

__int64 __fastcall UserAddAtom(__int64 a1)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1);
  return UserAddAtomToAtomTable(*(void **)(UserSessionState + 41440));
}
