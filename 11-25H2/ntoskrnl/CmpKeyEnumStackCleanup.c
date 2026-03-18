/*
 * XREFs of CmpKeyEnumStackCleanup @ 0x14097576C
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1407D4420 (CmpPartialPromoteSubkeys.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140974C9C (CmpSubtreeEnumeratorCleanup.c)
 *     CmpEnumerateLayeredKey @ 0x140974D5C (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140975934 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpCleanupKeyNodeStack @ 0x140975960 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x140975A24 (CmpKeyEnumStackEntryCleanup.c)
 */

void __fastcall CmpKeyEnumStackCleanup(__int64 a1)
{
  unsigned __int16 i; // di
  __int64 EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v4; // rcx

  CmpCleanupKeyNodeStack(a1 + 8);
  for ( i = 0; i <= *(_WORD *)a1; ++i )
  {
    EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(a1, i);
    CmpKeyEnumStackEntryCleanup(EntryAtLayerHeight);
  }
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 344);
  if ( v4 )
    CmSiFreeMemory(v4);
}
