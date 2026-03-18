/*
 * XREFs of MiIsDecayPfn @ 0x14022EFD0
 * Callers:
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiSynchronizeFastPageInsert @ 0x14022D9F0 (MiSynchronizeFastPageInsert.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiAgePteWorker @ 0x14022FCA0 (MiAgePteWorker.c)
 *     MiAddKernelStackToPrcbCache @ 0x14026BC20 (MiAddKernelStackToPrcbCache.c)
 *     MiLockStandbyLookasidePage @ 0x14026C300 (MiLockStandbyLookasidePage.c)
 *     MiSharedInsertPfnChainInList @ 0x14026FCE0 (MiSharedInsertPfnChainInList.c)
 *     MiInsertPagesInList @ 0x140271500 (MiInsertPagesInList.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x1402F0DB0 (MiReplaceSecondaryListStandbyPage.c)
 *     MiSafeLockPageAtDpc @ 0x1403072A0 (MiSafeLockPageAtDpc.c)
 *     MiIdentifyPfnWrapper @ 0x140307340 (MiIdentifyPfnWrapper.c)
 *     MiSwapNumaStandbyPage @ 0x14039474C (MiSwapNumaStandbyPage.c)
 *     MiLockStandbyOldestPage @ 0x1403F41B8 (MiLockStandbyOldestPage.c)
 *     MiUpdatePfnPriority @ 0x1403FE790 (MiUpdatePfnPriority.c)
 *     MiSetPageZeroInProgress @ 0x14041E500 (MiSetPageZeroInProgress.c)
 *     MiMirrorReduceBlackWrites @ 0x140429260 (MiMirrorReduceBlackWrites.c)
 *     MiWalkPagesOnLists @ 0x140489D48 (MiWalkPagesOnLists.c)
 *     MiSafeTryLockNestedPageAtDpc @ 0x14048A528 (MiSafeTryLockNestedPageAtDpc.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(ULONG_PTR a1)
{
  return a1 >= qword_140E35B00 && a1 < qword_140E35B00 + 2048;
}
