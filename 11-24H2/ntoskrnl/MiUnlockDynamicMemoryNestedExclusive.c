/*
 * XREFs of MiUnlockDynamicMemoryNestedExclusive @ 0x14066FB80
 * Callers:
 *     MiReleaseAddMemoryLocks @ 0x1407EA32C (MiReleaseAddMemoryLocks.c)
 *     MiNodeZeroConductor @ 0x1407FFF00 (MiNodeZeroConductor.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 MiUnlockDynamicMemoryNestedExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E38E00, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E38E00);
  return KeAbPostRelease((ULONG_PTR)&qword_140E38E00);
}
