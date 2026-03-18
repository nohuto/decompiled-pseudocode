/*
 * XREFs of KeIsSubsetAffinityEx @ 0x1402717F0
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x140264B00 (PpmPerfApplyDomainStates.c)
 *     PpmPerfApplyDomainState @ 0x140264BC0 (PpmPerfApplyDomainState.c)
 *     KeStartThread @ 0x14026AE04 (KeStartThread.c)
 *     KiSetLegacyAffinityThread @ 0x1402715DC (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1403060E4 (KeSetUserAffinityThread.c)
 *     KeSetUserGroupAffinityThread @ 0x140469728 (KeSetUserGroupAffinityThread.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x140491940 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     PpmHeteroHgsGetContainmentType @ 0x1404BBB70 (PpmHeteroHgsGetContainmentType.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BB870 (KeCpuPartitionMoveCpus.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1405C9D2C (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1405CA35C (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmUpdateIdleDomains @ 0x1405CAE30 (PpmUpdateIdleDomains.c)
 *     PsUpdateActiveProcessAffinity @ 0x140764D88 (PsUpdateActiveProcessAffinity.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     PspSetProcessAffinitySafe @ 0x140A48864 (PspSetProcessAffinitySafe.c)
 *     PspCheckForJobAffinityViolation @ 0x140A60460 (PspCheckForJobAffinityViolation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsSubsetAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // r11
  unsigned __int16 v3; // r8
  unsigned __int16 v4; // bx
  unsigned __int16 i; // dx
  __int64 v8; // rcx

  v2 = a2;
  v3 = *a1;
  v4 = *a2;
  if ( *a1 >= *a2 )
  {
    v4 = *a1;
    v2 = a1;
    v3 = *a2;
  }
  for ( i = 0; i < v3; ++i )
  {
    v8 = *(_QWORD *)&a1[4 * i + 4];
    if ( (v8 & *(_QWORD *)&a2[4 * i + 4]) != v8 )
      return 0LL;
  }
  if ( v2 != a2 )
  {
    while ( i < v4 )
    {
      if ( *(_QWORD *)&a1[4 * i + 4] )
        return 0LL;
      ++i;
    }
  }
  return 1LL;
}
