/*
 * XREFs of PoEndPowerStateTasks @ 0x1406F6E70
 * Callers:
 *     PoPowerOffMonitor @ 0x1404C5400 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x140B57224 (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1409A03B4 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
