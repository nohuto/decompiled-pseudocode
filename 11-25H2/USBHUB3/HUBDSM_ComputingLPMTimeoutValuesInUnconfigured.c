/*
 * XREFs of HUBDSM_ComputingLPMTimeoutValuesInUnconfigured @ 0x1400214A0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice @ 0x14002E5E0 (HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice.c)
 */

__int64 __fastcall HUBDSM_ComputingLPMTimeoutValuesInUnconfigured(__int64 a1)
{
  return HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice(*(_QWORD *)(a1 + 960));
}
