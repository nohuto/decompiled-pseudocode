/*
 * XREFs of KeCancelTimer2 @ 0x14036FE50
 * Callers:
 *     ExpShutdownWorkerFactory @ 0x14036EF50 (ExpShutdownWorkerFactory.c)
 *     ExCancelTimer @ 0x14036FA70 (ExCancelTimer.c)
 *     ExpSetTimer2 @ 0x140370A80 (ExpSetTimer2.c)
 *     ExpSetTimerObject2 @ 0x140370C68 (ExpSetTimerObject2.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404B170C (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1404CD69C (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x1404F7764 (PopThermalEventTransitionEnableDeepSleep.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C4100 (KiForceParkDutyCycleDpcCallback.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x1405CB330 (PopDirectedDripsStartDisengageTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405CF604 (PopThermalUpdateTelemetryClientCount.c)
 *     PopPowerAggregatorDozeTimerDisarm @ 0x1406E9AD0 (PopPowerAggregatorDozeTimerDisarm.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x14073DB70 (PopPowerRequestDebounceTimerWorker.c)
 *     PopNetDisarmRefreshTimer @ 0x14074FE88 (PopNetDisarmRefreshTimer.c)
 *     PdcPoNetworkResiliency @ 0x140750790 (PdcPoNetworkResiliency.c)
 *     PopDripsWatchdogStopTimer @ 0x140753590 (PopDripsWatchdogStopTimer.c)
 *     ExpPartitionDestroy @ 0x1407B04DC (ExpPartitionDestroy.c)
 *     EtwpDisableKernelTrace @ 0x1408DA7E0 (EtwpDisableKernelTrace.c)
 *     PopUpdatePdcSystemIdleState @ 0x140A1ED14 (PopUpdatePdcSystemIdleState.c)
 *     PpmCheckReInit @ 0x140A4D648 (PpmCheckReInit.c)
 *     EtwpCoverageFlushPending @ 0x140A99E48 (EtwpCoverageFlushPending.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x140AA7B30 (PopPowerRequestExecutionRequiredSettingCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiUpdateTimer2Flags @ 0x14036FAB0 (KiUpdateTimer2Flags.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x140371384 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1403713FC (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiRemoveTimer2 @ 0x140372730 (KiRemoveTimer2.c)
 *     KiTraceCancelTimer2 @ 0x1404A4270 (KiTraceCancelTimer2.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(a1);
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
