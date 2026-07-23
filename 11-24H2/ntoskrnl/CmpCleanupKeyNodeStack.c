/*
 * XREFs of CmpCleanupKeyNodeStack @ 0x14090A6C8
 * Callers:
 *     CmQueryLayeredKey @ 0x140457758 (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x1407CE0EC (CmSaveKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x1407E4170 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1407E444C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x1409077DC (CmpGetSubKeyCountForKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140907DA0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14090804C (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140908BE8 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140909284 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140909A04 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpKeyEnumStackCleanup @ 0x14090A4D4 (CmpKeyEnumStackCleanup.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14090A728 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackEntryCleanup @ 0x14090A758 (CmpKeyNodeStackEntryCleanup.c)
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
