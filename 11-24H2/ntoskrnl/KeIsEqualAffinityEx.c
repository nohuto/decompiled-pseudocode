/*
 * XREFs of KeIsEqualAffinityEx @ 0x1403A3520
 * Callers:
 *     KiForwardTick @ 0x1402AC02C (KiForwardTick.c)
 *     EtwTraceThreadAffinity @ 0x1403A2658 (EtwTraceThreadAffinity.c)
 *     PpmParkReportMask @ 0x1403A3480 (PpmParkReportMask.c)
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B273C (KeUpdateProcessorRestrictionsEx.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BCCE0 (KeCpuPartitionMoveCpus.c)
 *     KiCpuPartitionCheckGenericDpc @ 0x1405BD7FC (KiCpuPartitionCheckGenericDpc.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D4400 (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmParkApplyPolicyEx @ 0x1405DE964 (PpmParkApplyPolicyEx.c)
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 *     ExpWorkQueueManagerThread @ 0x1408F84F0 (ExpWorkQueueManagerThread.c)
 *     PspSetEffectiveJobLimits @ 0x140A2C888 (PspSetEffectiveJobLimits.c)
 *     PpmHeteroComputeRelativePerformance @ 0x140A65B9C (PpmHeteroComputeRelativePerformance.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C35D58 (PpmHeteroInitializeIntelWpsSupport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEqualAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // r10
  unsigned __int16 v3; // r9
  unsigned __int16 i; // ax

  v2 = a2;
  v3 = *a1;
  if ( *a1 >= *a2 )
  {
    v3 = *a2;
    v2 = a1;
  }
  for ( i = 0; i < v3; ++i )
  {
    if ( *(_QWORD *)&a1[4 * i + 4] != *(_QWORD *)&a2[4 * i + 4] )
      return 0LL;
  }
  while ( i < *v2 )
  {
    if ( *(_QWORD *)&v2[4 * i + 4] )
      return 0LL;
    ++i;
  }
  return 1LL;
}
