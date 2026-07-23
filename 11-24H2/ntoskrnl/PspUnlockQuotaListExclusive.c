/*
 * XREFs of PspUnlockQuotaListExclusive @ 0x1404C91A0
 * Callers:
 *     PspRemoveQuotaBlock @ 0x1409C59F0 (PspRemoveQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x140A2BAE4 (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall PspUnlockQuotaListExclusive(__int64 a1, volatile signed __int64 *a2)
{
  if ( (_InterlockedExchangeAdd64(a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  return KeLeaveCriticalRegionThread();
}
