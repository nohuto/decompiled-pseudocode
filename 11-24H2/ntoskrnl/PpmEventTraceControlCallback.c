/*
 * XREFs of PpmEventTraceControlCallback @ 0x140ACA960
 * Callers:
 *     <none>
 * Callees:
 *     PpmEventHgsHardwareTable @ 0x140203014 (PpmEventHgsHardwareTable.c)
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     PopExecuteOnTargetProcessors @ 0x1403529A4 (PopExecuteOnTargetProcessors.c)
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     KeEnumerateNextProcessor @ 0x14040D4F0 (KeEnumerateNextProcessor.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PpmEventTraceHeteroSets @ 0x140439268 (PpmEventTraceHeteroSets.c)
 *     PoEnergyEstimationEnabled @ 0x140448760 (PoEnergyEstimationEnabled.c)
 *     PpmHeteroHgsEvaluateContainmentMinPolicyDecision @ 0x140457AE8 (PpmHeteroHgsEvaluateContainmentMinPolicyDecision.c)
 *     Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline @ 0x140457B34 (Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventPlatformVetoRundown @ 0x140485158 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x1404852A8 (PpmEventProcessorVetoRundown.c)
 *     PpmEventQosClassPerfSelection @ 0x140494BCC (PpmEventQosClassPerfSelection.c)
 *     PpmEventVetoReasonRundown @ 0x1404AC4C8 (PpmEventVetoReasonRundown.c)
 *     PpmEventTraceLPIState @ 0x1404BADC0 (PpmEventTraceLPIState.c)
 *     PpmEventHgsHardwareTableResonMapTable @ 0x1404C203C (PpmEventHgsHardwareTableResonMapTable.c)
 *     PpmEventHgsNormalizedTable @ 0x1404C6EBC (PpmEventHgsNormalizedTable.c)
 *     PpmEventHgsHardwareTableResonChanged @ 0x1404CCC34 (PpmEventHgsHardwareTableResonChanged.c)
 *     PpmEventHgsContainmentHwUpdate @ 0x1404CDF38 (PpmEventHgsContainmentHwUpdate.c)
 *     PpmEventParkNodeRestriction @ 0x1404ED06C (PpmEventParkNodeRestriction.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B4FB0 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x1405D2930 (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmHeteroHgsGetWpsHint @ 0x1405D72A4 (PpmHeteroHgsGetWpsHint.c)
 *     PpmEventHgsContainmentGroupInfo @ 0x1405D916C (PpmEventHgsContainmentGroupInfo.c)
 *     PpmEventHgsContainmentPolicyChange @ 0x1405D9324 (PpmEventHgsContainmentPolicyChange.c)
 *     PpmEventHgsContainmentPolicyChangeV1 @ 0x1405D94A8 (PpmEventHgsContainmentPolicyChangeV1.c)
 *     PpmEventSoftParkLatencyUpdate @ 0x1405D9C14 (PpmEventSoftParkLatencyUpdate.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PpmEventTraceProcessorPerformanceRundownHv @ 0x14075E5EC (PpmEventTraceProcessorPerformanceRundownHv.c)
 *     PpmEventTraceParkNodeRundownEx @ 0x14076603C (PpmEventTraceParkNodeRundownEx.c)
 *     PpmEventHeteroPolicy @ 0x140A2A618 (PpmEventHeteroPolicy.c)
 *     PpmEventTraceProfiles @ 0x140A46C1C (PpmEventTraceProfiles.c)
 *     PpmInfoTraceProfileSettings @ 0x140A57E30 (PpmInfoTraceProfileSettings.c)
 *     PpmEventQosClassPolicy @ 0x140A5E934 (PpmEventQosClassPolicy.c)
 *     PpmEventTraceProcessorIdle @ 0x140A6E344 (PpmEventTraceProcessorIdle.c)
 *     PpmEventTraceProcessorPerformance @ 0x140A73054 (PpmEventTraceProcessorPerformance.c)
 *     PpmEventTraceParkNodeRundown @ 0x140A74700 (PpmEventTraceParkNodeRundown.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140A77924 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     PpmEventQosSupport @ 0x140A8BB94 (PpmEventQosSupport.c)
 *     PpmEventTracePpmProfileStatusRundown @ 0x140A96518 (PpmEventTracePpmProfileStatusRundown.c)
 *     PpmEventTraceAccountingBucketIntervalsRundown @ 0x140A9B48C (PpmEventTraceAccountingBucketIntervalsRundown.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x140A9E804 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140AA3E5C (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventEnergyEstimationRundown @ 0x140AA8C10 (PpmEventEnergyEstimationRundown.c)
 *     PpmEventStaticPolicyRundown @ 0x140ACA768 (PpmEventStaticPolicyRundown.c)
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
  unsigned int m; // ebx
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  unsigned int v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  struct _KAFFINITY_EX *v27; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-C0h]
  __int16 v29; // [rsp+48h] [rbp-B8h]
  int v30; // [rsp+4Ah] [rbp-B6h]
  __int16 v31; // [rsp+4Eh] [rbp-B2h]
  struct _KAFFINITY_EX v32; // [rsp+50h] [rbp-B0h] BYREF

  v30 = 0;
  v31 = 0;
  v25 = 0;
  memset_0(&v32, 0, sizeof(v32));
  v26 = 0;
  if ( (ControlCode & 0xFFFFFFFD) == 0 )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v5, v6);
    v28 = KeActiveProcessors.Bitmap[0];
    v29 = 0;
    v27 = &KeActiveProcessors;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v25, (unsigned __int16 **)&v27) )
    {
      Prcb = KeGetPrcb(v25);
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
            v12 = 1288LL * k;
            PpmEventHgsContainmentGroupInfo(v12 + PpmParkNodes, 1);
            v13 = PpmHeteroHgsEvaluateContainmentMinPolicyDecision(v12 + PpmParkNodes);
            if ( (unsigned int)Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline() )
            {
              v17 = *(_QWORD *)(v12 + PpmParkNodes + 1272);
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
              *(_QWORD *)&v32.Count = 2097153LL;
              memset_0(&v32.8, 0, sizeof(v32.8));
              v26 = 3;
              PpmHeteroHgsGetWpsHint(v12 + PpmParkNodes, &v32, &v26);
              PpmEventHgsContainmentHwUpdate((__int64)&v32, (__int64)&v26, 1);
            }
          }
        }
      }
    }
    for ( m = 0; m < PpmParkNumNodes; ++m )
    {
      v20 = PpmParkNodes + 1288LL * m;
      if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline() )
        PpmEventTraceParkNodeRundownEx(m, v20);
      else
        PpmEventTraceParkNodeRundown(v20);
      LOBYTE(v21) = 1;
      PpmEventParkNodeRestriction(v21, v20, v22, v23);
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
      v28 = KeActiveProcessors.Bitmap[0];
      v29 = 0;
      v27 = &KeActiveProcessors;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v25, (unsigned __int16 **)&v27) )
      {
        v24 = KeGetPrcb(v25);
        PpmEventProcessorVetoRundown(v24);
        PpmEventTraceProcessorIdle(v24);
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
