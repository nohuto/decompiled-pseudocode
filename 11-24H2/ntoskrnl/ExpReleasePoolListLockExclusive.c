/*
 * XREFs of ExpReleasePoolListLockExclusive @ 0x140659AB8
 * Callers:
 *     ExpPrivatePoolCreate @ 0x1407C63A0 (ExpPrivatePoolCreate.c)
 *     ExpPrivatePoolDestroy @ 0x1407C65CC (ExpPrivatePoolDestroy.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void ExpReleasePoolListLockExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E6BDE0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E6BDE0);
  KeAbPostRelease((ULONG_PTR)&qword_140E6BDE0);
  KeLeaveCriticalRegion();
}
