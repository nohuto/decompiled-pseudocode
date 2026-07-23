/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x14090C380
 * Callers:
 *     CmQueryLayeredKey @ 0x140457758 (CmQueryLayeredKey.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x1404BFA34 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x140666910 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpCreateTombstone @ 0x140666D04 (CmpCreateTombstone.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x1407E4170 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSubkeys @ 0x1407E4250 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1407E444C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408707C4 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetSymbolicLinkTarget @ 0x14087ABD0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x14087F420 (CmpDoWritethroughReparse.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140907DA0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x14090811C (CmpKeyEnumStackVerifyResumeContext.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140908BE8 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140908F00 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14090A1FC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14090B1D0 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmpLockKcbStackExclusive @ 0x14090C338 (CmpLockKcbStackExclusive.c)
 *     CmpPromoteKey @ 0x1409708BC (CmpPromoteKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetKcbAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * a2 - 16);
  else
    return *(_QWORD *)(a1 + 8LL * a2 + 8);
}
