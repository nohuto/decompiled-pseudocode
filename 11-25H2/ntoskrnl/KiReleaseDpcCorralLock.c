/*
 * XREFs of KiReleaseDpcCorralLock @ 0x140417DD0
 * Callers:
 *     KeGenericCallDpcEx @ 0x140417AB0 (KeGenericCallDpcEx.c)
 *     KiGenericCallDpcInitiatorWorker @ 0x140417C10 (KiGenericCallDpcInitiatorWorker.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void KiReleaseDpcCorralLock()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiDpcCorralLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiDpcCorralLock);
  KeAbPostRelease((ULONG_PTR)&KiDpcCorralLock);
  KeLeaveGuardedRegion();
}
