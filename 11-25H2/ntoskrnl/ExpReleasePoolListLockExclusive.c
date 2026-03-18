/*
 * XREFs of ExpReleasePoolListLockExclusive @ 0x14064F408
 * Callers:
 *     ExpPrivatePoolCreate @ 0x1407B6770 (ExpPrivatePoolCreate.c)
 *     ExpPrivatePoolDestroy @ 0x1407B699C (ExpPrivatePoolDestroy.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void ExpReleasePoolListLockExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E6B920, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E6B920);
  KeAbPostRelease((ULONG_PTR)&qword_140E6B920);
  KeLeaveCriticalRegion();
}
