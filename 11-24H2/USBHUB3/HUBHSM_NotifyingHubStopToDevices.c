/*
 * XREFs of HUBHSM_NotifyingHubStopToDevices @ 0x1400099A0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueuePowerDownEventToDSMs @ 0x1400114F4 (HUBMUX_QueuePowerDownEventToDSMs.c)
 */

__int64 __fastcall HUBHSM_NotifyingHubStopToDevices(__int64 a1)
{
  HUBMUX_QueuePowerDownEventToDSMs(*(_QWORD *)(a1 + 960), 4022LL);
  return 1000LL;
}
