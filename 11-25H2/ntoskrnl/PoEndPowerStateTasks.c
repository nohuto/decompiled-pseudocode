/*
 * XREFs of PoEndPowerStateTasks @ 0x1406ED5F0
 * Callers:
 *     PoPowerOffMonitor @ 0x1404CC3C0 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x140B451D4 (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140A2C7C0 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
