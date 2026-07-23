/*
 * XREFs of CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14090A728
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140457A68 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x140457F40 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140458108 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmSaveKey @ 0x1407CE0EC (CmSaveKey.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x1407E1B0C (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x1407E4170 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSubkeys @ 0x1407E4250 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1407E444C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140907DA0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140908320 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpPromoteSubtree @ 0x140908398 (CmpPromoteSubtree.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140908550 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140908F00 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140909284 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140909474 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1409096E4 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpResetKeyNodeStack @ 0x140909A80 (CmpResetKeyNodeStack.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x14090A158 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14090A1FC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyEnumStackAdvance @ 0x14090A2F8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x14090A384 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14090A540 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpCleanupKeyNodeStack @ 0x14090A6C8 (CmpCleanupKeyNodeStack.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A1CDE4 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
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
