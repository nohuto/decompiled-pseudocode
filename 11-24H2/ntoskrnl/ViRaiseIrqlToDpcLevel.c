/*
 * XREFs of ViRaiseIrqlToDpcLevel @ 0x1406142A0
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
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 ViRaiseIrqlToDpcLevel()
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v1; // cl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v1 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v1, 2);
  }
  return CurrentIrql;
}
