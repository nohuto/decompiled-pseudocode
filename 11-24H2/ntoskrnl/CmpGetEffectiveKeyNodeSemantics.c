/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x140916F14
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140462458 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x140462930 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140462AF8 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140915814 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140915C74 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x1409166E8 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140916888 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140916914 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A28364 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetEffectiveKeyNodeSemantics(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x80000) != 0 )
    return *(_BYTE *)(a2 + 13) & 3;
  else
    return 0LL;
}
