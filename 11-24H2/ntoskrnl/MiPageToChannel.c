/*
 * XREFs of MiPageToChannel @ 0x140258D54
 * Callers:
 *     MiLockStandbyLookasidePage @ 0x140221890 (MiLockStandbyLookasidePage.c)
 *     MiSharedInsertPfnChainInList @ 0x140225270 (MiSharedInsertPfnChainInList.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x1402568F0 (MiReplaceSecondaryListStandbyPage.c)
 *     MiEnqueuePageList @ 0x1402582B0 (MiEnqueuePageList.c)
 *     MiSynchronizeFastPageInsert @ 0x140301300 (MiSynchronizeFastPageInsert.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiInsertHugeRangeInList @ 0x1404EE760 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404EEA38 (MiUnlinkHugeRange.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140670C48 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiDescribePageRun @ 0x1407E99CC (MiDescribePageRun.c)
 *     MiInitializeSystemChannelOrdering @ 0x140C59D7C (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140224664 (MiSearchChannelTable.c)
 */

char __fastcall MiPageToChannel(ULONG_PTR a1)
{
  if ( qword_140E2DC68 )
    return *((_BYTE *)MiSearchChannelTable(a1) + 12);
  else
    return 0;
}
