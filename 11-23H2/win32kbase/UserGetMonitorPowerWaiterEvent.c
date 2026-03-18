/*
 * XREFs of UserGetMonitorPowerWaiterEvent @ 0x1C014F460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetMonitorPowerWaiterEvent(__int64 a1)
{
  return *(_QWORD *)(SGDGetUserGdiSessionState(a1) + 8);
}
