/*
 * XREFs of KeIsSubsetAffinityEx @ 0x1403A1D00
 * Callers:
 *     KeSetUserAffinityThread @ 0x140330B44 (KeSetUserAffinityThread.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A1240 (KeSetUserGroupAffinityThread.c)
 *     PpmPerfApplyDomainStates @ 0x1403A1430 (PpmPerfApplyDomainStates.c)
 *     PpmPerfApplyDomainState @ 0x1403A14F0 (PpmPerfApplyDomainState.c)
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x14048B680 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     PpmHeteroHgsGetContainmentType @ 0x1404B5E60 (PpmHeteroHgsGetContainmentType.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BCCE0 (KeCpuPartitionMoveCpus.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1405CBAFC (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1405CC12C (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmUpdateIdleDomains @ 0x1405CCC00 (PpmUpdateIdleDomains.c)
 *     PsUpdateActiveProcessAffinity @ 0x140774978 (PsUpdateActiveProcessAffinity.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     PspSetProcessAffinitySafe @ 0x140A42004 (PspSetProcessAffinitySafe.c)
 *     PspCheckForJobAffinityViolation @ 0x140A5A4B0 (PspCheckForJobAffinityViolation.c)
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
