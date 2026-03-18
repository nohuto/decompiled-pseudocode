/*
 * XREFs of PopDripsWatchdogStopWatchdog @ 0x140A1EDA8
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     Feature_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline @ 0x1404F25D8 (Feature_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline.c)
 *     PopDripsWatchdogStopTimer @ 0x140753590 (PopDripsWatchdogStopTimer.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x140968EE4 (PiDmObjectManagerAcquireExclusiveLock.c)
 */

void PopDripsWatchdogStopWatchdog()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9

  PiDmObjectManagerAcquireExclusiveLock(&PopDripsWatchdogContext);
  if ( (dword_140F06A68 & 4) != 0 )
  {
    if ( (unsigned int)Feature_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (dword_140F06B24 & 1) != 0 )
        PopDripsWatchdogStopTimer((__int64)&unk_140F06A70, v0, v1, v2);
      if ( (dword_140F06C2C & 1) != 0 )
        PopDripsWatchdogStopTimer((__int64)&unk_140F06B78, v0, v1, v2);
    }
    dword_140F06A68 &= ~4u;
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  KeLeaveCriticalRegion();
}
