/*
 * XREFs of CmpResetKeyNodeStack @ 0x140916010
 * Callers:
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpKeyEnumStackReset @ 0x140916688 (CmpKeyEnumStackReset.c)
 * Callees:
 *     CmpKeyNodeStackEntryReset @ 0x1409169DC (CmpKeyNodeStackEntryReset.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140916CB8 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
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
