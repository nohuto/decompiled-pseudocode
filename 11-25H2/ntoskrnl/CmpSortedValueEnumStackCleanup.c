/*
 * XREFs of CmpSortedValueEnumStackCleanup @ 0x140977AE0
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1404632A4 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14083F9A0 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpSortedValueEnumStackEntryCleanup @ 0x140977B44 (CmpSortedValueEnumStackEntryCleanup.c)
 */

void __fastcall CmpSortedValueEnumStackCleanup(__int64 a1)
{
  __int16 i; // di
  struct _PRIVILEGE_SET *v3; // rcx
  __int64 EntryAtLayerHeight; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 8); ++i )
  {
    EntryAtLayerHeight = CmpValueEnumStackGetEntryAtLayerHeight(a1, i);
    CmpSortedValueEnumStackEntryCleanup(EntryAtLayerHeight);
  }
  v3 = *(struct _PRIVILEGE_SET **)(a1 + 80);
  if ( v3 )
    CmSiFreeMemory(v3);
}
