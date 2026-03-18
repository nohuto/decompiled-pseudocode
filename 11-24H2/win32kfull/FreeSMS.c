/*
 * XREFs of FreeSMS @ 0x140180F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeSMS(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return Win32FreeToPagedLookasideList(*(_QWORD *)(UserSessionState + 69344), a1);
}
