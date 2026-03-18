/*
 * XREFs of PspUnlockQuotaListExclusive @ 0x1404D00B0
 * Callers:
 *     PspRemoveQuotaBlock @ 0x1409D5BC0 (PspRemoveQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x140A36C94 (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

__int64 __fastcall PspUnlockQuotaListExclusive(__int64 a1, volatile signed __int64 *a2)
{
  if ( (_InterlockedExchangeAdd64(a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  return KeLeaveCriticalRegionThread();
}
