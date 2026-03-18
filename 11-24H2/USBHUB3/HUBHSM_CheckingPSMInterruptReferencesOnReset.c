/*
 * XREFs of HUBHSM_CheckingPSMInterruptReferencesOnReset @ 0x140008CA0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased @ 0x1400108F4 (HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased.c)
 *     HUBMUX_QueueSurpriseRemovalToAllPSMs @ 0x140011D1C (HUBMUX_QueueSurpriseRemovalToAllPSMs.c)
 */

__int64 __fastcall HUBHSM_CheckingPSMInterruptReferencesOnReset(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased(v1);
  HUBMUX_QueueSurpriseRemovalToAllPSMs(v1);
  return v2;
}
