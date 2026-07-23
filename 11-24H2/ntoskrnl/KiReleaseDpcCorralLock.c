/*
 * XREFs of KiReleaseDpcCorralLock @ 0x140270E10
 * Callers:
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 *     KiGenericCallDpcInitiatorWorker @ 0x140270C50 (KiGenericCallDpcInitiatorWorker.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 */

void KiReleaseDpcCorralLock()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiDpcCorralLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&KiDpcCorralLock);
  KeAbPostRelease((ULONG_PTR)&KiDpcCorralLock);
  KeLeaveGuardedRegion();
}
