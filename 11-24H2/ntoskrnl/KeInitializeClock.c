/*
 * XREFs of KeInitializeClock @ 0x140C60350
 * Callers:
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     KiSetClockTimer @ 0x14029F85C (KiSetClockTimer.c)
 *     KiSetNextClockTickDueTime @ 0x1402A01F0 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x1402A04E0 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetPendingTick @ 0x1402A0A04 (KiSetPendingTick.c)
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     strstr @ 0x1404FD9B0 (strstr.c)
 *     KiInitializeProcessorCycleAccumulation @ 0x1405B0FC4 (KiInitializeProcessorCycleAccumulation.c)
 *     KiSetupTimeIncrement @ 0x1405B11F4 (KiSetupTimeIncrement.c)
 *     Feature_PerProcessorClockTickServer__private_IsEnabledPreCheck @ 0x1405B8E44 (Feature_PerProcessorClockTickServer__private_IsEnabledPreCheck.c)
 *     Feature_TickAccumulationFromAccountingPeriods__private_IsEnabledPreCheck @ 0x1405B8F04 (Feature_TickAccumulationFromAccountingPeriods__private_IsEnabledPreCheck.c)
 *     PoTraceDynamicTickDisabled @ 0x1405D42B4 (PoTraceDynamicTickDisabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     EmClientQueryRuleState @ 0x140B682E0 (EmClientQueryRuleState.c)
 */

char __fastcall KeInitializeClock(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // r14
  char result; // al
  int v6; // eax
  __int64 v7; // rdi
  struct _KPRCB *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  bool v23; // r8
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // eax
  const char *v29; // rcx
  signed __int32 v30[8]; // [rsp+0h] [rbp-80h] BYREF
  int v31; // [rsp+40h] [rbp-40h] BYREF
  __int64 ClockTickDueTime; // [rsp+48h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-30h] BYREF
  __int128 v34; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-18h]
  unsigned int v36; // [rsp+70h] [rbp-10h]
  char v37; // [rsp+74h] [rbp-Ch]

  v35 = 0LL;
  v36 = 0;
  v37 = 0;
  ClockTickDueTime = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v34 = 0LL;
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
      v6 = KeMaximumIncrement;
      if ( (KiVelocityFlags & 0x40000) != 0 )
        v6 = 17400;
      KiTimeUpdateTryAcquireTickLock = 1;
      KeQuantumEndTimerIncrement = v6;
      KiClockTimerReducePreciseTimeQueries = 1;
      KiTimeUpdateTolerance = 3000LL;
      v7 = MEMORY[0xFFFFF78000000008];
      v8 = KeGetCurrentPrcb();
      KeQueryPerformanceCounter(&PerformanceFrequency);
      KiClockStateUpdateTimeout = 5 * PerformanceFrequency.QuadPart;
      v11 = KiProcessorBlock;
      *(_BYTE *)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 33) = 1;
      CurrentIrql = KeGetCurrentIrql();
      v13 = 15LL;
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
      *(_WORD *)&v8->ClockTimerState.ClockActive = 1;
      KiClockState = 0;
      guard_dispatch_icall_no_overrides(v11, v13, v9, v10);
      KiSetPendingTick(0);
      guard_dispatch_icall_no_overrides(v15, v14, v16, v17);
      LOBYTE(v18) = 1;
      guard_dispatch_icall_no_overrides(v18, v19, v20, v21);
      KeNonHrTimeIncrement = KeMaximumIncrement;
      KePseudoHrTimeIncrement = KeMaximumIncrement;
      KiLastPseudoHrTimerExpiration = v7;
      KiLastNonHrTimerExpiration = v7;
      dword_140F2113C = KeMaximumIncrement;
      if ( (qword_140E66758 & 1) != 0 )
      {
        if ( KiClockIntervalRequests )
          v22 = KiClockIntervalRequests ^ (unsigned __int64)&KiClockIntervalRequests;
        else
          v22 = 0LL;
      }
      else
      {
        v22 = KiClockIntervalRequests;
      }
      v23 = 0;
      if ( v22 )
      {
        while ( 1 )
        {
          if ( (unsigned int)KeMaximumIncrement >= *(_DWORD *)(v22 + 28) )
          {
            v24 = *(_QWORD *)(v22 + 8);
            if ( (qword_140E66758 & 1) != 0 )
            {
              if ( !v24 )
                goto LABEL_42;
              v24 ^= v22;
            }
            if ( !v24 )
            {
LABEL_42:
              v23 = 1;
              break;
            }
          }
          else
          {
            v24 = *(_QWORD *)v22;
            if ( (qword_140E66758 & 1) != 0 )
            {
              if ( !v24 )
                break;
              v24 ^= v22;
            }
            if ( !v24 )
              break;
          }
          v22 = v24;
        }
      }
      RtlRbInsertNodeEx(&KiClockIntervalRequests, v22, v23, (unsigned __int64)&KiDefaultClockIntervalRequest);
      byte_140F21138 = 1;
      if ( KiClockTimerPerCpuTickScheduling )
      {
        KiSetClockTimer(
          (__int64)CurrentPrcb,
          v7,
          -(__int64)(unsigned int)KeQuantumEndTimerIncrement,
          KeMinimumIncrement,
          3,
          1,
          0);
        KiSetClockTimerKTimerDeadlines((__int64)CurrentPrcb, v7, 0);
        LOBYTE(v26) = 1;
        ClockTickDueTime = (unsigned int)KiSetNextClockTickDueTime(v7, v26, v27);
      }
      else
      {
        guard_dispatch_icall_no_overrides(0LL, (unsigned int)KeMaximumIncrement, &ClockTickDueTime, v25);
        KiSetPendingTick(1);
        v28 = KeMaximumIncrement;
        KeTimeIncrement = ClockTickDueTime;
        v8->ClockTimerState.TimeIncrement = ClockTickDueTime;
        v8->ClockTimerState.LastRequestedTimeIncrement = v28;
        KiLastRequestedTimeIncrement = v28;
        v8->ClockTimerState.NextTickDueTime = v7 + ClockTickDueTime;
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      dword_140F21790 = KeTimeIncrement;
      dword_140F21794 = KeTimeIncrement;
      result = KiLastRequestedTimeIncrement;
      dword_140F21798 = KiLastRequestedTimeIncrement;
      dword_140F2179C = KiLastRequestedTimeIncrement;
    }
    else
    {
      if ( (_DWORD)BugCheckParameter2 != 2 )
        KeBugCheckEx(0x33u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
      if ( (_BYTE)KiDynamicTickDisableReason )
        goto LABEL_10;
      if ( !HvlHypervisorConnected || (result = HvlpFlags, (HvlpFlags & 2) != 0) )
      {
        v31 = 1;
        result = EmClientQueryRuleState(&GUID_EM_CPU_TYPE_INTEL_DTT_DISABLE, &v31);
        if ( v31 == 2 )
          KiDynamicTickDisableReason = 3;
      }
      if ( (_BYTE)KiDynamicTickDisableReason )
      {
LABEL_10:
        result = PoTraceDynamicTickDisabled();
        KiForceIdleDisabled = 1;
      }
      _InterlockedOr(v30, 0);
      KiDynamicTickInitialized = 1;
    }
  }
  else
  {
    v29 = *(const char **)(a2 + 216);
    qword_140F21788 = -1LL;
    qword_140F217A8 = -1LL;
    if ( v29 && strstr(v29, "DISABLEDYNAMICTICK") )
      KiDynamicTickDisableReason = 1;
    guard_dispatch_icall_no_overrides(&v34, a2, a3, a4);
    if ( (v34 & 4) != 0 )
      KiClockTimerPerCpu = 1;
    if ( (v34 & 2) != 0 )
      KiClockTimerHighLatency = 1;
    if ( (v34 & 1) != 0 )
      KiClockTimerAlwaysOnPresent = 1;
    if ( !(_BYTE)KiDynamicTickDisableReason && (v34 & 8) == 0 )
      KiDynamicTickDisableReason = 2;
    KiSetupTimeIncrement(v35, v36);
    return KiInitializeProcessorCycleAccumulation((__int64)CurrentPrcb);
  }
  return result;
}
