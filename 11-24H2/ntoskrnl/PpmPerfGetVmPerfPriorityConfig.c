/*
 * XREFs of PpmPerfGetVmPerfPriorityConfig @ 0x1405D2D90
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfGetVmPerfPriorityConfig(unsigned int a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // r9
  int v6; // ebx
  _PROC_PERF_DOMAIN *Domain; // rcx

  *a2 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, (__int64)a2, a3);
  if ( PpmPerfVmPerfSelectionSupported
    && (Domain = KeGetCurrentPrcb()->PowerState.CheckContext.Domain, Domain->PerfPriorityHandler) )
  {
    v6 = guard_dispatch_icall_no_overrides(Domain->Processors->PerfContext, a1, a2, v5);
    if ( v6 >= 0 )
      v6 = 0;
  }
  else
  {
    v6 = -1073741637;
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return (unsigned int)v6;
}
