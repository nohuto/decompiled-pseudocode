/*
 * XREFs of HUBHSM_NotifyingHubResetToPortsOnResetOnResume @ 0x140009870
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueueResetToAllPSMs @ 0x140011A08 (HUBMUX_QueueResetToAllPSMs.c)
 */

__int64 __fastcall HUBHSM_NotifyingHubResetToPortsOnResetOnResume(__int64 a1)
{
  HUBMUX_QueueResetToAllPSMs(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
