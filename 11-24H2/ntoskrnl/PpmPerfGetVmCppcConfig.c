/*
 * XREFs of PpmPerfGetVmCppcConfig @ 0x1405D0204
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PpmPerfPercentageFromFrequency @ 0x14074DE84 (PpmPerfPercentageFromFrequency.c)
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
  unsigned int MaxPercent; // r15d
  unsigned int MinThrottlePercent; // ebp
  unsigned int v17; // eax
  unsigned int MaxPolicyPercent; // edx
  unsigned int MaxEquivalentFrequencyPercent; // edi
  unsigned int v20; // r9d
  unsigned int MinPerfPercent; // ecx
  unsigned int v22; // eax
  unsigned int GuaranteedPercent; // edi
  unsigned int v24; // eax
  unsigned int v25; // r11d
  unsigned int v26; // eax
  unsigned int v27; // r9d

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
      MaxPercent = Domain->MaxPercent;
      MinThrottlePercent = Domain->MinThrottlePercent;
      if ( Domain->QosPolicies[0].PerfBoostMode )
        v17 = Domain->MaxPercent;
      else
        v17 = 100;
      MaxPolicyPercent = Domain->QosPolicies[0].MaxPolicyPercent;
      if ( MaxPolicyPercent < 0x64 && v17 >= MaxPolicyPercent )
        v17 = Domain->QosPolicies[0].MaxPolicyPercent;
      MaxEquivalentFrequencyPercent = Domain->QosPolicies[0].MaxEquivalentFrequencyPercent;
      if ( v17 < MaxEquivalentFrequencyPercent )
        MaxEquivalentFrequencyPercent = v17;
      if ( (_DWORD)v13 == -1 )
        v20 = MaxEquivalentFrequencyPercent;
      else
        v20 = PpmPerfPercentageFromFrequency(v13, Domain->NominalFrequency);
      if ( !a6 && v20 >= MaxEquivalentFrequencyPercent )
        v20 = MaxEquivalentFrequencyPercent;
      if ( v12 == -1 )
      {
        if ( Domain->QosPolicies[0].AllowThrottling )
          MinPerfPercent = MinThrottlePercent;
        else
          MinPerfPercent = Domain->MinPerfPercent;
        if ( MinPerfPercent <= Domain->QosPolicies[0].MinPolicyPercent )
          MinPerfPercent = Domain->QosPolicies[0].MinPolicyPercent;
      }
      else
      {
        MinPerfPercent = PpmPerfPercentageFromFrequency(v12, Domain->NominalFrequency);
      }
      v22 = v20;
      if ( MinPerfPercent < v20 )
        v22 = MinPerfPercent;
      if ( MinThrottlePercent <= v22 )
      {
        MinThrottlePercent = MinPerfPercent;
        if ( MinPerfPercent >= v20 )
          MinThrottlePercent = v20;
      }
      GuaranteedPercent = Domain->GuaranteedPercent;
      v24 = MaxPercent;
      if ( MinThrottlePercent < GuaranteedPercent )
        GuaranteedPercent = MinThrottlePercent;
      if ( v20 < MaxPercent )
        v24 = v20;
      if ( GuaranteedPercent <= v24 )
      {
        if ( v20 >= MaxPercent )
          v20 = MaxPercent;
      }
      else
      {
        v20 = GuaranteedPercent;
      }
      v25 = v20;
      if ( (a3 != -1 || Domain->QosPolicies[0].ProvideGuidance)
        && (a3 || Domain->AutonomousCapability != 1)
        && Domain->AutonomousCapability != 2 )
      {
        v26 = PpmPerfPercentageFromFrequency(a3, Domain->NominalFrequency);
        v25 = v26;
        if ( v27 < v26 )
          v26 = v27;
        if ( GuaranteedPercent <= v26 )
        {
          if ( v27 < v25 )
            v25 = v27;
        }
        else
        {
          v25 = GuaranteedPercent;
        }
      }
      guard_dispatch_icall_no_overrides(Domain->Processors->PerfContext, v25);
    }
  }
  else
  {
    v11 = -1073741637;
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v11;
}
