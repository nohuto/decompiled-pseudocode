/*
 * XREFs of PpmPerfGetVmPerfConfig @ 0x1404CD8A0
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfGetVmPerfConfig(int a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v5; // ebx
  _PROC_PERF_DOMAIN *Domain; // r11
  unsigned int MaxPercent; // esi
  unsigned int MinThrottlePercent; // ebp
  unsigned int MinPerfPercent; // eax
  unsigned int MinPolicyPercent; // r10d
  unsigned int v11; // eax
  unsigned int MaxPolicyPercent; // ecx
  unsigned int MaxEquivalentFrequencyPercent; // r9d
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, (__int64)a2, a3);
  v5 = 0;
  if ( !PpmPerfVmPerfSelectionSupported )
  {
    v5 = -1073741637;
    goto LABEL_60;
  }
  if ( !a1 )
  {
    *a2 = 0LL;
    goto LABEL_60;
  }
  Domain = KeGetCurrentPrcb()->PowerState.CheckContext.Domain;
  MaxPercent = Domain->MaxPercent;
  MinThrottlePercent = Domain->MinThrottlePercent;
  if ( Domain->QosPolicies[0].AllowThrottling )
    MinPerfPercent = Domain->MinThrottlePercent;
  else
    MinPerfPercent = Domain->MinPerfPercent;
  MinPolicyPercent = Domain->QosPolicies[0].MinPolicyPercent;
  if ( MinPerfPercent > MinPolicyPercent )
    MinPolicyPercent = MinPerfPercent;
  if ( Domain->QosPolicies[0].PerfBoostMode )
    v11 = Domain->MaxPercent;
  else
    v11 = 100;
  MaxPolicyPercent = Domain->QosPolicies[0].MaxPolicyPercent;
  if ( MaxPolicyPercent < 0x64 && v11 >= MaxPolicyPercent )
    v11 = Domain->QosPolicies[0].MaxPolicyPercent;
  MaxEquivalentFrequencyPercent = Domain->QosPolicies[0].MaxEquivalentFrequencyPercent;
  if ( v11 < MaxEquivalentFrequencyPercent )
    MaxEquivalentFrequencyPercent = v11;
  v15 = ((Domain->NominalFrequency >> 1) + 100 * a1) / Domain->NominalFrequency;
  v14 = v15;
  v16 = v15;
  if ( MaxEquivalentFrequencyPercent < v15 )
    v15 = MaxEquivalentFrequencyPercent;
  if ( MinPolicyPercent < v14 )
    v14 = MinPolicyPercent;
  if ( v14 <= MinThrottlePercent )
  {
    if ( MinPolicyPercent >= (unsigned int)v16 )
      goto LABEL_24;
LABEL_30:
    v17 = MinPolicyPercent;
    goto LABEL_25;
  }
  if ( MinPolicyPercent < (unsigned int)v16 )
    goto LABEL_30;
LABEL_24:
  v17 = v16;
LABEL_25:
  if ( v17 <= v15 )
  {
    v18 = v15;
  }
  else
  {
    v18 = v16;
    if ( MinPolicyPercent < (unsigned int)v16 )
      v18 = MinPolicyPercent;
  }
  if ( v18 >= MaxPercent )
  {
    v20 = Domain->MaxPercent;
  }
  else
  {
    v19 = v16;
    if ( MinPolicyPercent < (unsigned int)v16 )
      v19 = MinPolicyPercent;
    if ( v19 <= v15 )
    {
      v20 = v15;
    }
    else
    {
      v20 = v16;
      if ( MinPolicyPercent < (unsigned int)v16 )
        v20 = MinPolicyPercent;
    }
  }
  if ( v20 <= MinThrottlePercent )
  {
    v16 = MinThrottlePercent;
  }
  else
  {
    v21 = v16;
    if ( MinPolicyPercent < (unsigned int)v16 )
      v21 = MinPolicyPercent;
    if ( v21 <= v15 )
    {
      v22 = v15;
    }
    else
    {
      v22 = v16;
      if ( MinPolicyPercent < (unsigned int)v16 )
        v22 = MinPolicyPercent;
    }
    if ( v22 >= MaxPercent )
    {
      v16 = MaxPercent;
    }
    else
    {
      v23 = v16;
      if ( MinPolicyPercent < (unsigned int)v16 )
        v23 = MinPolicyPercent;
      if ( v23 <= v15 )
      {
        v16 = v15;
      }
      else if ( MinPolicyPercent < (unsigned int)v16 )
      {
        v16 = MinPolicyPercent;
      }
    }
  }
  guard_dispatch_icall_no_overrides(Domain->Processors->PerfContext, v16);
LABEL_60:
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v5;
}
