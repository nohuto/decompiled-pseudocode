/*
 * XREFs of PopIdleCancelAoAcDozeS4Timer @ 0x1404ACF80
 * Callers:
 *     PopPowerAggregatorDozeTimerWorker @ 0x140757680 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14075B55C (PopUpdateSmartUserPresencePredictions.c)
 *     PopUpdateSystemIdleContext @ 0x1409A0024 (PopUpdateSystemIdleContext.c)
 *     PopIdleGlobalUserPresenceCallback @ 0x140ABA420 (PopIdleGlobalUserPresenceCallback.c)
 *     PopIdleCsStateChanged @ 0x140ABB810 (PopIdleCsStateChanged.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer2 @ 0x1403AF520 (KeCancelTimer2.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerCancelled @ 0x140757154 (PopTraceSystemIdleS0LowPowerDozeTimerCancelled.c)
 */

char __fastcall PopIdleCancelAoAcDozeS4Timer(unsigned int a1)
{
  char v2; // bl
  KIRQL v3; // si
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_140F0B8D4 )
  {
    KeCancelTimer2((__int64)&PopIdleAoAcDozeS4Timer, 0LL, v4, v5);
    byte_140F0B8D4 = 0;
    v2 = 1;
  }
  KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v3);
  if ( v2 )
    PopTraceSystemIdleS0LowPowerDozeTimerCancelled(a1);
  return v2;
}
