/*
 * XREFs of PpmPerfGetVmCppcConfig @ 0x1405CE210
 * Callers:
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PpmPerfPercentageFromFrequency @ 0x140743A84 (PpmPerfPercentageFromFrequency.c)
 */

__int64 __fastcall PpmPerfGetVmCppcConfig(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        char a6,
        _QWORD *a7)
{
  unsigned int v10; // edi
  unsigned int v11; // ebx
  unsigned int v12; // r11d
  __int64 v13; // rcx
  _PROC_PERF_DOMAIN *Domain; // r10

  v10 = a2;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  v11 = 0;
  if ( PpmPerfVmPerfSelectionSupported )
  {
    v12 = -1;
    v13 = 0xFFFFFFFFLL;
    if ( a1 )
      v12 = a1;
    if ( v10 )
      v13 = v10;
    if ( v12 == -1 && (_DWORD)v13 == -1 && a3 == -1 && a4 == -1 && a5 == -1 )
    {
      *a7 = 0LL;
    }
    else
    {
      Domain = KeGetCurrentPrcb()->PowerState.CheckContext.Domain;
      if ( (_DWORD)v13 != -1 )
        PpmPerfPercentageFromFrequency(v13, Domain->NominalFrequency);
      if ( v12 != -1 )
        PpmPerfPercentageFromFrequency(v12, Domain->NominalFrequency);
      if ( (a3 != -1 || Domain->QosPolicies[0].ProvideGuidance)
        && (a3 || Domain->AutonomousCapability != 1)
        && Domain->AutonomousCapability != 2 )
      {
        PpmPerfPercentageFromFrequency(a3, Domain->NominalFrequency);
      }
      guard_dispatch_icall_no_overrides(Domain->Processors->PerfContext);
    }
  }
  else
  {
    v11 = -1073741637;
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v11;
}
