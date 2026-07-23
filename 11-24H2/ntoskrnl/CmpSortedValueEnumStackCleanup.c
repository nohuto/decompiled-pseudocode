/*
 * XREFs of CmpSortedValueEnumStackCleanup @ 0x140A1CD80
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140457F40 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpSortedValueEnumStackGetEntryAtLayerHeight @ 0x140A1D020 (CmpSortedValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpSortedValueEnumStackEntryCleanup @ 0x140A1D1C0 (CmpSortedValueEnumStackEntryCleanup.c)
 */

void __fastcall CmpSortedValueEnumStackCleanup(__int64 a1)
{
  unsigned __int16 i; // di
  struct _PRIVILEGE_SET *v3; // rcx
  __int64 EntryAtLayerHeight; // rax

  for ( i = 0; i <= *(_WORD *)(a1 + 8); ++i )
  {
    EntryAtLayerHeight = CmpSortedValueEnumStackGetEntryAtLayerHeight(a1, i);
    CmpSortedValueEnumStackEntryCleanup(EntryAtLayerHeight);
  }
  v3 = *(struct _PRIVILEGE_SET **)(a1 + 80);
  if ( v3 )
    CmSiFreeMemory(v3);
}
