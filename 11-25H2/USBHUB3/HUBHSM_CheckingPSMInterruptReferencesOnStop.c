/*
 * XREFs of HUBHSM_CheckingPSMInterruptReferencesOnStop @ 0x140008D10
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased @ 0x1400108A4 (HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased.c)
 */

__int64 __fastcall HUBHSM_CheckingPSMInterruptReferencesOnStop(__int64 a1)
{
  return HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased(*(_QWORD *)(a1 + 960));
}
