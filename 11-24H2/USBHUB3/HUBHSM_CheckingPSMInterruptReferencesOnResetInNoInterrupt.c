/*
 * XREFs of HUBHSM_CheckingPSMInterruptReferencesOnResetInNoInterrupt @ 0x140008CE0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased @ 0x1400108F4 (HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased.c)
 *     HUBMUX_QueueSurpriseRemovalToAllPSMs @ 0x140011D1C (HUBMUX_QueueSurpriseRemovalToAllPSMs.c)
 */

__int64 __fastcall HUBHSM_CheckingPSMInterruptReferencesOnResetInNoInterrupt(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMUX_QueueSurpriseRemovalToAllPSMs(v1);
  return HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased(v1);
}
