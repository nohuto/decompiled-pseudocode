/*
 * XREFs of PspUnlockThreadSecurityExclusive @ 0x1404317A0
 * Callers:
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
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
