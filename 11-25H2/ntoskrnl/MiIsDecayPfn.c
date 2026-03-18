/*
 * XREFs of MiIsDecayPfn @ 0x140241130
 * Callers:
 *     MiSafeTryLockNestedPageAtDpc @ 0x14020DCB8 (MiSafeTryLockNestedPageAtDpc.c)
 *     MiLockStandbyLookasidePage @ 0x140212E20 (MiLockStandbyLookasidePage.c)
 *     MiSynchronizeFastPageInsert @ 0x140217140 (MiSynchronizeFastPageInsert.c)
 *     MiSafeLockPageAtDpc @ 0x140220D38 (MiSafeLockPageAtDpc.c)
 *     MiIdentifyPfnWrapper @ 0x140220FB0 (MiIdentifyPfnWrapper.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x14023C950 (MiReplaceSecondaryListStandbyPage.c)
 *     MiSharedInsertPfnChainInList @ 0x14023EE90 (MiSharedInsertPfnChainInList.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiAllocateWsle @ 0x14024B590 (MiAllocateWsle.c)
 *     MiInsertPagesInList @ 0x14024F050 (MiInsertPagesInList.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiAddKernelStackToPrcbCache @ 0x140346930 (MiAddKernelStackToPrcbCache.c)
 *     MiUpdatePfnPriority @ 0x140389C80 (MiUpdatePfnPriority.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiLockStandbyOldestPage @ 0x1403ED798 (MiLockStandbyOldestPage.c)
 *     MiMirrorReduceBlackWrites @ 0x14042FEE0 (MiMirrorReduceBlackWrites.c)
 *     MiSetPageZeroInProgress @ 0x1404328F0 (MiSetPageZeroInProgress.c)
 *     MiWalkPagesOnLists @ 0x14048A518 (MiWalkPagesOnLists.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(ULONG_PTR a1)
{
  return a1 >= qword_140E358C0 && a1 < qword_140E358C0 + 2048;
}
