/*
 * XREFs of KeInitializeClock @ 0x140C624A0
 * Callers:
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     KiSetNextClockTickDueTime @ 0x140317B60 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140317E50 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetPendingTick @ 0x140318374 (KiSetPendingTick.c)
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KiSetClockTimer @ 0x14043504C (KiSetClockTimer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     strstr @ 0x1404FB270 (strstr.c)
 *     KiInitializeProcessorCycleAccumulation @ 0x1405ADF34 (KiInitializeProcessorCycleAccumulation.c)
 *     KiSetupTimeIncrement @ 0x1405AE164 (KiSetupTimeIncrement.c)
 *     Feature_PerProcessorClockTickServer__private_IsEnabledPreCheck @ 0x1405B6484 (Feature_PerProcessorClockTickServer__private_IsEnabledPreCheck.c)
 *     Feature_TickAccumulationFromAccountingPeriods__private_IsEnabledPreCheck @ 0x1405B6544 (Feature_TickAccumulationFromAccountingPeriods__private_IsEnabledPreCheck.c)
 *     PoTraceDynamicTickDisabled @ 0x1405D1A74 (PoTraceDynamicTickDisabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     EmClientQueryRuleState @ 0x140B6A420 (EmClientQueryRuleState.c)
 */

char __fastcall KeInitializeClock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r14
  char result; // al
  int v4; // eax
  LARGE_INTEGER v5; // rdi
  struct _KPRCB *v6; // rsi
  __int64 *v7; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 Root; // rdx
  BOOLEAN v15; // r8
  unsigned __int64 v16; // rax
  int v17; // eax
  const char *v18; // rcx
  signed __int32 v19[8]; // [rsp+0h] [rbp-80h] BYREF
  int v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 ClockTickDueTime; // [rsp+48h] [rbp-38h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-30h] BYREF
  __int128 v23; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-18h]
  unsigned int v25; // [rsp+70h] [rbp-10h]
  char v26; // [rsp+74h] [rbp-Ch]

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
      Feature_TickAccumulationFromAccountingPeriods__private_IsEnabledPreCheck();
      KiTickAccumulationFromAccountingPeriods = 1;
      if ( KiClockTimerPerCpu )
      {
        if ( !KiSerializeTimerExpiration )
          Feature_PerProcessorClockTickServer__private_IsEnabledPreCheck();
        KiClockTimerPerCpuTickScheduling = 1;
      }
      if ( KiEnableTickAccumulationFromAccountingPeriods )
        KiTickAccumulationFromAccountingPeriods = KiEnableTickAccumulationFromAccountingPeriods == 1;
      if ( KiEnableClockTimerPerCpuTickScheduling && KiClockTimerPerCpu )
        KiClockTimerPerCpuTickScheduling = KiEnableClockTimerPerCpuTickScheduling == 1;
      v4 = KeMaximumIncrement;
      if ( (KiVelocityFlags & 0x40000) != 0 )
        v4 = 17400;
      KiTimeUpdateTryAcquireTickLock = 1;
      KeQuantumEndTimerIncrement = v4;
      KiClockTimerReducePreciseTimeQueries = 1;
      KiTimeUpdateTolerance = 3000LL;
      v5.QuadPart = MEMORY[0xFFFFF78000000008];
      v6 = KeGetCurrentPrcb();
      KeQueryPerformanceCounter(&PerformanceFrequency);
      KiClockStateUpdateTimeout = 5 * PerformanceFrequency.QuadPart;
      v7 = KiProcessorBlock;
      *(_BYTE *)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 33) = 1;
      CurrentIrql = KeGetCurrentIrql();
      v9 = 15LL;
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
      *(_WORD *)&v6->ClockTimerState.ClockActive = 1;
      KiClockState = 0;
      guard_dispatch_icall_no_overrides(v7, v9);
      KiSetPendingTick(0);
      guard_dispatch_icall_no_overrides(v11, v10);
      LOBYTE(v12) = 1;
      guard_dispatch_icall_no_overrides(v12, v13);
      KeNonHrTimeIncrement = KeMaximumIncrement;
      KePseudoHrTimeIncrement = KeMaximumIncrement;
      KiLastPseudoHrTimerExpiration = v5.QuadPart;
      KiLastNonHrTimerExpiration = v5.QuadPart;
      dword_140F214BC = KeMaximumIncrement;
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
      v15 = 0;
      if ( Root )
      {
        while ( 1 )
        {
          if ( KeMaximumIncrement >= *(_DWORD *)(Root + 28) )
          {
            v16 = *(_QWORD *)(Root + 8);
            if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
            {
              if ( !v16 )
                goto LABEL_42;
              v16 ^= Root;
            }
            if ( !v16 )
            {
LABEL_42:
              v15 = 1;
              break;
            }
          }
          else
          {
            v16 = *(_QWORD *)Root;
            if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
            {
              if ( !v16 )
                break;
              v16 ^= Root;
            }
            if ( !v16 )
              break;
          }
          Root = v16;
        }
      }
      RtlRbInsertNodeEx(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)Root, v15, &KiDefaultClockIntervalRequest);
      byte_140F214B8 = 1;
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
        ClockTickDueTime = (unsigned int)KiSetNextClockTickDueTime(v5, 1u);
      }
      else
      {
        guard_dispatch_icall_no_overrides(0LL, KeMaximumIncrement);
        KiSetPendingTick(1);
        v17 = KeMaximumIncrement;
        KeTimeIncrement = ClockTickDueTime;
        v6->ClockTimerState.TimeIncrement = ClockTickDueTime;
        v6->ClockTimerState.LastRequestedTimeIncrement = v17;
        KiLastRequestedTimeIncrement = v17;
        v6->ClockTimerState.NextTickDueTime = v5.QuadPart + ClockTickDueTime;
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      dword_140F21450 = KeTimeIncrement;
      dword_140F21454 = KeTimeIncrement;
      result = KiLastRequestedTimeIncrement;
      dword_140F21458 = KiLastRequestedTimeIncrement;
      dword_140F2145C = KiLastRequestedTimeIncrement;
    }
    else
    {
      if ( (_DWORD)BugCheckParameter2 != 2 )
        KeBugCheckEx(0x33u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
      if ( (_BYTE)KiDynamicTickDisableReason )
        goto LABEL_10;
      if ( !HvlHypervisorConnected || (result = HvlpFlags, (HvlpFlags & 2) != 0) )
      {
        v20 = 1;
        result = EmClientQueryRuleState(&GUID_EM_CPU_TYPE_INTEL_DTT_DISABLE, &v20);
        if ( v20 == 2 )
          KiDynamicTickDisableReason = 3;
      }
      if ( (_BYTE)KiDynamicTickDisableReason )
      {
LABEL_10:
        result = PoTraceDynamicTickDisabled();
        KiForceIdleDisabled = 1;
      }
      _InterlockedOr(v19, 0);
      KiDynamicTickInitialized = 1;
    }
  }
  else
  {
    v18 = *(const char **)(a2 + 216);
    qword_140F21448 = -1LL;
    qword_140F21468 = -1LL;
    if ( v18 && strstr(v18, "DISABLEDYNAMICTICK") )
      KiDynamicTickDisableReason = 1;
    guard_dispatch_icall_no_overrides(&v23, a2);
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
