/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x14031C170
 * Callers:
 *     KiUpdateTime @ 0x1402AA2B0 (KiUpdateTime.c)
 *     KiUpdateRunTime @ 0x1402AA8E0 (KiUpdateRunTime.c)
 *     PpmExecutePeriodicPerfCheck @ 0x1402ABD08 (PpmExecutePeriodicPerfCheck.c)
 *     KeUpdatePendingQosRequest @ 0x1402AD48C (KeUpdatePendingQosRequest.c)
 *     KeIntSteerSnapPerf @ 0x1402B1C30 (KeIntSteerSnapPerf.c)
 *     PopCalculateCsSummary @ 0x1402B5524 (PopCalculateCsSummary.c)
 *     PopSetWatchdog @ 0x1402BC81C (PopSetWatchdog.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1402DBCD0 (KiTransitionSchedulingGroupGeneration.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x140317740 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetNextClockTickDueTime @ 0x140317B60 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140317E50 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetClockTickRate @ 0x140318120 (KiSetClockTickRate.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1403183C8 (KiSetClockIntervalToMinimumRequested.c)
 *     KeClockInterruptNotify @ 0x140319AC0 (KeClockInterruptNotify.c)
 *     HalpTimerClockInterrupt @ 0x14031A2C0 (HalpTimerClockInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x14031A580 (KiCallInterruptServiceRoutine.c)
 *     KeQueryInterruptTimePrecise @ 0x14031B120 (KeQueryInterruptTimePrecise.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KiCheckWaitNext @ 0x1403308C0 (KiCheckWaitNext.c)
 *     PpmUpdatePerformanceFeedback @ 0x14036EAB0 (PpmUpdatePerformanceFeedback.c)
 *     PpmBeginActiveTimeAccumulation @ 0x140371F00 (PpmBeginActiveTimeAccumulation.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x140372840 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1403729E8 (HalpVpptUpdatePhysicalTimer.c)
 *     PpmUpdateIdleVeto @ 0x1403A5250 (PpmUpdateIdleVeto.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1403A5F7C (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PopFxResidentTimeoutRoutine @ 0x1403A8BF0 (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x1403A8D58 (PopFxIdleComponent.c)
 *     KiExpireTimer2 @ 0x1403AF650 (KiExpireTimer2.c)
 *     KiCheckAndRearmForceIdle @ 0x1403B03B8 (KiCheckAndRearmForceIdle.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     KiResetForceIdle @ 0x1404048A4 (KiResetForceIdle.c)
 *     KiForceIdleInterruptNotify @ 0x140404948 (KiForceIdleInterruptNotify.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14041C424 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     KiSetClockTimer @ 0x14043504C (KiSetClockTimer.c)
 *     KiShouldRearmClockTimer @ 0x14043516C (KiShouldRearmClockTimer.c)
 *     PpmResetPerfEngineForProcessor @ 0x140440520 (PpmResetPerfEngineForProcessor.c)
 *     PpmCheckStart @ 0x14044C244 (PpmCheckStart.c)
 *     KiCancelClockTimer @ 0x140462E90 (KiCancelClockTimer.c)
 *     KiSetClockInterval @ 0x140463DB4 (KiSetClockInterval.c)
 *     PpmEventTracePreVetoAccounting @ 0x140480A8C (PpmEventTracePreVetoAccounting.c)
 *     KeSetForceIdle @ 0x140484970 (KeSetForceIdle.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x140497BEC (PopIdleWakeNotifyDevicesActive.c)
 *     HalpVpptArmTimer @ 0x1404A07C0 (HalpVpptArmTimer.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x1404A458C (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x1404A4D20 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopSetModernStandbyTransitionReason @ 0x1404B0A1C (PopSetModernStandbyTransitionReason.c)
 *     PpmIdleEvaluateConstraints @ 0x1404BCF60 (PpmIdleEvaluateConstraints.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1404C2E3C (PopRecordPowerWatchdogBlackboxInformation.c)
 *     KiResumeClockTimer @ 0x1404F3008 (KiResumeClockTimer.c)
 *     HalpWatchdogCheckPreResetNMI @ 0x140548984 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpWatchdogDelayExpiration @ 0x140548A70 (HalpWatchdogDelayExpiration.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055C7F0 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x14055CB70 (HalpTimerWatchdogPreResetInterrupt.c)
 *     KeGetNextClockTickDuration @ 0x1405B6610 (KeGetNextClockTickDuration.c)
 *     KePrepareClockTimerForIdle @ 0x1405B675C (KePrepareClockTimerForIdle.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B6AE0 (KePrepareClockTimerForPlatformIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B6F84 (KeResumeClockTimerFromIdle.c)
 *     KiResetClockInterval @ 0x1405B7B04 (KiResetClockInterval.c)
 *     PpmIdlePrevetoWatchdog @ 0x1405CC040 (PpmIdlePrevetoWatchdog.c)
 *     PopWatchdogDpc @ 0x1405D5E90 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x1405D5F30 (PopWatchdogWorker.c)
 *     PopSleepstudyInitialize @ 0x140C68FEC (PopSleepstudyInitialize.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x140314930 (HalpTimerScaleCounter.c)
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpHpetQueryCounter @ 0x1403BC400 (HalpHpetQueryCounter.c)
 *     HvlpGetRegister64 @ 0x1403BC420 (HvlpGetRegister64.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

LARGE_INTEGER __cdecl RtlGetInterruptTimePrecise(PLARGE_INTEGER PerformanceCounter)
{
  __int64 v1; // rbx
  __int64 (__fastcall *v2)(__int64, __int64); // rdx
  __int64 i; // r9
  __int64 v4; // rbp
  unsigned __int64 v5; // r15
  LARGE_INTEGER v6; // r12
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r11
  __int64 v12; // r11
  LARGE_INTEGER result; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // r9d
  signed __int64 v17; // rdx
  __int64 v18; // r14
  signed __int64 v19; // rdx
  __int64 v20; // rcx
  _BYTE *v21; // r8
  __int64 v22; // r10
  __int64 v23; // r11
  unsigned __int64 v24; // rax
  int v25; // r9d
  signed __int64 v26; // rdx
  __int64 v27; // r14
  unsigned int v28; // r8d
  __int64 v29; // r8
  __int64 v30; // rdi
  __int64 InternalData; // rax
  __int64 (__fastcall *v32)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v34; // r10
  signed __int64 v35; // rax
  int v36; // r9d
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  unsigned __int64 v41; // r8
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 (__fastcall *v44)(_QWORD); // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // r10
  signed __int64 v47; // rax
  int v48; // r9d
  unsigned __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rcx
  unsigned __int64 v53; // r8
  signed __int32 v54[8]; // [rsp+0h] [rbp-78h] BYREF
  signed __int64 v55; // [rsp+20h] [rbp-58h] BYREF
  __int64 (__fastcall *v56[2])(__int64, __int64); // [rsp+28h] [rbp-50h] BYREF

  while ( 1 )
  {
    v1 = MEMORY[0xFFFFF78000000340];
    v2 = HalpTscQueryCounterOrdered;
    for ( i = 10000000LL; (MEMORY[0xFFFFF78000000340] & 1) != 0; v1 = MEMORY[0xFFFFF78000000340] )
      _mm_pause();
    v4 = HalpPerformanceCounter;
    v5 = MEMORY[0xFFFFF78000000350];
    v6.QuadPart = MEMORY[0xFFFFF78000000008];
    if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
    {
      v7 = *(_QWORD *)(HalpPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
      {
        do
        {
          v18 = *(_QWORD *)(v4 + 208);
          do
          {
            v30 = *(_QWORD *)(v4 + 200);
            InternalData = HalpTimerGetInternalData(v4);
            v32 = *(__int64 (__fastcall **)(_QWORD))(v4 + 112);
            if ( v32 == HalpHpetQueryCounter )
              Counter = HalpHpetQueryCounter(InternalData);
            else
              Counter = guard_dispatch_icall_no_overrides(InternalData, v32);
            v34 = Counter;
            _InterlockedOr(v54, 0);
            v35 = *(_QWORD *)(v4 + 200);
          }
          while ( v30 != v35 );
        }
        while ( v18 != *(_QWORD *)(v4 + 208) );
        v36 = *(_DWORD *)(v4 + 220);
        v37 = v30 ^ v34;
        if ( _bittest64((const __int64 *)&v37, (unsigned __int8)(v36 - 1)) )
        {
          if ( v36 == 64 )
            v39 = -1LL;
          else
            v39 = (1LL << v36) - 1;
          v40 = 0LL;
          if ( v36 != 64 )
            v40 = 1LL << v36;
          v41 = v30 & v39;
          v17 = v34 | v30 ^ v41;
          if ( v34 < v41 )
            v17 += v40;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v17, v35);
        }
        else
        {
          if ( v36 == 64 )
            v38 = -1LL;
          else
            v38 = (1LL << v36) - 1;
          v17 = v34 | v30 & ~v38;
        }
        goto LABEL_30;
      }
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v14 = *(_QWORD *)(HalpPerformanceCounter + 72)
            + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v14 = *(_QWORD *)(HalpPerformanceCounter + 72);
      if ( *(__int64 (__fastcall **)(_QWORD))(HalpPerformanceCounter + 112) == HalpHvCounterQueryCounter )
      {
        if ( !HalpHvTimerApi )
        {
          v17 = __readmsr(0x40000020u);
LABEL_29:
          v18 = *(_QWORD *)(v4 + 208);
LABEL_30:
          v11 = v18 + v17;
          i = 10000000LL;
          goto LABEL_10;
        }
        if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
        {
          v56[0] = 0LL;
          while ( 1 )
          {
            v15 = (unsigned __int64)HvlpReferenceTscPage;
            v16 = *(_DWORD *)HvlpReferenceTscPage;
            if ( !*(_DWORD *)HvlpReferenceTscPage )
              break;
            if ( MEMORY[0xFFFFF78000000294] )
            {
              __asm { rdtscp }
            }
            else
            {
              if ( KeGetCurrentPrcb()->CpuVendor == 2 )
              {
                _mm_lfence();
              }
              else if ( KeGetCurrentPrcb()->CpuVendor == 1 )
              {
                _mm_mfence();
              }
              v15 = __rdtsc();
              LODWORD(v2) = HIDWORD(v15);
              v15 = (unsigned int)v15;
              v2 = (__int64 (__fastcall *)(__int64, __int64))(unsigned int)v2;
            }
            v2 = (__int64 (__fastcall *)(__int64, __int64))(*((_QWORD *)HvlpReferenceTscPage + 2)
                                                          + (((v15 | ((_QWORD)v2 << 32))
                                                            * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage
                                                                                 + 1)) >> 64));
            v56[0] = v2;
            if ( *(_DWORD *)HvlpReferenceTscPage == v16 )
              goto LABEL_28;
          }
          HvlpGetRegister64(589828LL, v56);
LABEL_28:
          v17 = (signed __int64)v56[0];
          goto LABEL_29;
        }
        v14 = 0LL;
      }
      v17 = guard_dispatch_icall_no_overrides(v14, HalpTscQueryCounterOrdered);
      goto LABEL_29;
    }
    v7 = 10000000LL;
    if ( !HalpTimerReferencePage )
    {
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
      {
        do
        {
          v27 = *(_QWORD *)(v4 + 208);
          do
          {
            v42 = *(_QWORD *)(v4 + 200);
            v43 = HalpTimerGetInternalData(v4);
            v44 = *(__int64 (__fastcall **)(_QWORD))(v4 + 112);
            if ( v44 == HalpHpetQueryCounter )
              v45 = HalpHpetQueryCounter(v43);
            else
              v45 = guard_dispatch_icall_no_overrides(v43, v44);
            v46 = v45;
            _InterlockedOr(v54, 0);
            v47 = *(_QWORD *)(v4 + 200);
          }
          while ( v42 != v47 );
        }
        while ( v27 != *(_QWORD *)(v4 + 208) );
        v48 = *(_DWORD *)(v4 + 220);
        v49 = v42 ^ v46;
        if ( _bittest64((const __int64 *)&v49, (unsigned __int8)(v48 - 1)) )
        {
          if ( v48 == 64 )
            v51 = -1LL;
          else
            v51 = (1LL << v48) - 1;
          v52 = 0LL;
          if ( v48 != 64 )
            v52 = 1LL << v48;
          v53 = v42 & v51;
          v26 = v46 | v42 ^ v53;
          if ( v46 < v53 )
            v26 += v52;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v26, v47);
        }
        else
        {
          if ( v48 == 64 )
            v50 = -1LL;
          else
            v50 = (1LL << v48) - 1;
          v26 = v46 | v42 & ~v50;
        }
        goto LABEL_43;
      }
      v20 = HalpTimerGetInternalData(HalpPerformanceCounter);
      if ( *(_QWORD *)(v4 + 112) == v23 )
      {
        if ( !HalpHvTimerApi )
        {
          v26 = __readmsr(0x40000020u);
LABEL_42:
          v27 = *(_QWORD *)(v4 + 208);
LABEL_43:
          v11 = HalpTimerScaleCounter(v27 + v26, *(_QWORD *)(v4 + 192), 10000000LL);
          i = v28;
          goto LABEL_10;
        }
        if ( HalpHvTimerApi == v22 )
        {
          v55 = 0LL;
          while ( 1 )
          {
            v24 = (unsigned __int64)HvlpReferenceTscPage;
            v25 = *(_DWORD *)HvlpReferenceTscPage;
            if ( !*(_DWORD *)HvlpReferenceTscPage )
              break;
            if ( *v21 )
            {
              __asm { rdtscp }
            }
            else
            {
              if ( KeGetCurrentPrcb()->CpuVendor == 2 )
              {
                _mm_lfence();
              }
              else if ( KeGetCurrentPrcb()->CpuVendor == 1 )
              {
                _mm_mfence();
              }
              v24 = __rdtsc();
              LODWORD(v19) = HIDWORD(v24);
              v24 = (unsigned int)v24;
              v19 = (unsigned int)v19;
            }
            v19 = *((_QWORD *)HvlpReferenceTscPage + 2)
                + (((v24 | (v19 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
            v55 = v19;
            if ( *(_DWORD *)HvlpReferenceTscPage == v25 )
              goto LABEL_41;
            v21 = (_BYTE *)0xFFFFF78000000294LL;
          }
          HvlpGetRegister64(589828LL, &v55);
LABEL_41:
          v26 = v55;
          goto LABEL_42;
        }
        v20 = 0LL;
      }
      v26 = guard_dispatch_icall_no_overrides(v20, v19);
      goto LABEL_42;
    }
    v8 = (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0
       ? *(_QWORD *)(HalpPerformanceCounter + 72) + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number
       : *(_QWORD *)(HalpPerformanceCounter + 72);
    v9 = *(__int64 (__fastcall **)(__int64, __int64))(HalpPerformanceCounter + 112);
    if ( v9 == HalpTscQueryCounterOrdered )
    {
      __asm { rdtscp }
      v10 = (unsigned __int64)v9 | ((_QWORD)HalpTscQueryCounterOrdered << 32);
    }
    else
    {
      v10 = guard_dispatch_icall_no_overrides(v8, HalpTscQueryCounterOrdered);
      i = 10000000LL;
    }
    v11 = (((unsigned __int64)v10 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
        + MEMORY[0xFFFFF780000003B8];
LABEL_10:
    if ( v4 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v29 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v29 = i;
      v11 = HalpTimerScaleCounter(v11, v7, v29);
    }
    if ( MEMORY[0xFFFFF78000000340] == v1 )
      break;
    _mm_pause();
  }
  PerformanceCounter->QuadPart = v11;
  if ( v11 <= v5 )
  {
    return v6;
  }
  else
  {
    v12 = v11 - v5 - 1;
    if ( MEMORY[0xFFFFF78000000369] )
      v12 <<= MEMORY[0xFFFFF78000000369];
    result.QuadPart = (((unsigned __int64)v12 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64) + v6.QuadPart;
  }
  return result;
}
