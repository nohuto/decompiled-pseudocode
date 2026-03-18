/*
 * XREFs of UserGetCurrentConnection @ 0x140116290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetCurrentConnection(__int64 a1)
{
  return *(unsigned __int16 *)(W32GetUserSessionState(a1) + 69008);
}
