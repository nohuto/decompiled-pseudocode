/*
 * XREFs of PopIdleArmAoAcDozeS4Timer @ 0x1404D6CD4
 * Callers:
 *     PopPowerAggregatorDozeTimerWorker @ 0x14074CF60 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopIdleTriggerAdaptiveStandbyAction @ 0x14074FC70 (PopIdleTriggerAdaptiveStandbyAction.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14074FCF8 (PopUpdateSmartUserPresencePredictions.c)
 *     PopUpdateSystemIdleContext @ 0x140A1112C (PopUpdateSystemIdleContext.c)
 *     PopIdleCsStateChanged @ 0x140ABC3B4 (PopIdleCsStateChanged.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     PopIdleChooseDozeS4Time @ 0x1405D37CC (PopIdleChooseDozeS4Time.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x14074C9B8 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
 *     PopFilterCapabilities @ 0x140A10C3C (PopFilterCapabilities.c)
 *     PopIsDozeSupported @ 0x140A870C0 (PopIsDozeSupported.c)
 */

void PopIdleArmAoAcDozeS4Timer()
{
  char v0; // bl
  KIRQL v1; // si
  unsigned int v2; // edi
  _BYTE v3[80]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v4; // [rsp+80h] [rbp+8h] BYREF
  LARGE_INTEGER v5; // [rsp+88h] [rbp+10h] BYREF

  v5.QuadPart = 0LL;
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
          if ( !byte_140F0A9D4 )
          {
            KeSetTimer2((__int64)&PopIdleAoAcDozeS4Timer, v5, 0LL, 0LL);
            v0 = 1;
            dword_140F0A9D8 = v2;
            byte_140F0A9D4 = 1;
          }
          KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v1);
          if ( v0 )
            ((void (__fastcall *)(_QWORD, _QWORD))PopTraceSystemIdleS0LowPowerDozeTimerArmed)(
              v2,
              (LARGE_INTEGER)v5.QuadPart);
        }
      }
    }
  }
}
