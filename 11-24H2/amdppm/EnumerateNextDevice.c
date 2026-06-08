/*
 * XREFs of EnumerateNextDevice @ 0x140001490
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

__int64 __fastcall EnumerateNextDevice(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  __int64 *v5; // rdx
  __int64 v6; // rax

  v2 = a1[2];
  *a2 = 0LL;
  if ( v2 )
  {
    if ( *((_BYTE *)a1 + 24) )
      return 3221226021LL;
    *((_BYTE *)a1 + 24) = 1;
  }
  else
  {
    v4 = *a1;
    if ( !*a1 )
      return 3221226021LL;
    v5 = (__int64 *)a1[1];
    v6 = *v5;
    a1[1] = *v5;
    if ( v6 == v4 )
      return 3221226021LL;
    v2 = v6 - *((unsigned int *)a1 + 6);
  }
  *a2 = v2;
  return 0LL;
}
