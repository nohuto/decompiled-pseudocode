/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x140975C1C
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140462DCC (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1404632A4 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14046346C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14097451C (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14097497C (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x1409753F0 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140975590 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x14097561C (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14097772C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
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
