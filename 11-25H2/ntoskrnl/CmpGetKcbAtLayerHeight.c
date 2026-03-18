/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x140889590
 * Callers:
 *     CmQueryLayeredKey @ 0x140462ABC (CmQueryLayeredKey.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x1404C5D54 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14065C630 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpCreateTombstone @ 0x14065C944 (CmpCreateTombstone.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x1407D4340 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSubkeys @ 0x1407D4420 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1407D461C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14086B298 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 *     CmpLockKcbStackExclusive @ 0x140889540 (CmpLockKcbStackExclusive.c)
 *     CmpGetSymbolicLinkTarget @ 0x14088A6C0 (CmpGetSymbolicLinkTarget.c)
 *     CmpPromoteKey @ 0x140972D04 (CmpPromoteKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140973184 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x14097406C (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140974254 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140975494 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140975FC0 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x14097655C (CmpKeyEnumStackVerifyResumeContext.c)
 *     CmpDoWritethroughReparse @ 0x14098A930 (CmpDoWritethroughReparse.c)
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
