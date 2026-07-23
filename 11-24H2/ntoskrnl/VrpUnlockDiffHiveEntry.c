/*
 * XREFs of VrpUnlockDiffHiveEntry @ 0x14092CFB8
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14092C6BC (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14092CC8C (VrpUnloadDifferencingHive.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140AA83D0 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall VrpUnlockDiffHiveEntry(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 24;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 24));
  KeAbPostRelease(v1);
  KeLeaveCriticalRegion();
}
