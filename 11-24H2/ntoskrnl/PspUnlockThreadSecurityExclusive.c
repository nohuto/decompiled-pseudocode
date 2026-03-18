/*
 * XREFs of PspUnlockThreadSecurityExclusive @ 0x14043D500
 * Callers:
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

__int64 __fastcall PspUnlockThreadSecurityExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 1424;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1424), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1424));
  KeAbPostRelease(v1);
  return KeLeaveCriticalRegionThread();
}
