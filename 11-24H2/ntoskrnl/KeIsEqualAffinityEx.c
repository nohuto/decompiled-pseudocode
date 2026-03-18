/*
 * XREFs of KeIsEqualAffinityEx @ 0x1403C8980
 * Callers:
 *     KiForwardTick @ 0x14029D53C (KiForwardTick.c)
 *     EtwTraceThreadAffinity @ 0x1403B3E48 (EtwTraceThreadAffinity.c)
 *     PpmParkReportMask @ 0x1403C88E0 (PpmParkReportMask.c)
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B5474 (KeUpdateProcessorRestrictionsEx.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BF6B0 (KeCpuPartitionMoveCpus.c)
 *     KiCpuPartitionCheckGenericDpc @ 0x1405C01CC (KiCpuPartitionCheckGenericDpc.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D6E5C (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmParkApplyPolicyEx @ 0x1405E1344 (PpmParkApplyPolicyEx.c)
 *     PpmRegisterPerfStates @ 0x14074FED4 (PpmRegisterPerfStates.c)
 *     PspSetEffectiveJobLimits @ 0x1408E6C38 (PspSetEffectiveJobLimits.c)
 *     ExpWorkQueueManagerThread @ 0x140A21D40 (ExpWorkQueueManagerThread.c)
 *     PpmHeteroComputeRelativePerformance @ 0x140A2B570 (PpmHeteroComputeRelativePerformance.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C33C18 (PpmHeteroInitializeIntelWpsSupport.c)
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
