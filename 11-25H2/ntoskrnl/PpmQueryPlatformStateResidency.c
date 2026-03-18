/*
 * XREFs of PpmQueryPlatformStateResidency @ 0x140486BF4
 * Callers:
 *     PopQueryBootSessionStandbyActivationInfo @ 0x140486A74 (PopQueryBootSessionStandbyActivationInfo.c)
 *     PpmQueryDripsResidency @ 0x140486AD0 (PpmQueryDripsResidency.c)
 *     PopCalculateIdleInformation @ 0x140486AEC (PopCalculateIdleInformation.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
        Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL);
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
