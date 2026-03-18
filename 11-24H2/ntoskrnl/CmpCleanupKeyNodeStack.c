/*
 * XREFs of CmpCleanupKeyNodeStack @ 0x140916C58
 * Callers:
 *     CmQueryLayeredKey @ 0x140462148 (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x1407CDBFC (CmSaveKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x1407E3C20 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1407E3EFC (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140913D68 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140914330 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x1409145DC (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140915178 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140915814 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140915F94 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpKeyEnumStackCleanup @ 0x140916A64 (CmpKeyEnumStackCleanup.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140916CB8 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackEntryCleanup @ 0x140916CE8 (CmpKeyNodeStackEntryCleanup.c)
 */

void __fastcall CmpCleanupKeyNodeStack(__int64 a1)
{
  unsigned __int16 i; // di
  __int64 EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v4; // rcx

  for ( i = 0; i <= *(_WORD *)a1; ++i )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1, i);
    CmpKeyNodeStackEntryCleanup(EntryAtLayerHeight);
  }
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 72);
  if ( v4 )
    CmSiFreeMemory(v4);
}
