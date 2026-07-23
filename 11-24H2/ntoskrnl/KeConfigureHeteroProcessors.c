/*
 * XREFs of KeConfigureHeteroProcessors @ 0x14042B440
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140AC57E0 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x140330300 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x14037342C (KiConfigureCpuSetSchedulingInformation.c)
 *     KiComputeHeteroConfig @ 0x14042B64C (KiComputeHeteroConfig.c)
 *     KiTraceLogHeteroRundown @ 0x14042BA28 (KiTraceLogHeteroRundown.c)
 *     KiGetNumberOfActiveSubNodes @ 0x14042C3A8 (KiGetNumberOfActiveSubNodes.c)
 *     KiInitializeSystemSubNodeEnumerationContext @ 0x14042C414 (KiInitializeSystemSubNodeEnumerationContext.c)
 *     KiUpdateProcessorClasses @ 0x14042C4B8 (KiUpdateProcessorClasses.c)
 *     KiUpdateHgsScores @ 0x14042C79C (KiUpdateHgsScores.c)
 *     KiInstallSubNodeHeteroSets @ 0x1404A7D80 (KiInstallSubNodeHeteroSets.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KeConfigureHeteroProcessors(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // r14
  unsigned int v7; // edi
  int v8; // esi
  int v9; // ebp
  __int64 v10; // rdx
  int v11; // r15d
  int v12; // eax
  unsigned int v13; // edi
  int v14; // esi
  __int64 v16; // [rsp+20h] [rbp-78h]
  __int64 v17; // [rsp+28h] [rbp-70h] BYREF
  _OWORD v18[2]; // [rsp+30h] [rbp-68h] BYREF

  v3 = 0;
  v17 = 0LL;
  memset(v18, 0, sizeof(v18));
  KiComputeHeteroConfig(a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v5, 2LL);
  }
  KiUpdateProcessorClasses();
  KiUpdateHgsScores();
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( (unsigned int)KiGetNumberOfActiveSubNodes() > 1
    && (Feature_MultiSubNodeHeteroScheduler__private_featureState & 0x10) == 0 )
  {
    v16 = Feature_MultiSubNodeHeteroScheduler__private_featureState | 1u;
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_MultiSubNodeHeteroScheduler__private_descriptor,
      v16,
      3LL,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v16,
      3LL,
      &Feature_MultiSubNodeHeteroScheduler__private_descriptor);
  }
  if ( *(_DWORD *)(KiHeteroConfig + 12) )
  {
    v8 = 1;
    v9 = 1;
LABEL_21:
    v7 = 1;
    goto LABEL_22;
  }
  if ( *(_DWORD *)(KiHeteroConfig + 16) )
  {
    v9 = *(_DWORD *)(KiHeteroConfig + 8);
    goto LABEL_21;
  }
LABEL_22:
  KiInitializeSystemSubNodeEnumerationContext(v18, 0LL);
  while ( !(unsigned int)KiEnumerateNextSchedulerSubNodeInSystem((unsigned __int16 *)v18, &v17) )
    KiInstallSubNodeHeteroSets(v17, v7, KiHeteroConfig + 32, *(unsigned int *)(KiHeteroConfig + 24));
  v11 = KeHeteroSystem;
  KeHeteroSystem = v7;
  KeHeteroSystemVirtual = v8;
  KeHeteroSystemQos = v9;
  KiEfficiencyClassSystem = *(_DWORD *)(KiHeteroConfig + 20);
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
  }
  __writecr8(CurrentIrql);
  KiTraceLogHeteroRundown(&dword_140E070B8);
  v12 = KeHeteroSystem;
  v13 = 0;
  v14 = KiDefaultHeteroCpuPolicy;
  *a3 = KeHeteroSystem;
  for ( KiDefaultHeteroCpuPolicy = v12 != 0 ? KiDesiredHeteroCpuPolicy : 0; v13 < (unsigned int)KeNumberProcessors_0; ++v13 )
    KiConfigureCpuSetSchedulingInformation(KiProcessorBlock[v13]);
  if ( v14 != KiDefaultHeteroCpuPolicy || v11 != KeHeteroSystem )
    return 1;
  return v3;
}
