/*
 * XREFs of KiReleaseDpcCorralLock @ 0x140414FB0
 * Callers:
 *     KeGenericCallDpcEx @ 0x140414C8C (KeGenericCallDpcEx.c)
 *     KiGenericCallDpcInitiatorWorker @ 0x140414DF0 (KiGenericCallDpcInitiatorWorker.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 */

void KiReleaseDpcCorralLock()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiDpcCorralLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiDpcCorralLock);
  KeAbPostRelease((ULONG_PTR)&KiDpcCorralLock);
  KeLeaveGuardedRegion();
}
