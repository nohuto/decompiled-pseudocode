/*
 * XREFs of PopInitializeHeteroProcessors @ 0x140AC57E0
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140AC5250 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     KeConfigureHeteroProcessors @ 0x14042B440 (KeConfigureHeteroProcessors.c)
 *     PpmEventTraceHeteroSets @ 0x14042BE28 (PpmEventTraceHeteroSets.c)
 *     PpmHeteroDetectHgsCores @ 0x14047F098 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroGetHgsPlusParkingEnablementStatus @ 0x1404A3040 (PpmHeteroGetHgsPlusParkingEnablementStatus.c)
 *     PpmIdleEnableIdleDurationExpirationTimeout @ 0x1404A376C (PpmIdleEnableIdleDurationExpirationTimeout.c)
 *     PpmHeteroReevaluateMultiCoreFeatures @ 0x1404CF3E4 (PpmHeteroReevaluateMultiCoreFeatures.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1404E2E24 (PpmHeteroUpdateHgsConfiguration.c)
 *     Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledDeviceUsageNoInline @ 0x1405D5174 (Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KeDetectHeterogeneousSets @ 0x140738C88 (KeDetectHeterogeneousSets.c)
 *     PopConfigureHeteroPolicies @ 0x140A205E0 (PopConfigureHeteroPolicies.c)
 *     PpmHeteroComputeMinRelativePerformane @ 0x140A3C090 (PpmHeteroComputeMinRelativePerformane.c)
 *     PpmEventHeteroConfigUpdate @ 0x140A59448 (PpmEventHeteroConfigUpdate.c)
 *     PpmHeteroComputeRelativePerformance @ 0x140A65B9C (PpmHeteroComputeRelativePerformance.c)
 *     PopHeteroCapabilityDeepCopy @ 0x140A72C3C (PopHeteroCapabilityDeepCopy.c)
 *     PpmEventHeteroPolicy @ 0x140A7C764 (PpmEventHeteroPolicy.c)
 *     KeNotifyHeteroParkingPolicyChange @ 0x140A886D8 (KeNotifyHeteroParkingPolicyChange.c)
 *     PpmHeteroDetectFavoredCores @ 0x140AB285C (PpmHeteroDetectFavoredCores.c)
 *     PopIsSimulatedArchitecturalHeteroPresent @ 0x140AB519C (PopIsSimulatedArchitecturalHeteroPresent.c)
 *     PopGetUnparkOnUnimportantUtilityEnablementStatus @ 0x140B621C8 (PopGetUnparkOnUnimportantUtilityEnablementStatus.c)
 */

char __fastcall PopInitializeHeteroProcessors(char a1)
{
  __int64 v1; // rsi
  char v3; // r14
  char v4; // bp
  unsigned __int8 v5; // r15
  int v6; // r8d
  int v7; // edi
  unsigned __int8 v8; // al
  unsigned __int8 IsSimulatedArchitecturalHeteroPresent; // al
  unsigned __int8 v10; // al
  __int64 v11; // rdx
  SIZE_T v12; // r12
  SIZE_T v13; // rbx
  __int64 v14; // rdx
  char v15; // al
  int *v16; // rsi
  unsigned int v17; // edi
  size_t v18; // rbx
  __int64 v19; // rcx
  int v20; // r8d
  int v21; // eax
  int v23; // [rsp+58h] [rbp+10h] BYREF

  v1 = PpmHeteroCapabilityTest;
  if ( !PpmHeteroCapabilityTest )
    return 0;
  v4 = 0;
  if ( (PpmEcoQosProfile
     || PpmUtilityQosProfile
     || PpmBackgroundProfile
     || PpmEntryLevelPerfProfile
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
    goto LABEL_15;
  }
  if ( v4 )
  {
LABEL_15:
    v5 = 1;
    if ( !PpmPerfQosGroupPolicyDisable )
      goto LABEL_17;
  }
  v5 = 0;
LABEL_17:
  if ( a1 )
  {
    v6 = *(_DWORD *)v1;
    *(_DWORD *)(v1 + 4) = PpmHeteroWorkloadClasses;
    memset_0((void *)(v1 + 24), 0, 4LL * (unsigned int)(PpmHeteroWorkloadClasses * v6));
    PpmHeteroComputeRelativePerformance();
    PpmHeteroUpdateHgsConfiguration();
    v7 = 0;
    v8 = PpmHeteroDetectHgsCores(v1);
    v23 = v8;
    if ( v8 )
    {
      v7 = 5;
    }
    else
    {
      IsSimulatedArchitecturalHeteroPresent = PopIsSimulatedArchitecturalHeteroPresent(v1);
      v23 = IsSimulatedArchitecturalHeteroPresent;
      if ( IsSimulatedArchitecturalHeteroPresent )
      {
        v7 = PpmHeteroDetectFavoredCores(v1) != 0 ? 6 : 1;
      }
      else
      {
        v23 = KeDetectHeterogeneousSets(v1);
        if ( v23 )
        {
          if ( PpmHeteroDetectFavoredCores(v1) )
          {
            v7 = 6;
          }
          else
          {
            v7 = 2;
            if ( KeGetCurrentPrcb()->CpuVendor == 1 )
              v7 = 6;
          }
        }
        else
        {
          v10 = PpmHeteroDetectFavoredCores(v1);
          v23 = v10;
          if ( v10 )
          {
            v7 = 3;
          }
          else if ( v5 )
          {
            v23 = 1;
            v7 = 4;
          }
        }
      }
    }
    if ( v7 == PopHeteroSystem )
    {
      v11 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
      v3 = 0;
      v12 = 2LL * *(unsigned int *)(v1 + 4);
      v13 = 4LL * (unsigned int)(*(_DWORD *)v1 * *(_DWORD *)(v1 + 4));
      if ( RtlCompareMemory((const void *)(v1 + 24), (const void *)(v11 + 24), v13) != v13
        || (v14 = *(_QWORD *)&KeNumberProcessorsGroup0[1],
            RtlCompareMemory(*(const void **)(v1 + 16), *(const void **)(v14 + 16), v12) != v12) )
      {
        v3 = 1;
      }
    }
    else
    {
      v3 = 1;
    }
  }
  else
  {
    v7 = PopHeteroSystem;
    v1 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    v3 = 0;
    v23 = PopHeteroSystem != 0;
  }
  if ( v7 == 6 || v7 == 5 && PpmHeteroHgsVendor == 1 )
    PpmHeteroReevaluateMultiCoreFeatures();
  PpmHeteroComputeMinRelativePerformane();
  v15 = PopConfigureHeteroPolicies(v7, a1, PpmMaxCoreClasses - 1);
  if ( v3 || v7 && v15 || PpmPerfQosSupportedAndAllowed != v5 )
    KeConfigureHeteroProcessors(v1, v5, &v23);
  if ( v23 )
  {
    v19 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    PopHeteroSystem = v7;
    if ( v1 != v19 )
      PopHeteroCapabilityDeepCopy(v19, (int *)v1);
    if ( v5 )
      PpmIdleEnableIdleDurationExpirationTimeout();
    goto LABEL_54;
  }
  v16 = *(int **)&KeNumberProcessorsGroup0[1];
  PopHeteroSystem = 0;
  v17 = *v16;
  v18 = 2LL * (unsigned int)v16[1];
  memset_0(v16 + 6, 0, 4LL * (unsigned int)(v16[1] * *v16));
  memset_0(*((void **)v16 + 2), 0, v18);
  memset_0(*((void **)v16 + 1), 0, v17);
  if ( v4 )
LABEL_54:
    PpmPerfQosSupportedAndConfigured = 1;
  v20 = PopHeteroSystem;
  if ( ((PopHeteroSystem - 1) & 0xFFFFFFFA) != 0 )
  {
    PpmHeteroPolicy = 0;
    v21 = 0;
  }
  else
  {
    v21 = PpmHeteroDesiredPolicy;
    PpmHeteroPolicy = PpmHeteroDesiredPolicy;
  }
  if ( a1 )
    KeNotifyHeteroParkingPolicyChange(v21 != 0);
  if ( PpmPerfArtificialDomainSetting == -1 )
    PpmPerfArtificialDomainEnabled = v20 != 0;
  PpmHeteroHgsParkingEnabled = PpmHeteroGetHgsPlusParkingEnablementStatus();
  PpmIsUnparkOnUnimportantUtilitySupported = 0;
  if ( (unsigned int)Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledDeviceUsageNoInline() )
    PpmIsUnparkOnUnimportantUtilitySupported = PopGetUnparkOnUnimportantUtilityEnablementStatus();
  PpmEventHeteroConfigUpdate();
  PpmEventHeteroPolicy(0);
  PpmEventTraceHeteroSets(1);
  PpmPerfQosSupportedAndAllowed = v5;
  return v3;
}
