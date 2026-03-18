/*
 * XREFs of CmpResetKeyNodeStack @ 0x140974D18
 * Callers:
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpKeyEnumStackReset @ 0x140975390 (CmpKeyEnumStackReset.c)
 * Callees:
 *     CmpKeyNodeStackEntryReset @ 0x1409756E4 (CmpKeyNodeStackEntryReset.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1409759C0 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpResetKeyNodeStack(__int16 *a1)
{
  __int16 i; // bx
  __int64 EntryAtLayerHeight; // rax

  for ( i = 0; i <= *a1; ++i )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)i);
    CmpKeyNodeStackEntryReset(EntryAtLayerHeight);
  }
}
