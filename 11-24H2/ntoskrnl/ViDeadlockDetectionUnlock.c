/*
 * XREFs of ViDeadlockDetectionUnlock @ 0x140B9920C
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x140613FD8 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140614138 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockInitializeResource @ 0x140B980B0 (VfDeadlockInitializeResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x140B99188 (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x140B9923C (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140B9A2E4 (ViIsThreadInsidePagingCodePaths.c)
 *     VfDeadlockReleaseResource @ 0x140BA75AC (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140BA83C4 (VfDeadlockAcquireResource.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall ViDeadlockDetectionUnlock(int a1)
{
  if ( a1 )
  {
    ViDeadlockDatabaseOwner = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&ViDeadlockDatabaseLock);
  }
  else
  {
    ExReleaseSpinLockSharedFromDpcLevel(&ViDeadlockDatabaseLock);
  }
}
