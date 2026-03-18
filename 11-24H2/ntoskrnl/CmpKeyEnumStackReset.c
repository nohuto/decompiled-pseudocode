/*
 * XREFs of CmpKeyEnumStackReset @ 0x140916688
 * Callers:
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14091678C (CmpSubtreeEnumeratorAdvance.c)
 * Callees:
 *     CmpResetKeyNodeStack @ 0x140916010 (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140916C2C (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x140916D1C (CmpKeyEnumStackEntryCleanup.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x140916F84 (CmpKeyEnumStackEntryInitialize.c)
 */

void __fastcall CmpKeyEnumStackReset(__int64 a1)
{
  unsigned __int16 v1; // di
  __int64 EntryAtLayerHeight; // rbx

  v1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
  CmpResetKeyNodeStack((__int16 *)(a1 + 8));
  while ( v1 <= *(_WORD *)a1 )
  {
    EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(a1, v1);
    CmpKeyEnumStackEntryCleanup(EntryAtLayerHeight);
    CmpKeyEnumStackEntryInitialize(EntryAtLayerHeight);
    ++v1;
  }
}
