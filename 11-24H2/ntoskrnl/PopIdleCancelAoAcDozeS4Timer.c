/*
 * XREFs of PopIdleCancelAoAcDozeS4Timer @ 0x1404B26F0
 * Callers:
 *     PopPowerAggregatorDozeTimerWorker @ 0x140759220 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopIdleTriggerAdaptiveStandbyAction @ 0x14075C50C (PopIdleTriggerAdaptiveStandbyAction.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14075C5C0 (PopUpdateSmartUserPresencePredictions.c)
 *     PopUpdateSystemIdleContext @ 0x1409B99D4 (PopUpdateSystemIdleContext.c)
 *     PopIdleCsStateChanged @ 0x140AC9180 (PopIdleCsStateChanged.c)
 *     PopIdleGlobalUserPresenceCallback @ 0x140AC9210 (PopIdleGlobalUserPresenceCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer2 @ 0x1403C0960 (KeCancelTimer2.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerCancelled @ 0x140758CD4 (PopTraceSystemIdleS0LowPowerDozeTimerCancelled.c)
 */

char __fastcall PopIdleCancelAoAcDozeS4Timer(unsigned int a1)
{
  char v2; // bl
  KIRQL v3; // si
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_140F0BDB4 )
  {
    KeCancelTimer2((__int64)&PopIdleAoAcDozeS4Timer, 0LL, v4, v5);
    byte_140F0BDB4 = 0;
    v2 = 1;
  }
  KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v3);
  if ( v2 )
    PopTraceSystemIdleS0LowPowerDozeTimerCancelled(a1);
  return v2;
}
