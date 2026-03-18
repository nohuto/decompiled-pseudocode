/*
 * XREFs of CmpCleanupKeyNodeStack @ 0x140975960
 * Callers:
 *     CmQueryLayeredKey @ 0x140462ABC (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x1407BE3E4 (CmSaveKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x1407D4340 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1407D461C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140972C44 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140973184 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14097451C (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140974C9C (CmpSubtreeEnumeratorCleanup.c)
 *     CmpKeyEnumStackCleanup @ 0x14097576C (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140975FC0 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14097648C (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1409759C0 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackEntryCleanup @ 0x1409759F0 (CmpKeyNodeStackEntryCleanup.c)
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
