/*
 * XREFs of PpmEventTraceControlCallback @ 0x140AC8550
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PopExecuteOnTargetProcessors @ 0x140370234 (PopExecuteOnTargetProcessors.c)
 *     PpmEventQosClassPerfSelection @ 0x1403A32A4 (PpmEventQosClassPerfSelection.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PpmEventTraceHeteroSets @ 0x14042BE28 (PpmEventTraceHeteroSets.c)
 *     PoEnergyEstimationEnabled @ 0x140440E80 (PoEnergyEstimationEnabled.c)
 *     PpmEventPlatformVetoRundown @ 0x14048073C (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x14048088C (PpmEventProcessorVetoRundown.c)
 *     PpmEventVetoReasonRundown @ 0x1404A6928 (PpmEventVetoReasonRundown.c)
 *     PpmEventHgsHardwareTable @ 0x1404A81D4 (PpmEventHgsHardwareTable.c)
 *     PpmEventTraceLPIState @ 0x1404B5C60 (PpmEventTraceLPIState.c)
 *     PpmHeteroHgsEvaluateContainmentMinPolicyDecision @ 0x1404B9270 (PpmHeteroHgsEvaluateContainmentMinPolicyDecision.c)
 *     PpmEventHgsHardwareTableResonMapTable @ 0x1404BD62C (PpmEventHgsHardwareTableResonMapTable.c)
 *     PpmEventHgsNormalizedTable @ 0x1404C031C (PpmEventHgsNormalizedTable.c)
 *     PpmEventHgsHardwareTableResonChanged @ 0x1404C6008 (PpmEventHgsHardwareTableResonChanged.c)
 *     PpmEventHgsContainmentHwUpdate @ 0x1404E466C (PpmEventHgsContainmentHwUpdate.c)
 *     PpmEventParkNodeRestriction @ 0x1404E4890 (PpmEventParkNodeRestriction.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmHeteroHgsGetWpsHint @ 0x1405D4848 (PpmHeteroHgsGetWpsHint.c)
 *     PpmEventHgsContainmentGroupInfo @ 0x1405D660C (PpmEventHgsContainmentGroupInfo.c)
 *     PpmEventHgsContainmentPolicyChange @ 0x1405D67C4 (PpmEventHgsContainmentPolicyChange.c)
 *     PpmEventSoftParkLatencyUpdate @ 0x1405D6F30 (PpmEventSoftParkLatencyUpdate.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PpmEventTraceProcessorPerformanceRundownHv @ 0x14075D58C (PpmEventTraceProcessorPerformanceRundownHv.c)
 *     PpmEventTraceParkNodeRundownEx @ 0x140765A0C (PpmEventTraceParkNodeRundownEx.c)
 *     PpmEventTraceProfiles @ 0x140A3CB8C (PpmEventTraceProfiles.c)
 *     PpmInfoTraceProfileSettings @ 0x140A4F5E0 (PpmInfoTraceProfileSettings.c)
 *     PpmEventQosClassPolicy @ 0x140A56B24 (PpmEventQosClassPolicy.c)
 *     PpmEventTraceProcessorIdle @ 0x140A67844 (PpmEventTraceProcessorIdle.c)
 *     PpmEventTraceProcessorPerformance @ 0x140A6C678 (PpmEventTraceProcessorPerformance.c)
 *     PpmEventTraceParkNodeRundown @ 0x140A6EA28 (PpmEventTraceParkNodeRundown.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140A71A44 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     PpmEventHeteroPolicy @ 0x140A7C764 (PpmEventHeteroPolicy.c)
 *     PpmEventQosSupport @ 0x140A88084 (PpmEventQosSupport.c)
 *     PpmEventTracePpmProfileStatusRundown @ 0x140A92D48 (PpmEventTracePpmProfileStatusRundown.c)
 *     PpmEventTraceAccountingBucketIntervalsRundown @ 0x140A969FC (PpmEventTraceAccountingBucketIntervalsRundown.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x140A99D74 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140A9F1EC (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventEnergyEstimationRundown @ 0x140AA3CBC (PpmEventEnergyEstimationRundown.c)
 *     PpmEventStaticPolicyRundown @ 0x140AC8358 (PpmEventStaticPolicyRundown.c)
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
  __int64 v12; // rdi
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // rcx
  unsigned int m; // ebx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  unsigned int v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  struct _KAFFINITY_EX *v26; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-C0h]
  __int16 v28; // [rsp+48h] [rbp-B8h]
  int v29; // [rsp+4Ah] [rbp-B6h]
  __int16 v30; // [rsp+4Eh] [rbp-B2h]
  struct _KAFFINITY_EX v31; // [rsp+50h] [rbp-B0h] BYREF

  v29 = 0;
  v30 = 0;
  v24 = 0;
  memset_0(&v31, 0, sizeof(v31));
  v25 = 0;
  if ( (ControlCode & 0xFFFFFFFD) == 0 )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v5, v6);
    v27 = KeActiveProcessors.Bitmap[0];
    v28 = 0;
    v26 = &KeActiveProcessors;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v24, (unsigned __int16 **)&v26) )
    {
      Prcb = KeGetPrcb(v24);
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
            v12 = 1296LL * k;
            PpmEventHgsContainmentGroupInfo(v12 + PpmParkNodes, 1);
            v13 = PpmHeteroHgsEvaluateContainmentMinPolicyDecision(v12 + PpmParkNodes);
            v17 = *(_QWORD *)(v16 + 1280);
            if ( v17 )
              LOBYTE(v17) = *(_BYTE *)(v17 + 827);
            else
              v17 = 0LL;
            PpmEventHgsContainmentPolicyChange(v17, v14, v15, v13, v17, 1);
            *(_QWORD *)&v31.Count = 2097153LL;
            memset_0(&v31.8, 0, sizeof(v31.8));
            v25 = 3;
            PpmHeteroHgsGetWpsHint(v12 + PpmParkNodes, &v31, &v25);
            PpmEventHgsContainmentHwUpdate((__int64)&v31, (__int64)&v25, 1);
          }
        }
      }
    }
    for ( m = 0; m < PpmParkNumNodes; ++m )
    {
      v19 = PpmParkNodes + 1296LL * m;
      if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline() )
        PpmEventTraceParkNodeRundownEx(m, v19);
      else
        PpmEventTraceParkNodeRundown(v19);
      LOBYTE(v20) = 1;
      PpmEventParkNodeRestriction(v20, v19, v21, v22);
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
      v27 = KeActiveProcessors.Bitmap[0];
      v28 = 0;
      v26 = &KeActiveProcessors;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v24, (unsigned __int16 **)&v26) )
      {
        v23 = KeGetPrcb(v24);
        PpmEventProcessorVetoRundown(v23);
        PpmEventTraceProcessorIdle(v23);
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
