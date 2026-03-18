/*
 * XREFs of KeIsSubsetAffinityEx @ 0x1403B34F0
 * Callers:
 *     KeSetUserAffinityThread @ 0x140209564 (KeSetUserAffinityThread.c)
 *     KeSetUserGroupAffinityThread @ 0x1403B2A30 (KeSetUserGroupAffinityThread.c)
 *     PpmPerfApplyDomainStates @ 0x1403B2C20 (PpmPerfApplyDomainStates.c)
 *     PpmPerfApplyDomainState @ 0x1403B2CE0 (PpmPerfApplyDomainState.c)
 *     KeStartThread @ 0x1403B3660 (KeStartThread.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x1403C82C8 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     PpmHeteroHgsGetContainmentType @ 0x1404BAFC0 (PpmHeteroHgsGetContainmentType.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BF6B0 (KeCpuPartitionMoveCpus.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1405CE3DC (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1405CEA0C (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmUpdateIdleDomains @ 0x1405CF4E0 (PpmUpdateIdleDomains.c)
 *     PsUpdateActiveProcessAffinity @ 0x140774758 (PsUpdateActiveProcessAffinity.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     PspSetProcessAffinitySafe @ 0x140A4B2A4 (PspSetProcessAffinitySafe.c)
 *     PspCheckForJobAffinityViolation @ 0x140A61BBC (PspCheckForJobAffinityViolation.c)
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
