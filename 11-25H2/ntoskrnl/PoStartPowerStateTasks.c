/*
 * XREFs of PoStartPowerStateTasks @ 0x1406ED524
 * Callers:
 *     PoPowerOffMonitor @ 0x1404CC3C0 (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x140B445A4 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140A2C7C0 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
