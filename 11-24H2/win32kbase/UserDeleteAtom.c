/*
 * XREFs of UserDeleteAtom @ 0x1400BBC00
 * Callers:
 *     <none>
 * Callees:
 *     UserDeleteAtomFromAtomTable @ 0x1400BBC40 (UserDeleteAtomFromAtomTable.c)
 */

__int64 __fastcall UserDeleteAtom(__int64 a1)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1);
  return UserDeleteAtomFromAtomTable(*(PRTL_ATOM_TABLE *)(UserSessionState + 41440));
}
