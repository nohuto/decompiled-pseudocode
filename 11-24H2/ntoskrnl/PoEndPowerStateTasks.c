/*
 * XREFs of PoEndPowerStateTasks @ 0x1406F9230
 * Callers:
 *     PoPowerOffMonitor @ 0x1404CBF90 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x140B551D4 (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1409B9D64 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
