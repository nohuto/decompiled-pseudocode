/*
 * XREFs of ResetEnumerationContext @ 0x14000305C
 * Callers:
 *     InitLegacyPccInternal @ 0x14000AD90 (InitLegacyPccInternal.c)
 *     ValidatePerfDomainSymmetry @ 0x140032130 (ValidatePerfDomainSymmetry.c)
 *     InitCpcStatesInternal @ 0x140033390 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140034A5C (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x140034D84 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x140036A50 (RegisterKernelPepPerf.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x14003B770 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x14003BA58 (RetrieveEfficiencyClassInformation.c)
 *     ProcLibTraceControlCallback @ 0x14003EA10 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x140041A78 (CpcHighestNotifyWorker.c)
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
