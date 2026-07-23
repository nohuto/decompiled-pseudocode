/*
 * XREFs of KeSetTimer2 @ 0x140370EF0
 * Callers:
 *     MiStoreEvictThread @ 0x14036EC70 (MiStoreEvictThread.c)
 *     WdtpArmTimer @ 0x14036F440 (WdtpArmTimer.c)
 *     ExpSetTimer2 @ 0x140370A80 (ExpSetTimer2.c)
 *     ExpSetTimerObject2 @ 0x140370C68 (ExpSetTimerObject2.c)
 *     ExSetTimer @ 0x140370E10 (ExSetTimer.c)
 *     EnableFlushTimer @ 0x1403BB8A8 (EnableFlushTimer.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1403BBC64 (RtlpHpEnvCompactionSchedule.c)
 *     NtSetInformationWorkerFactory @ 0x14043ED50 (NtSetInformationWorkerFactory.c)
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14046C910 (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     PpmCheckArmPeriod @ 0x1404AB1F4 (PpmCheckArmPeriod.c)
 *     KiProcessPendingForegroundBoosts @ 0x1404BAD50 (KiProcessPendingForegroundBoosts.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404D6CD4 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x1404D7BC4 (PopThermalEventTransitionDisableDeepSleep.c)
 *     KiInitializeIdealProcessorRebalancer @ 0x1405BC728 (KiInitializeIdealProcessorRebalancer.c)
 *     KiTriggerForegroundBoostDpc @ 0x1405BF1F0 (KiTriggerForegroundBoostDpc.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C4100 (KiForceParkDutyCycleDpcCallback.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x1405CB330 (PopDirectedDripsStartDisengageTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405CF604 (PopThermalUpdateTelemetryClientCount.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1405CF7C8 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopPowerButtonWorkCallback @ 0x1405D39C0 (PopPowerButtonWorkCallback.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x14073DB70 (PopPowerRequestDebounceTimerWorker.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x14073DD8C (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407481E8 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 *     PopPowerAggregatorDozeTimerArm @ 0x14074CE84 (PopPowerAggregatorDozeTimerArm.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x14074D860 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopNetArmRefreshTimer @ 0x14074FD7C (PopNetArmRefreshTimer.c)
 *     PdcPoNetworkResiliency @ 0x140750790 (PdcPoNetworkResiliency.c)
 *     SshpAlpcCloseTraceSession @ 0x1407581C8 (SshpAlpcCloseTraceSession.c)
 *     EtwpEnableKernelTrace @ 0x1408DA1EC (EtwpEnableKernelTrace.c)
 *     NtCreateWorkerFactory @ 0x1409A67B0 (NtCreateWorkerFactory.c)
 *     ExpWorkQueueManagerThread @ 0x140A17020 (ExpWorkQueueManagerThread.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x140A1EF7C (PopDripsWatchdogScheduleNextTimer.c)
 *     PopThermalWorker @ 0x140A3C300 (PopThermalWorker.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x140A4C6BC (PopPowerRequestHandleRequestUpdate.c)
 *     EtwpCoverageRecord @ 0x140A57C90 (EtwpCoverageRecord.c)
 *     EtwpCoverageEnsureContext @ 0x140A57F04 (EtwpCoverageEnsureContext.c)
 *     PopSleepstudyStartNextSession @ 0x140AA74D0 (PopSleepstudyStartNextSession.c)
 *     ExpTimeRefreshWork @ 0x140B51190 (ExpTimeRefreshWork.c)
 *     HalpBlkInitSystem @ 0x140C03428 (HalpBlkInitSystem.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140C190EC (KiInitializeDpcRuntimeHistoryHashTables.c)
 *     ExInitializeTimeRefresh @ 0x140C2F2B0 (ExInitializeTimeRefresh.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1402777C0 (KiSendClockInterruptToTargetProcessor.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140315960 (KiHvEnlightenedGuestPriorityKick.c)
 *     RtlGetSystemTimePrecise @ 0x14031AAC0 (RtlGetSystemTimePrecise.c)
 *     PsTimerResolutionActive @ 0x14036F5C0 (PsTimerResolutionActive.c)
 *     KiUpdateTimer2Collections @ 0x14036F5E8 (KiUpdateTimer2Collections.c)
 *     KiTraceSetTimer2 @ 0x14036FF80 (KiTraceSetTimer2.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x140371384 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1403713FC (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140371480 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiRemoveTimer2 @ 0x140372730 (KiRemoveTimer2.c)
 *     KiRequestTimer2Expiration @ 0x14041E04C (KiRequestTimer2Expiration.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
  LARGE_INTEGER PerformanceCounter; // [rsp+70h] [rbp+18h] BYREF

  v5 = a3;
  QuadPart = SystemTimePrecise.QuadPart;
  if ( a3 && a3 < (unsigned int)KeMinimumIncrement )
    v5 = (unsigned int)KeMinimumIncrement;
  v8 = *(_BYTE *)(a1 + 129);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  v27 = 0;
  if ( QuadPart > 0 )
  {
    v27 = 1;
    if ( (v8 & 4) != 0 )
      SystemTimePrecise = RtlGetSystemTimePrecise();
    else
      SystemTimePrecise.QuadPart = MEMORY[0xFFFFF78000000014];
    v25 = 0LL;
    if ( QuadPart > SystemTimePrecise.QuadPart )
      v25 = SystemTimePrecise.QuadPart - QuadPart;
    QuadPart = v25;
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
  v28 = 0;
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
            (__int64)KeGetCurrentPrcb(),
            KiProcessorBlock[(unsigned int)KiClockTimerOwner],
            KiVpThreadSystemWorkPriority);
        if ( KiForceIdleDisabled || KiForceIdleState != 4 )
        {
          if ( v28 )
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
        goto LABEL_40;
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
LABEL_40:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v14;
}
