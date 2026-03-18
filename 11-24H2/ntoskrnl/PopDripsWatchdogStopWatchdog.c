/*
 * XREFs of PopDripsWatchdogStopWatchdog @ 0x140A27D48
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     PopDripsWatchdogStopTimer @ 0x140760128 (PopDripsWatchdogStopTimer.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1408B5444 (PiDmObjectManagerAcquireExclusiveLock.c)
 */

void PopDripsWatchdogStopWatchdog()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9

  PiDmObjectManagerAcquireExclusiveLock(&PopDripsWatchdogContext);
  if ( (dword_140F070E8 & 4) != 0 )
  {
    if ( (dword_140F071A4 & 1) != 0 )
      PopDripsWatchdogStopTimer((__int64)&unk_140F070F0, v0, v1, v2);
    if ( (dword_140F072AC & 1) != 0 )
      PopDripsWatchdogStopTimer((__int64)&unk_140F071F8, v0, v1, v2);
    dword_140F070E8 &= ~4u;
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  KeLeaveCriticalRegion();
}
