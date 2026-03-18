/*
 * XREFs of KeSetTimer2 @ 0x1403C20A0
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140204420 (NtSetInformationWorkerFactory.c)
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140247234 (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1402B389C (RtlpHpEnvCompactionSchedule.c)
 *     MiStoreEvictThread @ 0x140365C20 (MiStoreEvictThread.c)
 *     WdtpArmTimer @ 0x1403BF5C0 (WdtpArmTimer.c)
 *     ExpSetTimer2 @ 0x1403C1C30 (ExpSetTimer2.c)
 *     ExpSetTimerObject2 @ 0x1403C1E18 (ExpSetTimerObject2.c)
 *     ExSetTimer @ 0x1403C1FC0 (ExSetTimer.c)
 *     EnableFlushTimer @ 0x1403D1370 (EnableFlushTimer.c)
 *     PpmCheckArmPeriod @ 0x1404AC5B4 (PpmCheckArmPeriod.c)
 *     KiProcessPendingForegroundBoosts @ 0x1404BA9A0 (KiProcessPendingForegroundBoosts.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404D63C4 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x1404D69F4 (PopThermalEventTransitionDisableDeepSleep.c)
 *     KiInitializeIdealProcessorRebalancer @ 0x1405C0790 (KiInitializeIdealProcessorRebalancer.c)
 *     KiTriggerForegroundBoostDpc @ 0x1405C32D0 (KiTriggerForegroundBoostDpc.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C8320 (KiForceParkDutyCycleDpcCallback.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x1405CF9E0 (PopDirectedDripsStartDisengageTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405D4014 (PopThermalUpdateTelemetryClientCount.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1405D41D8 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopPowerButtonWorkCallback @ 0x1405D83A0 (PopPowerButtonWorkCallback.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x140749BF0 (PopPowerRequestDebounceTimerWorker.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x140749E0C (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 *     PpmRegisterPerfStates @ 0x14074FED4 (PpmRegisterPerfStates.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407542C0 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 *     PopPowerAggregatorDozeTimerArm @ 0x14075914C (PopPowerAggregatorDozeTimerArm.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x140759CB0 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopNetArmRefreshTimer @ 0x14075C644 (PopNetArmRefreshTimer.c)
 *     PopAdaptiveStandbySetPolicyTimer @ 0x14076247C (PopAdaptiveStandbySetPolicyTimer.c)
 *     SshpAlpcCloseTraceSession @ 0x140767B88 (SshpAlpcCloseTraceSession.c)
 *     EtwpEnableKernelTrace @ 0x1408E95BC (EtwpEnableKernelTrace.c)
 *     EtwpCoverageEnsureContext @ 0x140903F90 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageRecord @ 0x140904574 (EtwpCoverageRecord.c)
 *     NtCreateWorkerFactory @ 0x1409A6CF0 (NtCreateWorkerFactory.c)
 *     ExpWorkQueueManagerThread @ 0x140A21D40 (ExpWorkQueueManagerThread.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x140A27F14 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopThermalWorker @ 0x140A40A30 (PopThermalWorker.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x140A4EFCC (PopPowerRequestHandleRequestUpdate.c)
 *     PopNetArmDsEvaluationTimer @ 0x140A98458 (PopNetArmDsEvaluationTimer.c)
 *     PopSleepstudyStartNextSession @ 0x140AAC910 (PopSleepstudyStartNextSession.c)
 *     ExpTimeRefreshWork @ 0x140B612C0 (ExpTimeRefreshWork.c)
 *     HalpBlkInitSystem @ 0x140C144B8 (HalpBlkInitSystem.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140C2A1E8 (KiInitializeDpcRuntimeHistoryHashTables.c)
 *     ExInitializeTimeRefresh @ 0x140C4058C (ExInitializeTimeRefresh.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140254BA0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140254C70 (KxWaitForSpinLockAndAcquire.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1402A0034 (KiSendClockInterruptToTargetProcessor.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     RtlGetSystemTimePrecise @ 0x14034EB80 (RtlGetSystemTimePrecise.c)
 *     KiUpdateTimer2Collections @ 0x1403BF670 (KiUpdateTimer2Collections.c)
 *     PsTimerResolutionActive @ 0x1403BF7D0 (PsTimerResolutionActive.c)
 *     KiTraceSetTimer2 @ 0x1403C1240 (KiTraceSetTimer2.c)
 *     KiRemoveTimer2 @ 0x1403C1900 (KiRemoveTimer2.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1403C2524 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1403C259C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1403C2620 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiRequestTimer2Expiration @ 0x14041B550 (KiRequestTimer2Expiration.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x14043E030 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetTimer2(__int64 a1, __int64 SystemTimePrecise, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // rsi
  char v8; // r13
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 InterruptTimePrecise; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int8 v14; // si
  int v15; // r15d
  char v16; // al
  __int64 v17; // rdx
  volatile signed __int32 v18; // edx
  signed __int32 v19; // eax
  signed __int32 v20; // edx
  char v22; // al
  bool v23; // zf
  char v24; // r8
  __int64 v25; // rax
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  char v27; // [rsp+60h] [rbp+8h] BYREF
  char v28; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v29; // [rsp+70h] [rbp+18h] BYREF

  v5 = a3;
  v6 = SystemTimePrecise;
  if ( a3 && a3 < (unsigned int)KeMinimumIncrement )
    v5 = (unsigned int)KeMinimumIncrement;
  v8 = *(_BYTE *)(a1 + 129);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v27 = 0;
  if ( v6 > 0 )
  {
    v27 = 1;
    if ( (v8 & 4) != 0 )
      SystemTimePrecise = RtlGetSystemTimePrecise();
    else
      SystemTimePrecise = MEMORY[0xFFFFF78000000014];
    v25 = 0LL;
    if ( v6 > SystemTimePrecise )
      v25 = SystemTimePrecise - v6;
    v6 = v25;
  }
  if ( (v8 & 4) != 0 )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v29);
  else
    InterruptTimePrecise = MEMORY[0xFFFFF78000000008];
  v11 = InterruptTimePrecise - v6;
  if ( InterruptTimePrecise >= v6 || v11 == -1LL )
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
  v28 = 0;
  v15 = 1;
  if ( !(unsigned __int8)KiAcquireTimer2LockUnlessDisabled(a1, SystemTimePrecise, a3, a4) )
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
      v22 = *(_BYTE *)(a1 + 1);
      if ( (v22 & 0xF) != 0 )
      {
        v15 = 8;
        v14 = (v22 & 4) == 0;
      }
    }
    v16 = v27;
    *(_QWORD *)(a1 + 72) = v11;
    *(_QWORD *)(a1 + 80) = v12;
    v17 = *(unsigned __int8 *)(a1 + 129);
    *(_BYTE *)(a1 + 128) = v16;
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 88) = v5;
    if ( KiGlobalTimerResolutionRequests )
    {
      v23 = (v17 & 0x10) == 0;
    }
    else
    {
      if ( (v17 & 0x2E) != 0 )
      {
LABEL_21:
        v27 = 0;
        if ( v15 == 1 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTimer2CollectionLock, 0LL) )
              KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiTimer2CollectionLock);
          }
          else
          {
            KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KiTimer2CollectionLock);
          }
          LOBYTE(v17) = 1;
          KiInsertTimer2WithCollectionLockHeld(a1, v17, &v28, &v27);
        }
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        {
          KiTraceSetTimer2(a1, v14, v15);
        }
        else
        {
          v18 = *(_DWORD *)a1;
          v19 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)a1,
                  (v15 << 8) | *(_DWORD *)a1 & 0xFFFFF07F,
                  *(_DWORD *)a1);
          if ( v18 != v19 )
          {
            do
            {
              v20 = v19;
              v19 = _InterlockedCompareExchange((volatile signed __int32 *)a1, (v15 << 8) | v19 & 0xFFFFF07F, v19);
            }
            while ( v20 != v19 );
          }
          if ( v15 == 1 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
              _InterlockedAnd64((volatile signed __int64 *)&KiTimer2CollectionLock, 0LL);
            else
              KiReleaseSpinLockInstrumented((volatile signed __int64 *)&KiTimer2CollectionLock, retaddr);
          }
        }
        if ( v27 )
          KiHvEnlightenedGuestPriorityKick(
            KeGetCurrentPrcb(),
            KiProcessorBlock[(unsigned int)KiClockTimerOwner],
            (unsigned int)KiVpThreadSystemWorkPriority);
        if ( KiForceIdleDisabled || KiForceIdleState != 4 )
        {
          if ( v28 )
          {
            KiRequestTimer2Expiration();
          }
          else if ( (v8 & 4) != 0
                 && v11 < MEMORY[0xFFFFF78000000008] + (unsigned __int64)(unsigned int)KeMaximumIncrement
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
        if ( v24 )
        {
          *(_BYTE *)(a1 + 129) = v17 & 0xEF;
          KiUpdateTimer2Collections((_BYTE *)a1);
        }
        goto LABEL_21;
      }
      v23 = v24 == 0;
    }
    if ( v23 )
    {
      *(_BYTE *)(a1 + 129) = v17 | 0x10;
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
