/*
 * XREFs of ExpReleasePoolListLockExclusive @ 0x14065B398
 * Callers:
 *     ExpPrivatePoolCreate @ 0x1407C5F40 (ExpPrivatePoolCreate.c)
 *     ExpPrivatePoolDestroy @ 0x1407C616C (ExpPrivatePoolDestroy.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

void ExpReleasePoolListLockExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E6BBE0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E6BBE0);
  KeAbPostRelease((ULONG_PTR)&qword_140E6BBE0);
  KeLeaveCriticalRegion();
}
