/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x14027B8D0
 * Callers:
 *     PpmCheckStart @ 0x140203674 (PpmCheckStart.c)
 *     PpmUpdateIdleVeto @ 0x14026A350 (PpmUpdateIdleVeto.c)
 *     KiUpdateRunTime @ 0x140273230 (KiUpdateRunTime.c)
 *     KiSetClockTimer @ 0x140274458 (KiSetClockTimer.c)
 *     PpmExecutePeriodicPerfCheck @ 0x140274878 (PpmExecutePeriodicPerfCheck.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140275710 (KiTransitionSchedulingGroupGeneration.c)
 *     KiShouldRearmClockTimer @ 0x140276050 (KiShouldRearmClockTimer.c)
 *     KiSetClockInterval @ 0x14027614C (KiSetClockInterval.c)
 *     KiSetClockTickRate @ 0x140276FBC (KiSetClockTickRate.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x140277560 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetNextClockTickDueTime @ 0x140277974 (KiSetNextClockTickDueTime.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140277C78 (KiSetClockIntervalToMinimumRequested.c)
 *     KeClockInterruptNotify @ 0x140279370 (KeClockInterruptNotify.c)
 *     HalpTimerClockInterrupt @ 0x140279B10 (HalpTimerClockInterrupt.c)
 *     KeQueryInterruptTimePrecise @ 0x140279D80 (KeQueryInterruptTimePrecise.c)
 *     KiCallInterruptServiceRoutine @ 0x140279DF0 (KiCallInterruptServiceRoutine.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KiCheckWaitNext @ 0x14027DB60 (KiCheckWaitNext.c)
 *     PpmUpdatePerformanceFeedback @ 0x14031C3F0 (PpmUpdatePerformanceFeedback.c)
 *     PopFxIdleComponent @ 0x14034C3F8 (PopFxIdleComponent.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x140354AE8 (PopIdleWakeNotifyDevicesActive.c)
 *     KeSetForceIdle @ 0x140354B90 (KeSetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140356068 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     KiExpireTimer2 @ 0x140370160 (KiExpireTimer2.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     KiCheckAndRearmForceIdle @ 0x140372628 (KiCheckAndRearmForceIdle.c)
 *     PopFxResidentTimeoutRoutine @ 0x1403A5C00 (PopFxResidentTimeoutRoutine.c)
 *     KeIntSteerSnapPerf @ 0x1403AF950 (KeIntSteerSnapPerf.c)
 *     KeUpdatePendingQosRequest @ 0x1403E9444 (KeUpdatePendingQosRequest.c)
 *     KiCancelClockTimer @ 0x1403E9910 (KiCancelClockTimer.c)
 *     PpmResetPerfEngineForProcessor @ 0x1403EC9C0 (PpmResetPerfEngineForProcessor.c)
 *     KiResetForceIdle @ 0x140404598 (KiResetForceIdle.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x140431D24 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x140445CE0 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x140445E88 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpVpptArmTimer @ 0x140447620 (HalpVpptArmTimer.c)
 *     PopSetWatchdog @ 0x140457F50 (PopSetWatchdog.c)
 *     PpmBeginActiveTimeAccumulation @ 0x140466B9C (PpmBeginActiveTimeAccumulation.c)
 *     PpmEventTracePreVetoAccounting @ 0x140484BFC (PpmEventTracePreVetoAccounting.c)
 *     PopCalculateCsSummary @ 0x140486560 (PopCalculateCsSummary.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x1404A969C (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x1404A9A0C (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PpmIdleEvaluateConstraints @ 0x1404B2B2C (PpmIdleEvaluateConstraints.c)
 *     PopSetModernStandbyTransitionReason @ 0x1404B66AC (PopSetModernStandbyTransitionReason.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1404C9650 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     KiResumeClockTimer @ 0x1404F2E04 (KiResumeClockTimer.c)
 *     HalpWatchdogCheckPreResetNMI @ 0x1405487D4 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpWatchdogDelayExpiration @ 0x1405488C0 (HalpWatchdogDelayExpiration.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055C2C0 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x14055C640 (HalpTimerWatchdogPreResetInterrupt.c)
 *     KeGetNextClockTickDuration @ 0x1405B5190 (KeGetNextClockTickDuration.c)
 *     KePrepareClockTimerForIdle @ 0x1405B52DC (KePrepareClockTimerForIdle.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B5660 (KePrepareClockTimerForPlatformIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B5B04 (KeResumeClockTimerFromIdle.c)
 *     KiResetClockInterval @ 0x1405B66B0 (KiResetClockInterval.c)
 *     PpmIdlePrevetoWatchdog @ 0x1405CA270 (PpmIdlePrevetoWatchdog.c)
 *     PopWatchdogDpc @ 0x1405D3FA0 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x1405D4040 (PopWatchdogWorker.c)
 *     PopSleepstudyInitialize @ 0x140C551E8 (PopSleepstudyInitialize.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x14028EF68 (HalpTimerScaleCounter.c)
 *     HvlpGetRegister64 @ 0x14028FB00 (HvlpGetRegister64.c)
 *     HalpHpetQueryCounter @ 0x140350770 (HalpHpetQueryCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

LARGE_INTEGER __cdecl RtlGetInterruptTimePrecise(PLARGE_INTEGER PerformanceCounter)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdx
  __int64 i; // r10
  __int64 v4; // rbp
  unsigned __int64 v5; // r15
  LARGE_INTEGER v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  int v10; // r9d
  signed __int64 v11; // rdx
  __int64 v12; // r14
  unsigned __int64 v13; // r11
  __int64 v14; // r11
  LARGE_INTEGER result; // rax
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(__int64, __int64); // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 InternalData; // rax
  __int64 (__fastcall *v21)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v23; // r10
  signed __int64 v24; // rax
  int v25; // r9d
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  int v36; // r9d
  signed __int64 v37; // rdx
  __int64 v38; // r14
  unsigned int v39; // r8d
  __int64 v40; // r8
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 (__fastcall *v43)(_QWORD); // rdx
  __int64 v44; // rax
  unsigned __int64 v45; // r10
  signed __int64 v46; // rax
  int v47; // r9d
  unsigned __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rcx
  unsigned __int64 v52; // r8
  signed __int32 v53[8]; // [rsp+0h] [rbp-78h] BYREF
  signed __int64 v54; // [rsp+20h] [rbp-58h] BYREF
  signed __int64 v55; // [rsp+28h] [rbp-50h] BYREF

  while ( 1 )
  {
    v1 = MEMORY[0xFFFFF78000000340];
    v2 = 0xFFFFF78000000294uLL;
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
          v12 = *(_QWORD *)(v4 + 208);
          do
          {
            v19 = *(_QWORD *)(v4 + 200);
            InternalData = HalpTimerGetInternalData(v4);
            v21 = *(__int64 (__fastcall **)(_QWORD))(v4 + 112);
            if ( v21 == HalpHpetQueryCounter )
              Counter = HalpHpetQueryCounter(InternalData);
            else
              Counter = guard_dispatch_icall_no_overrides(InternalData, v21);
            v23 = Counter;
            _InterlockedOr(v53, 0);
            v24 = *(_QWORD *)(v4 + 200);
          }
          while ( v19 != v24 );
        }
        while ( v12 != *(_QWORD *)(v4 + 208) );
        v25 = *(_DWORD *)(v4 + 220);
        v26 = v19 ^ v23;
        if ( _bittest64((const __int64 *)&v26, (unsigned __int8)(v25 - 1)) )
        {
          if ( v25 == 64 )
            v28 = -1LL;
          else
            v28 = (1LL << v25) - 1;
          v29 = 0LL;
          if ( v25 != 64 )
            v29 = 1LL << v25;
          v30 = v19 & v28;
          v11 = v23 | v19 ^ v30;
          if ( v23 < v30 )
            v11 += v29;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v11, v24);
        }
        else
        {
          if ( v25 == 64 )
            v27 = -1LL;
          else
            v27 = (1LL << v25) - 1;
          v11 = v23 | v19 & ~v27;
        }
        goto LABEL_17;
      }
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v8 = *(_QWORD *)(HalpPerformanceCounter + 72)
           + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v8 = *(_QWORD *)(HalpPerformanceCounter + 72);
      if ( *(__int64 (__fastcall **)(_QWORD))(HalpPerformanceCounter + 112) == HalpHvCounterQueryCounter )
      {
        if ( !HalpHvTimerApi )
        {
          v11 = __readmsr(0x40000020u);
LABEL_16:
          v12 = *(_QWORD *)(v4 + 208);
LABEL_17:
          v13 = v12 + v11;
          i = 10000000LL;
          goto LABEL_18;
        }
        if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
        {
          v55 = 0LL;
          while ( 1 )
          {
            v9 = (unsigned __int64)HvlpReferenceTscPage;
            v10 = *(_DWORD *)HvlpReferenceTscPage;
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
              v9 = __rdtsc();
              LODWORD(v2) = HIDWORD(v9);
              v9 = (unsigned int)v9;
              v2 = (unsigned int)v2;
            }
            v55 = *((_QWORD *)HvlpReferenceTscPage + 2)
                + (((v9 | (v2 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
            if ( *(_DWORD *)HvlpReferenceTscPage == v10 )
              goto LABEL_15;
            v2 = 0xFFFFF78000000294uLL;
          }
          HvlpGetRegister64(589828LL, &v55);
LABEL_15:
          v11 = v55;
          goto LABEL_16;
        }
        v8 = 0LL;
      }
      v11 = guard_dispatch_icall_no_overrides(v8, 0xFFFFF78000000294uLL);
      goto LABEL_16;
    }
    v7 = 10000000LL;
    if ( !HalpTimerReferencePage )
    {
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
      {
        do
        {
          v38 = *(_QWORD *)(v4 + 208);
          do
          {
            v41 = *(_QWORD *)(v4 + 200);
            v42 = HalpTimerGetInternalData(v4);
            v43 = *(__int64 (__fastcall **)(_QWORD))(v4 + 112);
            if ( v43 == HalpHpetQueryCounter )
              v44 = HalpHpetQueryCounter(v42);
            else
              v44 = guard_dispatch_icall_no_overrides(v42, v43);
            v45 = v44;
            _InterlockedOr(v53, 0);
            v46 = *(_QWORD *)(v4 + 200);
          }
          while ( v41 != v46 );
        }
        while ( v38 != *(_QWORD *)(v4 + 208) );
        v47 = *(_DWORD *)(v4 + 220);
        v48 = v41 ^ v45;
        if ( _bittest64((const __int64 *)&v48, (unsigned __int8)(v47 - 1)) )
        {
          if ( v47 == 64 )
            v50 = -1LL;
          else
            v50 = (1LL << v47) - 1;
          v51 = 0LL;
          if ( v47 != 64 )
            v51 = 1LL << v47;
          v52 = v41 & v50;
          v37 = v45 | v41 ^ v52;
          if ( v45 < v52 )
            v37 += v51;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v37, v46);
        }
        else
        {
          if ( v47 == 64 )
            v49 = -1LL;
          else
            v49 = (1LL << v47) - 1;
          v37 = v45 | v41 & ~v49;
        }
        goto LABEL_63;
      }
      v32 = HalpTimerGetInternalData(HalpPerformanceCounter);
      if ( *(_QWORD *)(v4 + 112) == v34 )
      {
        if ( !HalpHvTimerApi )
        {
          v37 = __readmsr(0x40000020u);
LABEL_62:
          v38 = *(_QWORD *)(v4 + 208);
LABEL_63:
          v13 = HalpTimerScaleCounter(v38 + v37, *(_QWORD *)(v4 + 192), 10000000LL);
          i = v39;
          goto LABEL_18;
        }
        if ( HalpHvTimerApi == v33 )
        {
          v54 = 0LL;
          while ( 1 )
          {
            v35 = (unsigned __int64)HvlpReferenceTscPage;
            v36 = *(_DWORD *)HvlpReferenceTscPage;
            if ( !*(_DWORD *)HvlpReferenceTscPage )
              break;
            if ( *(_BYTE *)v31 )
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
              v35 = __rdtsc();
              LODWORD(v31) = HIDWORD(v35);
              v35 = (unsigned int)v35;
              v31 = (unsigned int)v31;
            }
            v54 = *((_QWORD *)HvlpReferenceTscPage + 2)
                + (((v35 | (v31 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
            if ( *(_DWORD *)HvlpReferenceTscPage == v36 )
              goto LABEL_61;
            v31 = 0xFFFFF78000000294uLL;
          }
          HvlpGetRegister64(589828LL, &v54);
LABEL_61:
          v37 = v54;
          goto LABEL_62;
        }
        v32 = 0LL;
      }
      v37 = guard_dispatch_icall_no_overrides(v32, v31);
      goto LABEL_62;
    }
    v16 = (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0
        ? *(_QWORD *)(HalpPerformanceCounter + 72) + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number
        : *(_QWORD *)(HalpPerformanceCounter + 72);
    v17 = *(__int64 (__fastcall **)(__int64, __int64))(HalpPerformanceCounter + 112);
    if ( v17 == HalpTscQueryCounterOrdered )
    {
      __asm { rdtscp }
      v18 = (unsigned __int64)v17 | 0x29400000000LL;
    }
    else
    {
      v18 = guard_dispatch_icall_no_overrides(v16, 0xFFFFF78000000294uLL);
      i = 10000000LL;
    }
    v13 = (((unsigned __int64)v18 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
        + MEMORY[0xFFFFF780000003B8];
LABEL_18:
    if ( v4 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v40 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v40 = i;
      v13 = HalpTimerScaleCounter(v13, v7, v40);
    }
    if ( MEMORY[0xFFFFF78000000340] == v1 )
      break;
    _mm_pause();
  }
  PerformanceCounter->QuadPart = v13;
  if ( v13 <= v5 )
  {
    return v6;
  }
  else
  {
    v14 = v13 - v5 - 1;
    if ( MEMORY[0xFFFFF78000000369] )
      v14 <<= MEMORY[0xFFFFF78000000369];
    result.QuadPart = (((unsigned __int64)v14 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64) + v6.QuadPart;
  }
  return result;
}
