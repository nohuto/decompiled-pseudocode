/*
 * XREFs of HUBDSM_CheckingIfEndpointsToBeDisabledOnDetach @ 0x140020750
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_CheckIfEndpointsNeedToBeDisabledOnConfigFailure @ 0x1400262A4 (HUBUCX_CheckIfEndpointsNeedToBeDisabledOnConfigFailure.c)
 */

__int64 __fastcall HUBDSM_CheckingIfEndpointsToBeDisabledOnDetach(__int64 a1)
{
  return HUBUCX_CheckIfEndpointsNeedToBeDisabledOnConfigFailure(*(_QWORD *)(a1 + 960));
}
