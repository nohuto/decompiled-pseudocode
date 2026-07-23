/*
 * XREFs of PoStartPowerStateTasks @ 0x1406F6DA4
 * Callers:
 *     PoPowerOffMonitor @ 0x1404C5400 (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x140B565F4 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1409A03B4 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
