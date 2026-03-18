/*
 * XREFs of MiPageToChannel @ 0x14023EDC0
 * Callers:
 *     MiLockStandbyLookasidePage @ 0x140212E20 (MiLockStandbyLookasidePage.c)
 *     MiSynchronizeFastPageInsert @ 0x140217140 (MiSynchronizeFastPageInsert.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x14023C950 (MiReplaceSecondaryListStandbyPage.c)
 *     MiEnqueuePageList @ 0x14023E310 (MiEnqueuePageList.c)
 *     MiSharedInsertPfnChainInList @ 0x14023EE90 (MiSharedInsertPfnChainInList.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140344980 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiInsertHugeRangeInList @ 0x1404ED4E4 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404ED7BC (MiUnlinkHugeRange.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140663F58 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiDescribePageRun @ 0x1407D953C (MiDescribePageRun.c)
 *     MiInitializeSystemChannelOrdering @ 0x140C4690C (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1402167C8 (MiSearchChannelTable.c)
 */

char __fastcall MiPageToChannel(ULONG_PTR a1)
{
  if ( qword_140E2D8E8 )
    return *((_BYTE *)MiSearchChannelTable(a1) + 12);
  else
    return 0;
}
