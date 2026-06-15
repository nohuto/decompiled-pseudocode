/*
 * XREFs of ??$_Construct_in_place@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YAXAEAVCPdcTimerActivation@@$$QEAPEAVCPdcActivationClient@@AEAPEAVCVADServer@@@Z @ 0x180016A48
 * Callers:
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x18004FF70 (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 * Callees:
 *     <none>
 */

CPdcTimerActivation *__fastcall std::_Construct_in_place<CPdcTimerActivation,CPdcActivationClient *,CVADServer * &>(
        CPdcTimerActivation *a1,
        struct CPdcActivationClient **a2,
        struct CVADServer **a3)
{
  return CPdcTimerActivation::CPdcTimerActivation(a1, *a2, *a3);
}
