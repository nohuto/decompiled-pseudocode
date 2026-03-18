/*
 * XREFs of PpmEventTraceControlCallback @ 0x140AC4110
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     PpmEventQosClassPerfSelection @ 0x140265DB4 (PpmEventQosClassPerfSelection.c)
 *     PpmEventHgsHardwareTable @ 0x140268A24 (PpmEventHgsHardwareTable.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PopExecuteOnTargetProcessors @ 0x1403B2EE8 (PopExecuteOnTargetProcessors.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     PpmEventTraceHeteroSets @ 0x140427BB0 (PpmEventTraceHeteroSets.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PoEnergyEstimationEnabled @ 0x14044A480 (PoEnergyEstimationEnabled.c)
 *     PpmEventPlatformVetoRundown @ 0x1404848AC (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x1404849FC (PpmEventProcessorVetoRundown.c)
 *     PpmEventVetoReasonRundown @ 0x1404AB108 (PpmEventVetoReasonRundown.c)
 *     PpmHeteroHgsEvaluateContainmentMinPolicyDecision @ 0x1404AF28C (PpmHeteroHgsEvaluateContainmentMinPolicyDecision.c)
 *     PpmEventTraceLPIState @ 0x1404BB970 (PpmEventTraceLPIState.c)
 *     PpmEventHgsHardwareTableResonMapTable @ 0x1404C363C (PpmEventHgsHardwareTableResonMapTable.c)
 *     PpmEventHgsNormalizedTable @ 0x1404C66FC (PpmEventHgsNormalizedTable.c)
 *     PpmEventParkNodeRestriction @ 0x1404CBA34 (PpmEventParkNodeRestriction.c)
 *     PpmEventHgsHardwareTableResonChanged @ 0x1404CD078 (PpmEventHgsHardwareTableResonChanged.c)
 *     PpmEventHgsContainmentHwUpdate @ 0x1404CE158 (PpmEventHgsContainmentHwUpdate.c)
 *     Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline @ 0x1404F2210 (Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x1405CE05C (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmHeteroHgsGetWpsHint @ 0x1405D2810 (PpmHeteroHgsGetWpsHint.c)
 *     PpmEventHgsContainmentGroupInfo @ 0x1405D4700 (PpmEventHgsContainmentGroupInfo.c)
 *     PpmEventHgsContainmentPolicyChange @ 0x1405D48B8 (PpmEventHgsContainmentPolicyChange.c)
 *     PpmEventHgsContainmentPolicyChangeV1 @ 0x1405D4A3C (PpmEventHgsContainmentPolicyChangeV1.c)
 *     PpmEventSoftParkLatencyUpdate @ 0x1405D51A8 (PpmEventSoftParkLatencyUpdate.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PpmEventTraceProcessorPerformanceRundownHv @ 0x140751BF4 (PpmEventTraceProcessorPerformanceRundownHv.c)
 *     PpmEventHeteroPolicy @ 0x140A20AFC (PpmEventHeteroPolicy.c)
 *     PpmEventTraceProfiles @ 0x140A3E7F4 (PpmEventTraceProfiles.c)
 *     PpmInfoTraceProfileSettings @ 0x140A56FDC (PpmInfoTraceProfileSettings.c)
 *     PpmEventQosClassPolicy @ 0x140A5DE84 (PpmEventQosClassPolicy.c)
 *     PpmEventTraceProcessorIdle @ 0x140A6BAA8 (PpmEventTraceProcessorIdle.c)
 *     PpmEventTraceProcessorPerformance @ 0x140A70908 (PpmEventTraceProcessorPerformance.c)
 *     PpmEventTraceParkNodeRundown @ 0x140A7234C (PpmEventTraceParkNodeRundown.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140A7568C (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     PpmEventQosSupport @ 0x140A86E7C (PpmEventQosSupport.c)
 *     PpmEventTracePpmProfileStatusRundown @ 0x140A922CC (PpmEventTracePpmProfileStatusRundown.c)
 *     PpmEventStaticPolicyRundown @ 0x140A93DDC (PpmEventStaticPolicyRundown.c)
 *     PpmEventTraceAccountingBucketIntervalsRundown @ 0x140A9576C (PpmEventTraceAccountingBucketIntervalsRundown.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x140A999C0 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140A9E5DC (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventEnergyEstimationRundown @ 0x140AA3B88 (PpmEventEnergyEstimationRundown.c)
 */

void __fastcall PpmEventTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 v5; // rdx
  unsigned int v6; // r8d
  __int64 Prcb; // rax
  __int64 i; // rbx
  unsigned int j; // edi
  __int64 v10; // rcx
  unsigned int k; // ebx
  __int64 v12; // r14
  char v13; // di
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  char v18; // al
  unsigned int m; // edi
  __int64 v20; // rbx
  __int64 v21; // rbx
  unsigned int v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  struct _KAFFINITY_EX *v24; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-C0h]
  __int16 v26; // [rsp+48h] [rbp-B8h]
  int v27; // [rsp+4Ah] [rbp-B6h]
  __int16 v28; // [rsp+4Eh] [rbp-B2h]
  struct _KAFFINITY_EX v29; // [rsp+50h] [rbp-B0h] BYREF

  v27 = 0;
  v28 = 0;
  v22 = 0;
  memset_0(&v29, 0, sizeof(v29));
  v23 = 0;
  if ( (ControlCode & 0xFFFFFFFD) == 0 )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v5, v6);
    v25 = KeActiveProcessors.Bitmap[0];
    v26 = 0;
    v24 = &KeActiveProcessors;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v22, (unsigned __int16 **)&v24) )
    {
      Prcb = KeGetPrcb(v22);
      PpmEventTraceProcessorPerformance(Prcb);
    }
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( ControlCode == 2 )
      {
        PpmEventTraceProcessorPerformanceDomainRundown(i);
        PpmEventQosClassPolicy(i, 1);
        PpmEventQosClassPerfSelection(i, 1);
      }
      for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
      {
        v10 = *(_QWORD *)(i + 312) + 1192LL * j;
        if ( *(_DWORD *)(v10 + 16) == 1 )
          PpmEventTraceProcessorPerformanceRundownHv(*(__int64 **)v10);
      }
    }
    if ( ControlCode == 2 )
    {
      PpmEventTraceLPIState();
      PpmEventStaticPolicyRundown();
      PpmEventQosSupport(1);
      PpmEventHeteroPolicy(1);
      if ( (unsigned int)Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline() )
        PpmEventSoftParkLatencyUpdate(1, 1, PpmHighPerfSoftParkLatencyUs);
      PpmEventTraceHeteroSets(0);
      if ( PpmHeteroHgsEnabled || PpmHeteroHgsThreadEnabled )
      {
        PpmEventHgsHardwareTable(1);
        PpmEventHgsNormalizedTable();
        if ( PpmHeteroHgsDynamicUpdateReasonEnabled )
        {
          PpmEventHgsHardwareTableResonChanged(1);
          PpmEventHgsHardwareTableResonMapTable();
        }
        if ( (PpmHeteroHgsContainmentState & 4) != 0 )
        {
          for ( k = 0; k < PpmParkNumNodes; ++k )
          {
            v12 = 208LL * k;
            PpmEventHgsContainmentGroupInfo(v12 + PpmParkNodes, 1);
            v13 = PpmHeteroHgsEvaluateContainmentMinPolicyDecision(v12 + PpmParkNodes);
            if ( (unsigned int)Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline() )
            {
              v17 = *(_QWORD *)(v12 + PpmParkNodes + 192);
              if ( v17 )
                v18 = *(_BYTE *)(v17 + 827);
              else
                v18 = 0;
              PpmEventHgsContainmentPolicyChangeV1(v15, v14, v16, v13, v18, 1);
            }
            else
            {
              PpmEventHgsContainmentPolicyChange(v15, v14, v16, v13, 1);
            }
            if ( (unsigned int)Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline() )
            {
              *(_QWORD *)&v29.Count = 2097153LL;
              memset_0(&v29.8, 0, sizeof(v29.8));
              v23 = 3;
              PpmHeteroHgsGetWpsHint(v12 + PpmParkNodes, &v29, &v23);
              PpmEventHgsContainmentHwUpdate((__int64)&v29, (__int64)&v23, 1);
            }
          }
        }
      }
    }
    for ( m = 0; m < PpmParkNumNodes; ++m )
    {
      v20 = PpmParkNodes + 208LL * m;
      PpmEventTraceParkNodeRundown(v20);
      PpmEventParkNodeRestriction(1, v20);
    }
    PopAcquireRwLockExclusive(&PpmIdlePolicyLock);
    PpmEventTracePpmProfileStatusRundown();
    PpmEventTraceProfiles(1);
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN) )
      PpmInfoTraceProfileSettings();
    PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( ControlCode == 2 )
    {
      PpmEventTraceAccountingBucketIntervalsRundown();
      PopAcquireRwLockShared((volatile signed __int64 *)&PpmIdlePolicyLock);
      PpmEventTraceCoordinatedIdleStates();
      PpmEventTracePlatformIdleAccounting();
      PpmEventVetoReasonRundown();
      PpmEventPlatformVetoRundown();
      v25 = KeActiveProcessors.Bitmap[0];
      v26 = 0;
      v24 = &KeActiveProcessors;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v22, (unsigned __int16 **)&v24) )
      {
        v21 = KeGetPrcb(v22);
        PpmEventProcessorVetoRundown(v21);
        PpmEventTraceProcessorIdle(v21);
      }
      PopExecuteOnTargetProcessors(
        (__int64)&KeActiveProcessors,
        (__int64)PpmEventTraceProcessorIdleAccounting,
        0LL,
        0LL);
      PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
      if ( PoEnergyEstimationEnabled() )
        PpmEventEnergyEstimationRundown();
    }
  }
}
