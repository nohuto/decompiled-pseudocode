/*
 * XREFs of IsDwmApiPortRegistered @ 0x14014E510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDwmApiPortRegistered(__int64 a1)
{
  return *(_QWORD *)(W32GetUserSessionState(a1) + 70824) != 0LL;
}
