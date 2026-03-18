/*
 * XREFs of NormalizationList__Unlock @ 0x1405F3C48
 * Callers:
 *     RtlpGetNormalization @ 0x14078D5B0 (RtlpGetNormalization.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

void NormalizationList__Unlock()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&NormalizationListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&NormalizationListLock);
  KeAbPostRelease((ULONG_PTR)&NormalizationListLock);
  KeLeaveCriticalRegion();
}
