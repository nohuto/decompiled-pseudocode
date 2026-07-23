/*
 * XREFs of PpmPerfGetVmPerfPriorityConfig @ 0x1405D04B0
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfGetVmPerfPriorityConfig(unsigned int a1, _QWORD *a2, unsigned int a3)
{
  int v4; // ebx
  _PROC_PERF_DOMAIN *Domain; // rcx

  *a2 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, (__int64)a2, a3);
  if ( PpmPerfVmPerfSelectionSupported
    && (Domain = KeGetCurrentPrcb()->PowerState.CheckContext.Domain, Domain->PerfPriorityHandler) )
  {
    v4 = guard_dispatch_icall_no_overrides(Domain->Processors->PerfContext, a1);
    if ( v4 >= 0 )
      v4 = 0;
  }
  else
  {
    v4 = -1073741637;
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return (unsigned int)v4;
}
