/*
 * XREFs of CmpKeyEnumStackCleanup @ 0x140916A64
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1407E3D00 (CmpPartialPromoteSubkeys.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140915F94 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpEnumerateLayeredKey @ 0x140916054 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140916C2C (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpCleanupKeyNodeStack @ 0x140916C58 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x140916D1C (CmpKeyEnumStackEntryCleanup.c)
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
