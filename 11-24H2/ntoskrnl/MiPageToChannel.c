/*
 * XREFs of MiPageToChannel @ 0x1402F3214
 * Callers:
 *     MiSynchronizeFastPageInsert @ 0x14022D9F0 (MiSynchronizeFastPageInsert.c)
 *     MiLockStandbyLookasidePage @ 0x14026C300 (MiLockStandbyLookasidePage.c)
 *     MiSharedInsertPfnChainInList @ 0x14026FCE0 (MiSharedInsertPfnChainInList.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x1402F0DB0 (MiReplaceSecondaryListStandbyPage.c)
 *     MiEnqueuePageList @ 0x1402F2770 (MiEnqueuePageList.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiInsertHugeRangeInList @ 0x1404F0CC0 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404F0F98 (MiUnlinkHugeRange.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x14066FA78 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiDescribePageRun @ 0x1407E93FC (MiDescribePageRun.c)
 *     MiInitializeSystemChannelOrdering @ 0x140C57BEC (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     MiSearchChannelTable @ 0x14026F0D4 (MiSearchChannelTable.c)
 */

char __fastcall MiPageToChannel(ULONG_PTR a1)
{
  if ( qword_140E2DB28 )
    return *((_BYTE *)MiSearchChannelTable(a1) + 12);
  else
    return 0;
}
