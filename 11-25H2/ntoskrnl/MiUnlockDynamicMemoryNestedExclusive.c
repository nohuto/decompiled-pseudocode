/*
 * XREFs of MiUnlockDynamicMemoryNestedExclusive @ 0x140662E6C
 * Callers:
 *     MiReleaseAddMemoryLocks @ 0x1407D9E9C (MiReleaseAddMemoryLocks.c)
 *     MiNodeZeroConductor @ 0x1407EF900 (MiNodeZeroConductor.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 MiUnlockDynamicMemoryNestedExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E38A80, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E38A80);
  return KeAbPostRelease((ULONG_PTR)&qword_140E38A80);
}
