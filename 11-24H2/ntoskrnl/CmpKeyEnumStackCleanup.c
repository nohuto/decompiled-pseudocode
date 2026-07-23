/*
 * XREFs of CmpKeyEnumStackCleanup @ 0x14090A4D4
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1407E4250 (CmpPartialPromoteSubkeys.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140909A04 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpEnumerateLayeredKey @ 0x140909AC4 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14090A69C (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpCleanupKeyNodeStack @ 0x14090A6C8 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x14090A78C (CmpKeyEnumStackEntryCleanup.c)
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
