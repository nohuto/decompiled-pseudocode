/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x14033CC90
 * Callers:
 *     KiCheckWaitNext @ 0x1402092E0 (KiCheckWaitNext.c)
 *     KiUpdateTime @ 0x14029B7C0 (KiUpdateTime.c)
 *     KiUpdateRunTime @ 0x14029BDF0 (KiUpdateRunTime.c)
 *     PpmExecutePeriodicPerfCheck @ 0x14029D218 (PpmExecutePeriodicPerfCheck.c)
 *     KeUpdatePendingQosRequest @ 0x14029E99C (KeUpdatePendingQosRequest.c)
 *     KiSetClockInterval @ 0x14029F358 (KiSetClockInterval.c)
 *     KiSetClockTimer @ 0x14029F85C (KiSetClockTimer.c)
 *     KiShouldRearmClockTimer @ 0x14029F97C (KiShouldRearmClockTimer.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14029FDD0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetNextClockTickDueTime @ 0x1402A01F0 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x1402A04E0 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetClockTickRate @ 0x1402A07B0 (KiSetClockTickRate.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402A0A58 (KiSetClockIntervalToMinimumRequested.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x14030CC70 (KiTransitionSchedulingGroupGeneration.c)
 *     PopCalculateCsSummary @ 0x14032BF4C (PopCalculateCsSummary.c)
 *     KeClockInterruptNotify @ 0x14033A5E0 (KeClockInterruptNotify.c)
 *     HalpTimerClockInterrupt @ 0x14033ADE0 (HalpTimerClockInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x14033B0A0 (KiCallInterruptServiceRoutine.c)
 *     KeQueryInterruptTimePrecise @ 0x14033BC40 (KeQueryInterruptTimePrecise.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     PpmUpdatePerformanceFeedback @ 0x1403505D0 (PpmUpdatePerformanceFeedback.c)
 *     KeIntSteerSnapPerf @ 0x140353E60 (KeIntSteerSnapPerf.c)
 *     PopFxResidentTimeoutRoutine @ 0x1403B4720 (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x1403B4888 (PopFxIdleComponent.c)
 *     PpmBeginActiveTimeAccumulation @ 0x1403B6D7C (PpmBeginActiveTimeAccumulation.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1403B9E70 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1403BA018 (HalpVpptUpdatePhysicalTimer.c)
 *     KiExpireTimer2 @ 0x1403C0A90 (KiExpireTimer2.c)
 *     KiCheckAndRearmForceIdle @ 0x1403C17F8 (KiCheckAndRearmForceIdle.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     PpmUpdateIdleVeto @ 0x1403CA680 (PpmUpdateIdleVeto.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1403CAB98 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     KeSetForceIdle @ 0x1403CAD20 (KeSetForceIdle.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x1403CBB1C (PopIdleWakeNotifyDevicesActive.c)
 *     KiResetForceIdle @ 0x14040C2A4 (KiResetForceIdle.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x140428294 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PpmResetPerfEngineForProcessor @ 0x140447E00 (PpmResetPerfEngineForProcessor.c)
 *     PpmCheckStart @ 0x140457794 (PpmCheckStart.c)
 *     PopSetWatchdog @ 0x140458BDC (PopSetWatchdog.c)
 *     KiCancelClockTimer @ 0x140469F60 (KiCancelClockTimer.c)
 *     PpmEventTracePreVetoAccounting @ 0x1404854A8 (PpmEventTracePreVetoAccounting.c)
 *     HalpVpptArmTimer @ 0x1404A5A30 (HalpVpptArmTimer.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x1404AA390 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x1404AAB20 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopSetModernStandbyTransitionReason @ 0x1404B615C (PopSetModernStandbyTransitionReason.c)
 *     PpmIdleEvaluateConstraints @ 0x1404C1970 (PpmIdleEvaluateConstraints.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1404C998C (PopRecordPowerWatchdogBlackboxInformation.c)
 *     KiResumeClockTimer @ 0x1404F5708 (KiResumeClockTimer.c)
 *     HalpWatchdogCheckPreResetNMI @ 0x14054B0C4 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpWatchdogDelayExpiration @ 0x14054B1B0 (HalpWatchdogDelayExpiration.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055EBC0 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x14055EF40 (HalpTimerWatchdogPreResetInterrupt.c)
 *     KeGetNextClockTickDuration @ 0x1405B8FD0 (KeGetNextClockTickDuration.c)
 *     KePrepareClockTimerForIdle @ 0x1405B911C (KePrepareClockTimerForIdle.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B94A0 (KePrepareClockTimerForPlatformIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B9944 (KeResumeClockTimerFromIdle.c)
 *     KiResetClockInterval @ 0x1405BA4D4 (KiResetClockInterval.c)
 *     PpmIdlePrevetoWatchdog @ 0x1405CE920 (PpmIdlePrevetoWatchdog.c)
 *     PopWatchdogDpc @ 0x1405D89F0 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x1405D8A90 (PopWatchdogWorker.c)
 *     PopSleepstudyInitialize @ 0x140C66E70 (PopSleepstudyInitialize.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x14030AA50 (HalpTimerScaleCounter.c)
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpHpetQueryCounter @ 0x1403D6DB0 (HalpHpetQueryCounter.c)
 *     HvlpGetRegister64 @ 0x1403D6DD0 (HvlpGetRegister64.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlGetInterruptTimePrecise(unsigned __int64 *a1)
{
  __int64 v1; // rbx
  __int64 (__fastcall *v2)(__int64, __int64); // rdx
  __int64 i; // r9
  __int64 v4; // rbp
  unsigned __int64 v5; // r15
  __int64 v6; // r12
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r11
  __int64 v12; // r11
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // r9d
  signed __int64 v17; // rdx
  __int64 v18; // r14
  signed __int64 v19; // rdx
  __int64 v20; // rcx
  _BYTE *v21; // r8
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // r11
  unsigned __int64 v25; // rax
  int v26; // r9d
  signed __int64 v27; // rdx
  __int64 v28; // r14
  unsigned int v29; // r8d
  __int64 v30; // r8
  __int64 v31; // rdi
  __int64 InternalData; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 (__fastcall *v35)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v37; // r10
  signed __int64 v38; // rax
  int v39; // r9d
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rcx
  unsigned __int64 v44; // r8
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 (__fastcall *v49)(_QWORD); // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // r10
  signed __int64 v52; // rax
  int v53; // r9d
  unsigned __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rcx
  unsigned __int64 v58; // r8
  signed __int32 v59[8]; // [rsp+0h] [rbp-78h] BYREF
  signed __int64 v60; // [rsp+20h] [rbp-58h] BYREF
  __int64 (__fastcall *v61[2])(__int64, __int64); // [rsp+28h] [rbp-50h] BYREF

  while ( 1 )
  {
    v1 = MEMORY[0xFFFFF78000000340];
    v2 = HalpTscQueryCounterOrdered;
    for ( i = 10000000LL; (MEMORY[0xFFFFF78000000340] & 1) != 0; v1 = MEMORY[0xFFFFF78000000340] )
      _mm_pause();
    v4 = HalpPerformanceCounter;
    v5 = MEMORY[0xFFFFF78000000350];
    v6 = MEMORY[0xFFFFF78000000008];
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
            v31 = *(_QWORD *)(v4 + 200);
            InternalData = HalpTimerGetInternalData(v4);
            v35 = *(__int64 (__fastcall **)(_QWORD))(v4 + 112);
            if ( v35 == HalpHpetQueryCounter )
              Counter = HalpHpetQueryCounter(InternalData);
            else
              Counter = guard_dispatch_icall_no_overrides(InternalData, v35, v33, v34);
            v37 = Counter;
            _InterlockedOr(v59, 0);
            v38 = *(_QWORD *)(v4 + 200);
          }
          while ( v31 != v38 );
        }
        while ( v18 != *(_QWORD *)(v4 + 208) );
        v39 = *(_DWORD *)(v4 + 220);
        v40 = v31 ^ v37;
        if ( _bittest64((const __int64 *)&v40, (unsigned __int8)(v39 - 1)) )
        {
          if ( v39 == 64 )
            v42 = -1LL;
          else
            v42 = (1LL << v39) - 1;
          v43 = 0LL;
          if ( v39 != 64 )
            v43 = 1LL << v39;
          v44 = v31 & v42;
          v17 = v37 | v31 ^ v44;
          if ( v37 < v44 )
            v17 += v43;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v17, v38);
        }
        else
        {
          if ( v39 == 64 )
            v41 = -1LL;
          else
            v41 = (1LL << v39) - 1;
          v17 = v37 | v31 & ~v41;
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
          v61[0] = 0LL;
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
            v61[0] = v2;
            if ( *(_DWORD *)HvlpReferenceTscPage == v16 )
              goto LABEL_28;
          }
          HvlpGetRegister64(589828LL, v61, 0xFFFFF78000000294uLL);
LABEL_28:
          v17 = (signed __int64)v61[0];
          goto LABEL_29;
        }
        v14 = 0LL;
      }
      v17 = guard_dispatch_icall_no_overrides(v14, HalpTscQueryCounterOrdered, 0xFFFFF78000000294uLL, 10000000LL);
      goto LABEL_29;
    }
    v7 = 10000000LL;
    if ( !HalpTimerReferencePage )
    {
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
      {
        do
        {
          v28 = *(_QWORD *)(v4 + 208);
          do
          {
            v45 = *(_QWORD *)(v4 + 200);
            v46 = HalpTimerGetInternalData(v4);
            v49 = *(__int64 (__fastcall **)(_QWORD))(v4 + 112);
            if ( v49 == HalpHpetQueryCounter )
              v50 = HalpHpetQueryCounter(v46);
            else
              v50 = guard_dispatch_icall_no_overrides(v46, v49, v47, v48);
            v51 = v50;
            _InterlockedOr(v59, 0);
            v52 = *(_QWORD *)(v4 + 200);
          }
          while ( v45 != v52 );
        }
        while ( v28 != *(_QWORD *)(v4 + 208) );
        v53 = *(_DWORD *)(v4 + 220);
        v54 = v45 ^ v51;
        if ( _bittest64((const __int64 *)&v54, (unsigned __int8)(v53 - 1)) )
        {
          if ( v53 == 64 )
            v56 = -1LL;
          else
            v56 = (1LL << v53) - 1;
          v57 = 0LL;
          if ( v53 != 64 )
            v57 = 1LL << v53;
          v58 = v45 & v56;
          v27 = v51 | v45 ^ v58;
          if ( v51 < v58 )
            v27 += v57;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v27, v52);
        }
        else
        {
          if ( v53 == 64 )
            v55 = -1LL;
          else
            v55 = (1LL << v53) - 1;
          v27 = v51 | v45 & ~v55;
        }
        goto LABEL_43;
      }
      v20 = HalpTimerGetInternalData(HalpPerformanceCounter);
      if ( *(_QWORD *)(v4 + 112) == v24 )
      {
        if ( !HalpHvTimerApi )
        {
          v27 = __readmsr(0x40000020u);
LABEL_42:
          v28 = *(_QWORD *)(v4 + 208);
LABEL_43:
          v11 = HalpTimerScaleCounter(v28 + v27, *(_QWORD *)(v4 + 192), 10000000LL);
          i = v29;
          goto LABEL_10;
        }
        if ( HalpHvTimerApi == v23 )
        {
          v60 = 0LL;
          while ( 1 )
          {
            v25 = (unsigned __int64)HvlpReferenceTscPage;
            v26 = *(_DWORD *)HvlpReferenceTscPage;
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
              v25 = __rdtsc();
              LODWORD(v19) = HIDWORD(v25);
              v25 = (unsigned int)v25;
              v19 = (unsigned int)v19;
            }
            v19 = *((_QWORD *)HvlpReferenceTscPage + 2)
                + (((v25 | (v19 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
            v60 = v19;
            if ( *(_DWORD *)HvlpReferenceTscPage == v26 )
              goto LABEL_41;
            v21 = (_BYTE *)0xFFFFF78000000294LL;
          }
          HvlpGetRegister64(589828LL, &v60, v21);
LABEL_41:
          v27 = v60;
          goto LABEL_42;
        }
        v20 = 0LL;
      }
      v27 = guard_dispatch_icall_no_overrides(v20, v19, v21, v22);
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
      v10 = guard_dispatch_icall_no_overrides(v8, HalpTscQueryCounterOrdered, 0xFFFFF78000000294uLL, 10000000LL);
      i = 10000000LL;
    }
    v11 = (((unsigned __int64)v10 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
        + MEMORY[0xFFFFF780000003B8];
LABEL_10:
    if ( v4 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v30 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v30 = i;
      v11 = HalpTimerScaleCounter(v11, v7, v30);
    }
    if ( MEMORY[0xFFFFF78000000340] == v1 )
      break;
    _mm_pause();
  }
  *a1 = v11;
  if ( v11 <= v5 )
    return v6;
  v12 = v11 - v5 - 1;
  if ( MEMORY[0xFFFFF78000000369] )
    v12 <<= MEMORY[0xFFFFF78000000369];
  return (((unsigned __int64)v12 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64) + v6;
}
