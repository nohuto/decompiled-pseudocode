/*
 * XREFs of CmpKeyEnumStackReset @ 0x140975390
 * Callers:
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140975494 (CmpSubtreeEnumeratorAdvance.c)
 * Callees:
 *     CmpResetKeyNodeStack @ 0x140974D18 (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140975934 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x140975A24 (CmpKeyEnumStackEntryCleanup.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x140975C8C (CmpKeyEnumStackEntryInitialize.c)
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
