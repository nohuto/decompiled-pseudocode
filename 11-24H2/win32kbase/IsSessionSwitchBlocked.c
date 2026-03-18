/*
 * XREFs of IsSessionSwitchBlocked @ 0x1401B3550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsSessionSwitchBlocked(__int64 a1)
{
  return *(unsigned int *)(W32GetUserSessionState(a1) + 69108);
}
