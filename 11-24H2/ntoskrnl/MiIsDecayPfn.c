/*
 * XREFs of MiIsDecayPfn @ 0x1403028E0
 * Callers:
 *     MiAddKernelStackToPrcbCache @ 0x1402211B0 (MiAddKernelStackToPrcbCache.c)
 *     MiLockStandbyLookasidePage @ 0x140221890 (MiLockStandbyLookasidePage.c)
 *     MiSharedInsertPfnChainInList @ 0x140225270 (MiSharedInsertPfnChainInList.c)
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x1402568F0 (MiReplaceSecondaryListStandbyPage.c)
 *     MiWalkPagesOnLists @ 0x14026E7E0 (MiWalkPagesOnLists.c)
 *     MiSynchronizeFastPageInsert @ 0x140301300 (MiSynchronizeFastPageInsert.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiAgePteWorker @ 0x1403040A0 (MiAgePteWorker.c)
 *     MiSafeLockPageAtDpc @ 0x140311180 (MiSafeLockPageAtDpc.c)
 *     MiIdentifyPfnWrapper @ 0x140311220 (MiIdentifyPfnWrapper.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiUpdatePfnPriority @ 0x1403DCE10 (MiUpdatePfnPriority.c)
 *     MiLockStandbyOldestPage @ 0x1403E71A8 (MiLockStandbyOldestPage.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiSetPageZeroInProgress @ 0x140414240 (MiSetPageZeroInProgress.c)
 *     MiMirrorReduceBlackWrites @ 0x14041D3B0 (MiMirrorReduceBlackWrites.c)
 *     MiSafeTryLockNestedPageAtDpc @ 0x140485350 (MiSafeTryLockNestedPageAtDpc.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(ULONG_PTR a1)
{
  return a1 >= qword_140E35C40 && a1 < qword_140E35C40 + 2048;
}
