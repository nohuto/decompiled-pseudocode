/*
 * XREFs of MiUnlockDynamicMemoryNestedExclusive @ 0x14066E9AC
 * Callers:
 *     MiReleaseAddMemoryLocks @ 0x1407E9D5C (MiReleaseAddMemoryLocks.c)
 *     MiNodeZeroConductor @ 0x1407FF7C0 (MiNodeZeroConductor.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

__int64 MiUnlockDynamicMemoryNestedExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E38CC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E38CC0);
  return KeAbPostRelease((ULONG_PTR)&qword_140E38CC0);
}
