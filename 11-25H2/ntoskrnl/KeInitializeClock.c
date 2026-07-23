/*
 * XREFs of KeInitializeClock @ 0x140C4ECE8
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     KiSetClockTimer @ 0x140274458 (KiSetClockTimer.c)
 *     KiSetPendingTick @ 0x140277258 (KiSetPendingTick.c)
 *     KiSetNextClockTickDueTime @ 0x140277974 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140277BC0 (KiSetClockTimerKTimerDeadlines.c)
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     strstr @ 0x1404FB230 (strstr.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A324 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     KiInitializeProcessorCycleAccumulation @ 0x1405AD634 (KiInitializeProcessorCycleAccumulation.c)
 *     KiSetupTimeIncrement @ 0x1405AD864 (KiSetupTimeIncrement.c)
 *     Feature_Servicing_Kernel_TimeUpdateLockContentionFix__private_IsEnabledDeviceUsageNoInline @ 0x1405B50D8 (Feature_Servicing_Kernel_TimeUpdateLockContentionFix__private_IsEnabledDeviceUsageNoInline.c)
 *     PoTraceDynamicTickDisabled @ 0x1405CF8F8 (PoTraceDynamicTickDisabled.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     EmClientQueryRuleState @ 0x140B584B0 (EmClientQueryRuleState.c)
 */

char __fastcall KeInitializeClock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r12
  char result; // al
  int v4; // eax
  LARGE_INTEGER v5; // r14
  struct _KPRCB *v6; // r15
  __int64 *v7; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 Root; // rdx
  BOOLEAN v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  const char *v17; // rcx
  signed __int32 v18[8]; // [rsp+0h] [rbp-59h] BYREF
  __int64 v19; // [rsp+40h] [rbp-19h]
  int v20; // [rsp+48h] [rbp-11h] BYREF
  __int64 ClockTickDueTime; // [rsp+50h] [rbp-9h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp-1h] BYREF
  __int128 v23; // [rsp+60h] [rbp+7h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp+17h]
  unsigned int v25; // [rsp+78h] [rbp+1Fh]
  char v26; // [rsp+7Ch] [rbp+23h]

  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  ClockTickDueTime = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v23 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (_DWORD)BugCheckParameter2 )
  {
    if ( (_DWORD)BugCheckParameter2 == 1 )
    {
      v19 = (unsigned int)Feature_TickAccumulationFromAccountingPeriods__private_featureState;
      if ( (Feature_TickAccumulationFromAccountingPeriods__private_featureState & 0x10) == 0 )
      {
        LODWORD(v19) = Feature_TickAccumulationFromAccountingPeriods__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_TickAccumulationFromAccountingPeriods__private_descriptor,
          Feature_TickAccumulationFromAccountingPeriods__private_featureState | 1,
          3);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v19,
          3,
          (__int64)&Feature_TickAccumulationFromAccountingPeriods__private_descriptor);
      }
      KiTickAccumulationFromAccountingPeriods = 1;
      if ( KiClockTimerPerCpu )
      {
        if ( !KiSerializeTimerExpiration )
        {
          v19 = (unsigned int)Feature_PerProcessorClockTickServer__private_featureState;
          if ( (Feature_PerProcessorClockTickServer__private_featureState & 0x10) == 0 )
          {
            LODWORD(v19) = Feature_PerProcessorClockTickServer__private_featureState | 1;
            wil_details_FeatureReporting_ReportUsageToService(
              (__int64)&Feature_PerProcessorClockTickServer__private_descriptor,
              Feature_PerProcessorClockTickServer__private_featureState | 1,
              3);
            wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
              v19,
              3,
              (__int64)&Feature_PerProcessorClockTickServer__private_descriptor);
          }
        }
        KiClockTimerPerCpuTickScheduling = 1;
      }
      if ( KiEnableTickAccumulationFromAccountingPeriods )
        KiTickAccumulationFromAccountingPeriods = KiEnableTickAccumulationFromAccountingPeriods == 1;
      if ( KiEnableClockTimerPerCpuTickScheduling && KiClockTimerPerCpu )
        KiClockTimerPerCpuTickScheduling = KiEnableClockTimerPerCpuTickScheduling == 1;
      v4 = KeMaximumIncrement;
      if ( (KiVelocityFlags & 0x40000) != 0 )
        v4 = 17400;
      KiTimeUpdateTolerance = 500LL;
      KeQuantumEndTimerIncrement = v4;
      if ( (unsigned int)Feature_Servicing_Kernel_TimeUpdateLockContentionFix__private_IsEnabledDeviceUsageNoInline() )
      {
        KiTimeUpdateTryAcquireTickLock = 1;
        KiClockTimerReducePreciseTimeQueries = 1;
        KiTimeUpdateTolerance = 3000LL;
      }
      v5.QuadPart = MEMORY[0xFFFFF78000000008];
      v6 = KeGetCurrentPrcb();
      KeQueryPerformanceCounter(&PerformanceFrequency);
      KiClockStateUpdateTimeout = 5 * PerformanceFrequency.QuadPart;
      v7 = KiProcessorBlock;
      *(_BYTE *)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 33) = 1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
      *(_WORD *)&v6->ClockTimerState.ClockActive = 1;
      KiClockState = 0;
      guard_dispatch_icall_no_overrides(v7);
      KiSetPendingTick(0);
      guard_dispatch_icall_no_overrides(v9);
      LOBYTE(v10) = 1;
      guard_dispatch_icall_no_overrides(v10);
      KeNonHrTimeIncrement = KeMaximumIncrement;
      KePseudoHrTimeIncrement = KeMaximumIncrement;
      KiLastPseudoHrTimerExpiration = v5.QuadPart;
      KiLastNonHrTimerExpiration = v5.QuadPart;
      dword_140F20A3C = KeMaximumIncrement;
      if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
      {
        if ( KiClockIntervalRequests.Root )
          Root = (unsigned __int64)KiClockIntervalRequests.Root ^ (unsigned __int64)&KiClockIntervalRequests;
        else
          Root = 0LL;
      }
      else
      {
        Root = (unsigned __int64)KiClockIntervalRequests.Root;
      }
      v12 = 0;
      if ( Root )
      {
        while ( 1 )
        {
          if ( KeMaximumIncrement >= *(_DWORD *)(Root + 28) )
          {
            v13 = *(_QWORD *)(Root + 8);
            if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
            {
              if ( !v13 )
                goto LABEL_48;
              v13 ^= Root;
            }
            if ( !v13 )
            {
LABEL_48:
              v12 = 1;
              break;
            }
          }
          else
          {
            v13 = *(_QWORD *)Root;
            if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
            {
              if ( !v13 )
                break;
              v13 ^= Root;
            }
            if ( !v13 )
              break;
          }
          Root = v13;
        }
      }
      RtlRbInsertNodeEx(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)Root, v12, &KiDefaultClockIntervalRequest);
      byte_140F20A38 = 1;
      if ( KiClockTimerPerCpuTickScheduling )
      {
        KiSetClockTimer(
          (__int64)CurrentPrcb,
          v5,
          -(__int64)(unsigned int)KeQuantumEndTimerIncrement,
          KeMinimumIncrement,
          3,
          1,
          0);
        KiSetClockTimerKTimerDeadlines((__int64)CurrentPrcb, v5, 0);
        LOBYTE(v14) = 1;
        ClockTickDueTime = (unsigned int)KiSetNextClockTickDueTime(v5, v14, v15);
      }
      else
      {
        guard_dispatch_icall_no_overrides(0LL);
        KiSetPendingTick(1);
        v16 = KeMaximumIncrement;
        KeTimeIncrement = ClockTickDueTime;
        v6->ClockTimerState.TimeIncrement = ClockTickDueTime;
        v6->ClockTimerState.LastRequestedTimeIncrement = v16;
        KiLastRequestedTimeIncrement = v16;
        v6->ClockTimerState.NextTickDueTime = v5.QuadPart + ClockTickDueTime;
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      dword_140F209B0 = KeTimeIncrement;
      dword_140F209B4 = KeTimeIncrement;
      result = KiLastRequestedTimeIncrement;
      dword_140F209B8 = KiLastRequestedTimeIncrement;
      dword_140F209BC = KiLastRequestedTimeIncrement;
    }
    else
    {
      if ( (_DWORD)BugCheckParameter2 != 2 )
        KeBugCheckEx(0x33u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
      if ( (_BYTE)KiDynamicTickDisableReason )
        goto LABEL_11;
      if ( !HvlHypervisorConnected || (result = HvlpFlags, (HvlpFlags & 2) != 0) )
      {
        v20 = 1;
        result = EmClientQueryRuleState(&GUID_EM_CPU_TYPE_INTEL_DTT_DISABLE, &v20);
        if ( v20 == 2 )
          KiDynamicTickDisableReason = 3;
      }
      if ( (_BYTE)KiDynamicTickDisableReason )
      {
LABEL_11:
        result = PoTraceDynamicTickDisabled();
        KiForceIdleDisabled = 1;
      }
      _InterlockedOr(v18, 0);
      KiDynamicTickInitialized = 1;
    }
  }
  else
  {
    v17 = *(const char **)(a2 + 216);
    qword_140F209A8 = -1LL;
    qword_140F209C8 = -1LL;
    if ( v17 && strstr(v17, "DISABLEDYNAMICTICK") )
      KiDynamicTickDisableReason = 1;
    guard_dispatch_icall_no_overrides(&v23);
    if ( (v23 & 4) != 0 )
      KiClockTimerPerCpu = 1;
    if ( (v23 & 2) != 0 )
      KiClockTimerHighLatency = 1;
    if ( (v23 & 1) != 0 )
      KiClockTimerAlwaysOnPresent = 1;
    if ( !(_BYTE)KiDynamicTickDisableReason && (v23 & 8) == 0 )
      KiDynamicTickDisableReason = 2;
    KiSetupTimeIncrement(v24, v25);
    return KiInitializeProcessorCycleAccumulation((__int64)CurrentPrcb);
  }
  return result;
}
