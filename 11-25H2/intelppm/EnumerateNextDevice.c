/*
 * XREFs of EnumerateNextDevice @ 0x140004B78
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x140006AA0 (ComputeProcessorEnergyMsrEx.c)
 *     InitLegacyPccInternal @ 0x14000D764 (InitLegacyPccInternal.c)
 *     RetrieveEfficiencyClassInformation @ 0x140029798 (RetrieveEfficiencyClassInformation.c)
 *     ValidatePerfDomainSymmetry @ 0x14002F62C (ValidatePerfDomainSymmetry.c)
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140036F80 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1400372A8 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1400384A0 (RegisterKernelPepPerf.c)
 *     ProcLibTraceControlCallback @ 0x140041B80 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x1400454CC (CpcHighestNotifyWorker.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x140046278 (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnumerateNextDevice(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // r8

  *a2 = 0LL;
  v3 = a1[2];
  v4 = -1073741275;
  if ( v3 )
  {
    if ( *((_BYTE *)a1 + 24) )
      return v4;
    *((_BYTE *)a1 + 24) = 1;
    goto LABEL_5;
  }
  v5 = *a1;
  if ( *a1 )
  {
    v6 = (__int64 *)a1[1];
    v7 = *v6;
    a1[1] = *v6;
    if ( v7 != v5 )
    {
      v3 = v7 - *((unsigned int *)a1 + 6);
LABEL_5:
      *a2 = v3;
      return 0;
    }
  }
  return v4;
}
