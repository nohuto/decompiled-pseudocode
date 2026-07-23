/*
 * XREFs of KeCancelTimer2 @ 0x1403AF520
 * Callers:
 *     ExpShutdownWorkerFactory @ 0x1403ADC94 (ExpShutdownWorkerFactory.c)
 *     ExCancelTimer @ 0x1403AF1B0 (ExCancelTimer.c)
 *     ExpSetTimer2 @ 0x1403B07F0 (ExpSetTimer2.c)
 *     ExpSetTimerObject2 @ 0x1403B09D8 (ExpSetTimerObject2.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404ACF80 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1404C6680 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x1404F77C4 (PopThermalEventTransitionEnableDeepSleep.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C5A50 (KiForceParkDutyCycleDpcCallback.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x1405CD100 (PopDirectedDripsStartDisengageTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405D17D4 (PopThermalUpdateTelemetryClientCount.c)
 *     PopPowerAggregatorDozeTimerDisarm @ 0x1406F34C4 (PopPowerAggregatorDozeTimerDisarm.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x140747F20 (PopPowerRequestDebounceTimerWorker.c)
 *     PopNetDisarmRefreshTimer @ 0x14075B6E8 (PopNetDisarmRefreshTimer.c)
 *     PopNetResiliencyPhaseStateChanged @ 0x14075B9E8 (PopNetResiliencyPhaseStateChanged.c)
 *     PopDripsWatchdogStopTimer @ 0x14075F128 (PopDripsWatchdogStopTimer.c)
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x14075F4EC (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 *     PopAdaptiveStandbySessionStop @ 0x1407619D0 (PopAdaptiveStandbySessionStop.c)
 *     ExpPartitionDestroy @ 0x1407C00FC (ExpPartitionDestroy.c)
 *     EtwpDisableKernelTrace @ 0x14085B3E0 (EtwpDisableKernelTrace.c)
 *     PopUpdatePdcSystemIdleState @ 0x140A1C734 (PopUpdatePdcSystemIdleState.c)
 *     PpmCheckReInit @ 0x140A6B620 (PpmCheckReInit.c)
 *     EtwpCoverageFlushPending @ 0x140A9A3F0 (EtwpCoverageFlushPending.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x140AA8000 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopNetResiliencyStateChanged @ 0x140AC71C0 (PopNetResiliencyStateChanged.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KiUpdateTimer2Flags @ 0x1403AF1F0 (KiUpdateTimer2Flags.c)
 *     KiRemoveTimer2 @ 0x1403B04C0 (KiRemoveTimer2.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1403B10E4 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1403B115C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiTraceCancelTimer2 @ 0x14049F2D0 (KiTraceCancelTimer2.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KeCancelTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  int v5; // r15d
  __int64 v6; // rdi
  __int64 v7; // rbx
  char v8; // r14
  unsigned __int8 CurrentIrql; // bp
  __int64 v10; // rdx
  __int64 v11; // rdx

  v4 = 0;
  v5 = 0;
  v6 = a1;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 96);
    v8 = 1;
  }
  else
  {
    v8 = 0;
    v7 = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  v10 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  if ( !(unsigned __int8)KiAcquireTimer2LockUnlessDisabled(v6, v10, a3, a4) )
  {
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(v6) )
    {
      KiRemoveTimer2(v6);
      KxReleaseSpinLock((volatile signed __int64 *)&KiTimer2CollectionLock);
    }
    else
    {
      if ( (*(_BYTE *)(v6 + 1) & 0xA) == 0 )
        goto LABEL_9;
      v5 = 4;
    }
    v4 = 1;
LABEL_9:
    KiUpdateTimer2Flags((volatile signed __int32 *)v6, v5, 2 * (v4 ^ 1));
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
  }
  __writecr8(CurrentIrql);
  if ( v8 && v4 )
    KiTraceCancelTimer2(v6, KiWaitAlways ^ _byteswap_uint64(v6 ^ __ROL8__(KiWaitNever ^ v7, KiWaitNever)));
  return v4;
}
