/*
 * XREFs of PpmQueryPlatformStateResidency @ 0x14032D624
 * Callers:
 *     PopQueryBootSessionStandbyActivationInfo @ 0x14032D49C (PopQueryBootSessionStandbyActivationInfo.c)
 *     PpmQueryDripsResidency @ 0x14032D500 (PpmQueryDripsResidency.c)
 *     PopCalculateIdleInformation @ 0x14032D51C (PopCalculateIdleInformation.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmQueryPlatformStateResidency(unsigned int a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdi
  unsigned int v3; // esi
  unsigned int *Pool2; // rax
  unsigned int *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
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
        Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL);
        v5 = Pool2;
        if ( Pool2 )
        {
          *Pool2 = v3;
          PopAcquireRwLockShared(&PpmIdlePolicyLock);
          IdleStates = KeGetCurrentPrcb()->PowerState.IdleStates;
          if ( IdleStates && (int)guard_dispatch_icall_no_overrides(IdleStates->Context, v5, v6, v7) >= 0 )
            v1 = *(_QWORD *)&v5[4 * v2 + 2];
          PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
          ExFreePoolWithTag(v5, 0x694D5050u);
        }
      }
    }
  }
  return v1;
}
