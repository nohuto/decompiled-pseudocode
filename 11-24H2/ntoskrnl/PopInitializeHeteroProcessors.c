/*
 * XREFs of PopInitializeHeteroProcessors @ 0x140A2A138
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140AC77C4 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140203248 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     KeConfigureHeteroProcessors @ 0x140438880 (KeConfigureHeteroProcessors.c)
 *     PpmEventTraceHeteroSets @ 0x140439268 (PpmEventTraceHeteroSets.c)
 *     PpmHeteroDetectHgsCores @ 0x140483B78 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroGetHgsPlusParkingEnablementStatus @ 0x1404A8C20 (PpmHeteroGetHgsPlusParkingEnablementStatus.c)
 *     PpmIdleEnableIdleDurationExpirationTimeout @ 0x1404A934C (PpmIdleEnableIdleDurationExpirationTimeout.c)
 *     PpmHeteroReevaluateMultiCoreFeatures @ 0x1404D5F94 (PpmHeteroReevaluateMultiCoreFeatures.c)
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     KeDetectHeterogeneousSets @ 0x14073AD58 (KeDetectHeterogeneousSets.c)
 *     PpmEventHeteroConfigUpdate @ 0x140A2A48C (PpmEventHeteroConfigUpdate.c)
 *     PpmEventHeteroPolicy @ 0x140A2A618 (PpmEventHeteroPolicy.c)
 *     PpmHeteroComputeMinRelativePerformane @ 0x140A2A838 (PpmHeteroComputeMinRelativePerformane.c)
 *     PopConfigureHeteroPolicies @ 0x140A2A938 (PopConfigureHeteroPolicies.c)
 *     KeNotifyHeteroParkingPolicyChange @ 0x140A2B528 (KeNotifyHeteroParkingPolicyChange.c)
 *     PpmHeteroComputeRelativePerformance @ 0x140A2B570 (PpmHeteroComputeRelativePerformance.c)
 *     PopHeteroCapabilityDeepCopy @ 0x140A7893C (PopHeteroCapabilityDeepCopy.c)
 *     PpmHeteroDetectFavoredCores @ 0x140AB8398 (PpmHeteroDetectFavoredCores.c)
 *     PopIsSimulatedArchitecturalHeteroPresent @ 0x140ABA180 (PopIsSimulatedArchitecturalHeteroPresent.c)
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
  int *v11; // rsi
  unsigned int v12; // edi
  size_t v13; // rbx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // eax
  int v18; // r8d
  unsigned __int8 v19; // al
  unsigned __int8 IsSimulatedArchitecturalHeteroPresent; // al
  unsigned __int8 v21; // al
  __int64 v22; // rdx
  SIZE_T v23; // r13
  SIZE_T v24; // rbx
  __int64 v25; // rdx
  int v27; // [rsp+68h] [rbp+10h] BYREF

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
    v27 = v19;
    if ( v19 )
    {
      v6 = 5;
    }
    else
    {
      IsSimulatedArchitecturalHeteroPresent = PopIsSimulatedArchitecturalHeteroPresent(v1);
      v27 = IsSimulatedArchitecturalHeteroPresent;
      if ( IsSimulatedArchitecturalHeteroPresent )
      {
        v6 = (unsigned __int8)PpmHeteroDetectFavoredCores(v1) != 0 ? 6 : 1;
      }
      else
      {
        v27 = KeDetectHeterogeneousSets(v1);
        if ( v27 )
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
          v27 = v21;
          if ( v21 )
          {
            v6 = 3;
          }
          else if ( v5 )
          {
            v27 = 1;
            v6 = 4;
          }
        }
      }
    }
    if ( v6 == PopHeteroSystem )
    {
      v22 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
      v7 = 0;
      v23 = 2LL * *(unsigned int *)(v1 + 4);
      v24 = 4LL * (unsigned int)(*(_DWORD *)v1 * *(_DWORD *)(v1 + 4));
      if ( RtlCompareMemory((const void *)(v1 + 24), (const void *)(v22 + 24), v24) != v24
        || (v25 = *(_QWORD *)&KeNumberProcessorsGroup0[1],
            RtlCompareMemory(*(const void **)(v1 + 16), *(const void **)(v25 + 16), v23) != v23) )
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
    v1 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    v7 = 0;
    v27 = PopHeteroSystem != 0;
  }
  if ( v6 == 6 || v6 == 5 && PpmHeteroHgsVendor == 1 )
    PpmHeteroReevaluateMultiCoreFeatures();
  PpmHeteroComputeMinRelativePerformane();
  LOBYTE(v8) = v3;
  LOBYTE(v9) = PpmMaxCoreClasses - 1;
  v10 = PopConfigureHeteroPolicies(v6, v8, v9);
  if ( v7 || v6 && v10 || PpmPerfQosSupportedAndAllowed != v5 )
    KeConfigureHeteroProcessors(v1, v5, &v27);
  if ( v27 )
  {
    v14 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    PopHeteroSystem = v6;
    if ( v1 != v14 )
      PopHeteroCapabilityDeepCopy(v14, v1);
    if ( v5 )
      PpmIdleEnableIdleDurationExpirationTimeout();
    goto LABEL_30;
  }
  v11 = *(int **)&KeNumberProcessorsGroup0[1];
  PopHeteroSystem = 0;
  v12 = *v11;
  v13 = 2LL * (unsigned int)v11[1];
  memset_0(v11 + 6, 0, 4LL * (unsigned int)(v11[1] * *v11));
  memset_0(*((void **)v11 + 2), 0, v13);
  memset_0(*((void **)v11 + 1), 0, v12);
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
