/*
 * XREFs of KeIsEqualAffinityEx @ 0x14026BB80
 * Callers:
 *     EtwTraceThreadAffinity @ 0x14026B7D8 (EtwTraceThreadAffinity.c)
 *     PpmParkReportMask @ 0x14026BAE0 (PpmParkReportMask.c)
 *     KiForwardTick @ 0x140274A70 (KiForwardTick.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BB870 (KeCpuPartitionMoveCpus.c)
 *     KiCpuPartitionCheckGenericDpc @ 0x1405BC29C (KiCpuPartitionCheckGenericDpc.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D23A8 (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 *     ExpWorkQueueManagerThread @ 0x140A17020 (ExpWorkQueueManagerThread.c)
 *     PpmHeteroComputeRelativePerformance @ 0x140A21A4C (PpmHeteroComputeRelativePerformance.c)
 *     PspSetEffectiveJobLimits @ 0x140A33B68 (PspSetEffectiveJobLimits.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C229DC (PpmHeteroInitializeIntelWpsSupport.c)
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
