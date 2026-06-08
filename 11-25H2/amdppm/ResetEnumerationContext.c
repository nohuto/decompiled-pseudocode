/*
 * XREFs of ResetEnumerationContext @ 0x14000305C
 * Callers:
 *     InitLegacyPccInternal @ 0x14000A0F0 (InitLegacyPccInternal.c)
 *     ValidatePerfDomainSymmetry @ 0x140030F30 (ValidatePerfDomainSymmetry.c)
 *     InitCpcStatesInternal @ 0x140032190 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x14003385C (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x140033B84 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x140035840 (RegisterKernelPepPerf.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x14003A520 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x14003A808 (RetrieveEfficiencyClassInformation.c)
 *     ProcLibTraceControlCallback @ 0x14003D7C0 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x140040828 (CpcHighestNotifyWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResetEnumerationContext(__int64 *a1)
{
  __int64 result; // rax

  if ( a1[2] )
  {
    *((_BYTE *)a1 + 24) = 0;
  }
  else
  {
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
