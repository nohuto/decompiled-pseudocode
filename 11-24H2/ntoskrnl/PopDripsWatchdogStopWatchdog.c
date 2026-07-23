/*
 * XREFs of PopDripsWatchdogStopWatchdog @ 0x140A1C7C8
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PopDripsWatchdogStopTimer @ 0x14075F128 (PopDripsWatchdogStopTimer.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1408B2D34 (PiDmObjectManagerAcquireExclusiveLock.c)
 */

void PopDripsWatchdogStopWatchdog()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9

  PiDmObjectManagerAcquireExclusiveLock(&PopDripsWatchdogContext);
  if ( (dword_140F073E8 & 4) != 0 )
  {
    if ( (dword_140F074A4 & 1) != 0 )
      PopDripsWatchdogStopTimer((__int64)&unk_140F073F0, v0, v1, v2);
    if ( (dword_140F075AC & 1) != 0 )
      PopDripsWatchdogStopTimer((__int64)&unk_140F074F8, v0, v1, v2);
    dword_140F073E8 &= ~4u;
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  KeLeaveCriticalRegion();
}
