/*
 * XREFs of CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140916CB8
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140462458 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x140462930 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140462AF8 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmSaveKey @ 0x1407CDBFC (CmSaveKey.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x1407E15BC (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x1407E3C20 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSubkeys @ 0x1407E3D00 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1407E3EFC (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140914330 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x1409148B0 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpPromoteSubtree @ 0x140914928 (CmpPromoteSubtree.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140914AE0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140915490 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140915814 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140915A04 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140915C74 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpResetKeyNodeStack @ 0x140916010 (CmpResetKeyNodeStack.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x1409166E8 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14091678C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyEnumStackAdvance @ 0x140916888 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140916914 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x140916AD0 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpCleanupKeyNodeStack @ 0x140916C58 (CmpCleanupKeyNodeStack.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A28364 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpKeyNodeStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 72) + 32 * (a2 - 2LL);
  else
    return a1 + 32LL * a2 + 8;
}
