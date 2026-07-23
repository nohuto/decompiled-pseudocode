/*
 * XREFs of CmpResetKeyNodeStack @ 0x140909A80
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpKeyEnumStackReset @ 0x14090A0F8 (CmpKeyEnumStackReset.c)
 * Callees:
 *     CmpKeyNodeStackEntryReset @ 0x14090A44C (CmpKeyNodeStackEntryReset.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14090A728 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
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
