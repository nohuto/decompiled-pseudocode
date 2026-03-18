/*
 * XREFs of PopIdleArmAoAcDozeS4Timer @ 0x1404D63C4
 * Callers:
 *     PopPowerAggregatorDozeTimerWorker @ 0x140759220 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopIdleTriggerAdaptiveStandbyAction @ 0x14075C50C (PopIdleTriggerAdaptiveStandbyAction.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14075C5C0 (PopUpdateSmartUserPresencePredictions.c)
 *     PopUpdateSystemIdleContext @ 0x1409B99D4 (PopUpdateSystemIdleContext.c)
 *     PopIdleCsStateChanged @ 0x140AC9180 (PopIdleCsStateChanged.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     PopIdleChooseDozeS4Time @ 0x1405D812C (PopIdleChooseDozeS4Time.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x140758C14 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
 *     PopFilterCapabilities @ 0x1409B923C (PopFilterCapabilities.c)
 *     PopIsDozeSupported @ 0x140A8BDD8 (PopIsDozeSupported.c)
 */

void PopIdleArmAoAcDozeS4Timer()
{
  char v0; // bl
  KIRQL v1; // si
  unsigned int v2; // edi
  _BYTE v3[80]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v4; // [rsp+80h] [rbp+8h] BYREF
  __int64 v5; // [rsp+88h] [rbp+10h] BYREF

  v5 = 0LL;
  v4 = 0;
  memset_0(v3, 0, 0x4CuLL);
  if ( PopPlatformAoAcCapabilityInitialized )
  {
    if ( PopPlatformAoAc )
    {
      PopFilterCapabilities(&PopCapabilities, v3);
      v0 = 0;
      if ( (unsigned __int8)PopIsDozeSupported(v3) )
      {
        if ( (unsigned __int8)PopIdleChooseDozeS4Time(&v5, &v4) )
        {
          v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
          v2 = v4;
          if ( !byte_140F0BDB4 )
          {
            KeSetTimer2((__int64)&PopIdleAoAcDozeS4Timer, v5, 0LL, 0LL);
            v0 = 1;
            dword_140F0BDB8 = v2;
            byte_140F0BDB4 = 1;
          }
          KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v1);
          if ( v0 )
            PopTraceSystemIdleS0LowPowerDozeTimerArmed(v2, v5);
        }
      }
    }
  }
}
