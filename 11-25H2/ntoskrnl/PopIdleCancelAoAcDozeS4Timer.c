/*
 * XREFs of PopIdleCancelAoAcDozeS4Timer @ 0x1404B170C
 * Callers:
 *     PopPowerAggregatorDozeTimerWorker @ 0x14074CF60 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopIdleTriggerAdaptiveStandbyAction @ 0x14074FC70 (PopIdleTriggerAdaptiveStandbyAction.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14074FCF8 (PopUpdateSmartUserPresencePredictions.c)
 *     PopUpdateSystemIdleContext @ 0x140A1112C (PopUpdateSystemIdleContext.c)
 *     PopIdleGlobalUserPresenceCallback @ 0x140ABB1A0 (PopIdleGlobalUserPresenceCallback.c)
 *     PopIdleCsStateChanged @ 0x140ABC3B4 (PopIdleCsStateChanged.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeCancelTimer2 @ 0x14036FE50 (KeCancelTimer2.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerCancelled @ 0x14074CA78 (PopTraceSystemIdleS0LowPowerDozeTimerCancelled.c)
 */

char __fastcall PopIdleCancelAoAcDozeS4Timer(unsigned int a1)
{
  char v2; // bl
  KIRQL v3; // si
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_140F0A9D4 )
  {
    KeCancelTimer2((__int64)&PopIdleAoAcDozeS4Timer, 0LL, v4, v5);
    byte_140F0A9D4 = 0;
    v2 = 1;
  }
  KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v3);
  if ( v2 )
    PopTraceSystemIdleS0LowPowerDozeTimerCancelled(a1);
  return v2;
}
