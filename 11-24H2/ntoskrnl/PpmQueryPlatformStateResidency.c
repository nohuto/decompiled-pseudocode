/*
 * XREFs of PpmQueryPlatformStateResidency @ 0x1402B5BB4
 * Callers:
 *     PopQueryBootSessionStandbyActivationInfo @ 0x1402B5A38 (PopQueryBootSessionStandbyActivationInfo.c)
 *     PpmQueryDripsResidency @ 0x1402B5A90 (PpmQueryDripsResidency.c)
 *     PopCalculateIdleInformation @ 0x1402B5AAC (PopCalculateIdleInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmQueryPlatformStateResidency(unsigned int a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdi
  unsigned int v3; // esi
  unsigned int *Pool2; // rax
  unsigned int *v5; // rbx
  _PPM_IDLE_STATES *IdleStates; // rcx

  v1 = -1LL;
  v2 = a1;
  if ( PpmPlatformStates )
  {
    if ( *(_QWORD *)(PpmPlatformStates + 40) )
    {
      v3 = *(_DWORD *)PpmPlatformStates;
      if ( a1 != -1 && a1 < v3 )
      {
        Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL, 16 * v3 + 8, 0x694D5050u);
        v5 = Pool2;
        if ( Pool2 )
        {
          *Pool2 = v3;
          PopAcquireRwLockShared((volatile signed __int64 *)&PpmIdlePolicyLock);
          IdleStates = KeGetCurrentPrcb()->PowerState.IdleStates;
          if ( IdleStates && (int)guard_dispatch_icall_no_overrides(IdleStates->Context, v5) >= 0 )
            v1 = *(_QWORD *)&v5[4 * v2 + 2];
          PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
          ExFreePoolWithTag(v5, 0x694D5050u);
        }
      }
    }
  }
  return v1;
}
