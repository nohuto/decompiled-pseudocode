/*
 * XREFs of PopInitializeHeteroProcessors @ 0x140A2061C
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140A3EE58 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140267B4C (PpmHeteroUpdateHgsConfiguration.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     PpmEventTraceHeteroSets @ 0x140427BB0 (PpmEventTraceHeteroSets.c)
 *     KeConfigureHeteroProcessors @ 0x14042819C (KeConfigureHeteroProcessors.c)
 *     PpmHeteroDetectHgsCores @ 0x140483158 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroGetHgsPlusParkingEnablementStatus @ 0x1404A7ED4 (PpmHeteroGetHgsPlusParkingEnablementStatus.c)
 *     PpmIdleEnableIdleDurationExpirationTimeout @ 0x1404A830C (PpmIdleEnableIdleDurationExpirationTimeout.c)
 *     PpmHeteroReevaluateMultiCoreFeatures @ 0x1404D68A4 (PpmHeteroReevaluateMultiCoreFeatures.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     KeDetectHeterogeneousSets @ 0x14072EAC8 (KeDetectHeterogeneousSets.c)
 *     PpmEventHeteroConfigUpdate @ 0x140A20970 (PpmEventHeteroConfigUpdate.c)
 *     PpmEventHeteroPolicy @ 0x140A20AFC (PpmEventHeteroPolicy.c)
 *     PpmHeteroComputeMinRelativePerformane @ 0x140A20D1C (PpmHeteroComputeMinRelativePerformane.c)
 *     PopConfigureHeteroPolicies @ 0x140A20E1C (PopConfigureHeteroPolicies.c)
 *     KeNotifyHeteroParkingPolicyChange @ 0x140A21A04 (KeNotifyHeteroParkingPolicyChange.c)
 *     PpmHeteroComputeRelativePerformance @ 0x140A21A4C (PpmHeteroComputeRelativePerformance.c)
 *     PopHeteroCapabilityDeepCopy @ 0x140A76CA4 (PopHeteroCapabilityDeepCopy.c)
 *     PpmHeteroDetectFavoredCores @ 0x140AB3FD0 (PpmHeteroDetectFavoredCores.c)
 *     PopIsSimulatedArchitecturalHeteroPresent @ 0x140AB5E40 (PopIsSimulatedArchitecturalHeteroPresent.c)
 */

char __fastcall PopInitializeHeteroProcessors(char a1)
{
  __int64 v1; // rsi
  int v2; // ebp
  char v3; // r13
  char v4; // r14
  unsigned __int8 v5; // r12
  unsigned int v6; // edi
  char v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  char v10; // al
  __int64 v11; // rsi
  unsigned int v12; // edi
  size_t v13; // rbx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // eax
  int v18; // r8d
  unsigned __int8 v19; // al
  unsigned __int8 IsSimulatedArchitecturalHeteroPresent; // al
  unsigned __int8 v21; // al
  SIZE_T v22; // r13
  SIZE_T v23; // rbx
  int v25; // [rsp+68h] [rbp+10h] BYREF

  v1 = PpmHeteroCapabilityTest;
  v2 = 0;
  v3 = a1;
  if ( !PpmHeteroCapabilityTest )
    return 0;
  v4 = 0;
  if ( (PpmEntryLevelPerfProfile
     || PpmEcoQosProfile
     || PpmUtilityQosProfile
     || PpmBackgroundProfile
     || PpmMultimediaQosProfile
     || PpmPerfAlwaysComputeQosEnabled)
    && PpmPerfSchedulerDirectedPerfStatesSupported
    && KeQueryActiveProcessorCountEx(0) >= 2 )
  {
    v4 = 1;
  }
  if ( PpmPerfVmQosSupported )
  {
    v4 = 1;
  }
  else if ( !v4 )
  {
LABEL_6:
    v5 = 0;
    goto LABEL_7;
  }
  v5 = 1;
  if ( PpmPerfQosGroupPolicyDisable )
    goto LABEL_6;
LABEL_7:
  if ( v3 )
  {
    v18 = *(_DWORD *)v1;
    *(_DWORD *)(v1 + 4) = PpmHeteroWorkloadClasses;
    memset_0((void *)(v1 + 24), 0, 4LL * (unsigned int)(PpmHeteroWorkloadClasses * v18));
    PpmHeteroComputeRelativePerformance();
    PpmHeteroUpdateHgsConfiguration();
    v6 = 0;
    v19 = PpmHeteroDetectHgsCores(v1);
    v25 = v19;
    if ( v19 )
    {
      v6 = 5;
    }
    else
    {
      IsSimulatedArchitecturalHeteroPresent = PopIsSimulatedArchitecturalHeteroPresent(v1);
      v25 = IsSimulatedArchitecturalHeteroPresent;
      if ( IsSimulatedArchitecturalHeteroPresent )
      {
        v6 = (unsigned __int8)PpmHeteroDetectFavoredCores(v1) != 0 ? 6 : 1;
      }
      else
      {
        v25 = KeDetectHeterogeneousSets(v1);
        if ( v25 )
        {
          if ( (unsigned __int8)PpmHeteroDetectFavoredCores(v1) )
          {
            v6 = 6;
          }
          else
          {
            v6 = 2;
            if ( KeGetCurrentPrcb()->CpuVendor == 1 )
              v6 = 6;
          }
        }
        else
        {
          v21 = PpmHeteroDetectFavoredCores(v1);
          v25 = v21;
          if ( v21 )
          {
            v6 = 3;
          }
          else if ( v5 )
          {
            v25 = 1;
            v6 = 4;
          }
        }
      }
    }
    if ( v6 == PopHeteroSystem )
    {
      v7 = 0;
      v22 = 2LL * *(unsigned int *)(v1 + 4);
      v23 = 4LL * (unsigned int)(*(_DWORD *)v1 * *(_DWORD *)(v1 + 4));
      if ( RtlCompareMemory((const void *)(v1 + 24), (const void *)(PpmHeteroCapability + 24), v23) != v23
        || RtlCompareMemory(*(const void **)(v1 + 16), *(const void **)(PpmHeteroCapability + 16), v22) != v22 )
      {
        v7 = 1;
      }
      v3 = a1;
    }
    else
    {
      v7 = 1;
    }
  }
  else
  {
    v6 = PopHeteroSystem;
    v1 = PpmHeteroCapability;
    v7 = 0;
    v25 = PopHeteroSystem != 0;
  }
  if ( v6 == 6 || v6 == 5 && PpmHeteroHgsVendor == 1 )
    PpmHeteroReevaluateMultiCoreFeatures();
  PpmHeteroComputeMinRelativePerformane();
  LOBYTE(v8) = v3;
  LOBYTE(v9) = PpmMaxCoreClasses - 1;
  v10 = PopConfigureHeteroPolicies(v6, v8, v9);
  if ( v7 || v6 && v10 || PpmPerfQosSupportedAndAllowed != v5 )
    KeConfigureHeteroProcessors(v1, v5, &v25);
  if ( v25 )
  {
    v14 = PpmHeteroCapability;
    PopHeteroSystem = v6;
    if ( v1 != PpmHeteroCapability )
      PopHeteroCapabilityDeepCopy(PpmHeteroCapability, v1);
    if ( v5 )
      PpmIdleEnableIdleDurationExpirationTimeout();
    goto LABEL_30;
  }
  v11 = PpmHeteroCapability;
  PopHeteroSystem = 0;
  v12 = *(_DWORD *)PpmHeteroCapability;
  v13 = 2LL * *(unsigned int *)(PpmHeteroCapability + 4);
  memset_0(
    (void *)(PpmHeteroCapability + 24),
    0,
    4LL * (unsigned int)(*(_DWORD *)(PpmHeteroCapability + 4) * *(_DWORD *)PpmHeteroCapability));
  memset_0(*(void **)(v11 + 16), 0, v13);
  memset_0(*(void **)(v11 + 8), 0, v12);
  if ( v4 )
LABEL_30:
    PpmPerfQosSupportedAndConfigured = 1;
  v15 = PopHeteroSystem;
  if ( ((PopHeteroSystem - 1) & 0xFFFFFFFA) != 0 )
  {
    PpmHeteroPolicy = 0;
    v16 = 0;
  }
  else
  {
    v16 = PpmHeteroDesiredPolicy;
    PpmHeteroPolicy = PpmHeteroDesiredPolicy;
  }
  if ( v3 )
  {
    LOBYTE(v14) = v16 != 0;
    KeNotifyHeteroParkingPolicyChange(v14);
  }
  if ( PpmPerfArtificialDomainSetting == -1 )
  {
    LOBYTE(v2) = v15 != 0;
    PpmPerfArtificialDomainEnabled = v2;
  }
  PpmHeteroHgsParkingEnabled = PpmHeteroGetHgsPlusParkingEnablementStatus();
  PpmEventHeteroConfigUpdate();
  PpmEventHeteroPolicy(0LL);
  PpmEventTraceHeteroSets(1);
  PpmPerfQosSupportedAndAllowed = v5;
  return v7;
}
