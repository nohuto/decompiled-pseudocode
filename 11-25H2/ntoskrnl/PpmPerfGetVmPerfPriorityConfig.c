/*
 * XREFs of PpmPerfGetVmPerfPriorityConfig @ 0x1405CE4BC
 * Callers:
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfGetVmPerfPriorityConfig(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v3; // ebx
  _PROC_PERF_DOMAIN *Domain; // rcx

  *a2 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, (__int64)a2, a3);
  if ( PpmPerfVmPerfSelectionSupported
    && (Domain = KeGetCurrentPrcb()->PowerState.CheckContext.Domain, Domain->PerfPriorityHandler) )
  {
    v3 = guard_dispatch_icall_no_overrides(Domain->Processors->PerfContext);
    if ( v3 >= 0 )
      v3 = 0;
  }
  else
  {
    v3 = -1073741637;
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return (unsigned int)v3;
}
