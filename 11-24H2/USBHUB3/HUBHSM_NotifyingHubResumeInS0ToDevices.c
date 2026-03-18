/*
 * XREFs of HUBHSM_NotifyingHubResumeInS0ToDevices @ 0x1400098A0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueuePowerUpEventToDSMs @ 0x140011724 (HUBMUX_QueuePowerUpEventToDSMs.c)
 */

__int64 __fastcall HUBHSM_NotifyingHubResumeInS0ToDevices(__int64 a1)
{
  HUBMUX_QueuePowerUpEventToDSMs(*(_QWORD *)(a1 + 960), 4010LL);
  return 1000LL;
}
