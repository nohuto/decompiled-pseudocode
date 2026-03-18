/*
 * XREFs of UserGetMonitorPowerWaiterEvent @ 0x1401BE9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetMonitorPowerWaiterEvent(__int64 a1)
{
  return *(_QWORD *)(W32GetUserGdiSessionState(a1) + 8);
}
