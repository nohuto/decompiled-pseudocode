/*
 * XREFs of IsLogonConnected @ 0x14014CCC0
 * Callers:
 *     UserPowerStateCallout @ 0x1401B0310 (UserPowerStateCallout.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsLogonConnected(__int64 a1)
{
  return *(_QWORD *)(W32GetUserSessionState(a1) + 69376) != 0LL;
}
