/*
 * XREFs of VrpUnlockDiffHiveEntry @ 0x14092AE78
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14092A57C (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14092AB4C (VrpUnloadDifferencingHive.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140AAD350 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
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
