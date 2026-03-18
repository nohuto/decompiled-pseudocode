/*
 * XREFs of PoStartPowerStateTasks @ 0x1406F9164
 * Callers:
 *     PoPowerOffMonitor @ 0x1404CBF90 (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x140B545A4 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1409B9D64 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
