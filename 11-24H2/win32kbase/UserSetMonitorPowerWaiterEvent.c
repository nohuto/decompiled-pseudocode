/*
 * XREFs of UserSetMonitorPowerWaiterEvent @ 0x14014A460
 * Callers:
 *     DrvSetWddmDeviceMonitorPowerState @ 0x14004CBE0 (DrvSetWddmDeviceMonitorPowerState.c)
 * Callees:
 *     <none>
 */

LONG __fastcall UserSetMonitorPowerWaiterEvent(__int64 Increment, BOOLEAN a2)
{
  KPRIORITY v3; // edi
  __int64 UserGdiSessionState; // rax

  v3 = Increment;
  UserGdiSessionState = W32GetUserGdiSessionState(Increment);
  return KeSetEvent(*(PRKEVENT *)(UserGdiSessionState + 8), v3, a2);
}
