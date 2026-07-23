/*
 * XREFs of KeSetTimer2 @ 0x1403B0C60
 * Callers:
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402F60E4 (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     NtSetInformationWorkerFactory @ 0x14032BA00 (NtSetInformationWorkerFactory.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14035ED20 (RtlpHpEnvCompactionSchedule.c)
 *     WdtpArmTimer @ 0x1403AE180 (WdtpArmTimer.c)
 *     ExpSetTimer2 @ 0x1403B07F0 (ExpSetTimer2.c)
 *     ExpSetTimerObject2 @ 0x1403B09D8 (ExpSetTimerObject2.c)
 *     ExSetTimer @ 0x1403B0B80 (ExSetTimer.c)
 *     EnableFlushTimer @ 0x14044A108 (EnableFlushTimer.c)
 *     MiStoreEvictThread @ 0x140476E20 (MiStoreEvictThread.c)
 *     PpmCheckArmPeriod @ 0x1404A6A14 (PpmCheckArmPeriod.c)
 *     KiProcessPendingForegroundBoosts @ 0x1404B5840 (KiProcessPendingForegroundBoosts.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404CF814 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x1404CFE44 (PopThermalEventTransitionDisableDeepSleep.c)
 *     KiInitializeIdealProcessorRebalancer @ 0x1405BDD64 (KiInitializeIdealProcessorRebalancer.c)
 *     KiTriggerForegroundBoostDpc @ 0x1405C08A0 (KiTriggerForegroundBoostDpc.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C5A50 (KiForceParkDutyCycleDpcCallback.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x1405CD100 (PopDirectedDripsStartDisengageTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405D17D4 (PopThermalUpdateTelemetryClientCount.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1405D1998 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopPowerButtonWorkCallback @ 0x1405D58C0 (PopPowerButtonWorkCallback.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x140747F20 (PopPowerRequestDebounceTimerWorker.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x14074813C (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407525E0 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 *     PopPowerAggregatorDozeTimerArm @ 0x1407575AC (PopPowerAggregatorDozeTimerArm.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x140758100 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopNetArmRefreshTimer @ 0x14075B5E0 (PopNetArmRefreshTimer.c)
 *     PopAdaptiveStandbySetPolicyTimer @ 0x140761C4C (PopAdaptiveStandbySetPolicyTimer.c)
 *     SshpAlpcCloseTraceSession @ 0x140767DA8 (SshpAlpcCloseTraceSession.c)
 *     EtwpEnableKernelTrace @ 0x14085ADEC (EtwpEnableKernelTrace.c)
 *     EtwpCoverageRecord @ 0x1408DC9D4 (EtwpCoverageRecord.c)
 *     ExpWorkQueueManagerThread @ 0x1408F84F0 (ExpWorkQueueManagerThread.c)
 *     NtCreateWorkerFactory @ 0x1409901C0 (NtCreateWorkerFactory.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x140A1C994 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopThermalWorker @ 0x140A36310 (PopThermalWorker.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x140A45D7C (PopPowerRequestHandleRequestUpdate.c)
 *     PopNetArmDsEvaluationTimer @ 0x140A94C14 (PopNetArmDsEvaluationTimer.c)
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 *     EtwpCoverageEnsureContext @ 0x140ADAD8C (EtwpCoverageEnsureContext.c)
 *     ExpTimeRefreshWork @ 0x140B63390 (ExpTimeRefreshWork.c)
 *     HalpBlkInitSystem @ 0x140C164B8 (HalpBlkInitSystem.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140C2C308 (KiInitializeDpcRuntimeHistoryHashTables.c)
 *     ExInitializeTimeRefresh @ 0x140C426DC (ExInitializeTimeRefresh.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1403179A4 (KiSendClockInterruptToTargetProcessor.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     RtlGetSystemTimePrecise @ 0x14036D060 (RtlGetSystemTimePrecise.c)
 *     KiUpdateTimer2Collections @ 0x1403AE230 (KiUpdateTimer2Collections.c)
 *     PsTimerResolutionActive @ 0x1403AE390 (PsTimerResolutionActive.c)
 *     KiTraceSetTimer2 @ 0x1403AFE00 (KiTraceSetTimer2.c)
 *     KiRemoveTimer2 @ 0x1403B04C0 (KiRemoveTimer2.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1403B10E4 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1403B115C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1403B11E0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiRequestTimer2Expiration @ 0x14040F090 (KiRequestTimer2Expiration.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140432720 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetTimer2(__int64 a1, LARGE_INTEGER SystemTimePrecise, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 QuadPart; // rsi
  char v8; // r13
  unsigned __int8 CurrentIrql; // bp
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int8 v14; // si
  int v15; // r15d
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // al
  __int64 v19; // rdx
  volatile signed __int32 v20; // edx
  signed __int32 v21; // eax
  signed __int32 v22; // edx
  char v24; // al
  bool v25; // zf
  __int64 v26; // rax
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  char v28; // [rsp+60h] [rbp+8h] BYREF
  char v29; // [rsp+68h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+70h] [rbp+18h] BYREF

  v5 = a3;
  QuadPart = SystemTimePrecise.QuadPart;
  if ( a3 && a3 < (unsigned int)KeMinimumIncrement )
    v5 = (unsigned int)KeMinimumIncrement;
  v8 = *(_BYTE *)(a1 + 129);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v28 = 0;
  if ( QuadPart > 0 )
  {
    v28 = 1;
    if ( (v8 & 4) != 0 )
      SystemTimePrecise = RtlGetSystemTimePrecise();
    else
      SystemTimePrecise.QuadPart = MEMORY[0xFFFFF78000000014];
    v26 = 0LL;
    if ( QuadPart > SystemTimePrecise.QuadPart )
      v26 = SystemTimePrecise.QuadPart - QuadPart;
    QuadPart = v26;
  }
  if ( (v8 & 4) != 0 )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  else
    InterruptTimePrecise.QuadPart = MEMORY[0xFFFFF78000000008];
  v11 = InterruptTimePrecise.QuadPart - QuadPart;
  if ( InterruptTimePrecise.QuadPart >= (unsigned __int64)QuadPart || v11 == -1LL )
    v11 = -2LL;
  v12 = v11;
  if ( a4 && *(_BYTE *)(a1 + 130) != 23 )
  {
    v13 = *(_QWORD *)(a4 + 8);
    if ( v13 == -1 )
    {
      v12 = -1LL;
    }
    else
    {
      v12 = v13 + v11;
      if ( v13 + v11 < v11 || v12 == -1 )
        v12 = -2LL;
    }
  }
  v14 = 0;
  v29 = 0;
  v15 = 1;
  if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiAcquireTimer2LockUnlessDisabled)(
                           a1,
                           (LARGE_INTEGER)SystemTimePrecise.QuadPart,
                           a3,
                           a4) )
  {
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64((volatile signed __int64 *)&KiTimer2CollectionLock, 0LL);
      else
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)&KiTimer2CollectionLock, retaddr);
      v14 = 1;
    }
    else
    {
      v24 = *(_BYTE *)(a1 + 1);
      if ( (v24 & 0xF) != 0 )
      {
        v15 = 8;
        v14 = (v24 & 4) == 0;
      }
    }
    v18 = v28;
    *(_QWORD *)(a1 + 72) = v11;
    *(_QWORD *)(a1 + 80) = v12;
    v19 = *(unsigned __int8 *)(a1 + 129);
    *(_BYTE *)(a1 + 128) = v18;
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 88) = v5;
    if ( KiGlobalTimerResolutionRequests )
    {
      v25 = (v19 & 0x10) == 0;
    }
    else
    {
      if ( (v19 & 0x2E) != 0 )
      {
LABEL_21:
        v28 = 0;
        if ( v15 == 1 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTimer2CollectionLock, 0LL) )
              KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiTimer2CollectionLock, v19, v16, v17);
          }
          else
          {
            KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KiTimer2CollectionLock);
          }
          LOBYTE(v19) = 1;
          KiInsertTimer2WithCollectionLockHeld(a1, v19, &v29, &v28);
        }
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        {
          KiTraceSetTimer2(a1, v14, v15);
        }
        else
        {
          v20 = *(_DWORD *)a1;
          v21 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)a1,
                  (v15 << 8) | *(_DWORD *)a1 & 0xFFFFF07F,
                  *(_DWORD *)a1);
          if ( v20 != v21 )
          {
            do
            {
              v22 = v21;
              v21 = _InterlockedCompareExchange((volatile signed __int32 *)a1, (v15 << 8) | v21 & 0xFFFFF07F, v21);
            }
            while ( v22 != v21 );
          }
          if ( v15 == 1 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
              _InterlockedAnd64((volatile signed __int64 *)&KiTimer2CollectionLock, 0LL);
            else
              KiReleaseSpinLockInstrumented((volatile signed __int64 *)&KiTimer2CollectionLock, retaddr);
          }
        }
        if ( v28 )
          KiHvEnlightenedGuestPriorityKick(
            KeGetCurrentPrcb(),
            KiProcessorBlock[(unsigned int)KiClockTimerOwner],
            (unsigned int)KiVpThreadSystemWorkPriority);
        if ( KiForceIdleDisabled || KiForceIdleState != 4 )
        {
          if ( v29 )
          {
            KiRequestTimer2Expiration();
          }
          else if ( (v8 & 4) != 0
                 && v11 < MEMORY[0xFFFFF78000000008] + (unsigned __int64)KeMaximumIncrement
                 && (!KiClockOwnerOneShotRequest
                  || v11 < KiClockOwnerOneShotRequest
                  && KiClockOwnerOneShotRequest - v11 > (unsigned int)KeMinimumIncrement) )
          {
            KiSendClockInterruptToTargetProcessor(KiClockTimerOwner);
          }
        }
        goto LABEL_41;
      }
      if ( !PsTimerResolutionActive((__int64)KeGetCurrentThread()->ApcState.Process) )
      {
        if ( (_BYTE)v16 )
        {
          *(_BYTE *)(a1 + 129) = v19 & 0xEF;
          KiUpdateTimer2Collections((_BYTE *)a1);
        }
        goto LABEL_21;
      }
      v25 = (_BYTE)v16 == 0;
    }
    if ( v25 )
    {
      *(_BYTE *)(a1 + 129) = v19 | 0x10;
      KiUpdateTimer2Collections((_BYTE *)a1);
    }
    goto LABEL_21;
  }
LABEL_41:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v14;
}
