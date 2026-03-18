/*
 * XREFs of CmpKeyEnumStackNotifyPromotion @ 0x140973594
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1407D4420 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSubtree @ 0x14097360C (CmpPromoteSubtree.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     CmpKeyEnumStackEntryNotifyPromotion @ 0x140973CE8 (CmpKeyEnumStackEntryNotifyPromotion.c)
 *     CmpKeyNodeStackEntryReset @ 0x1409756E4 (CmpKeyNodeStackEntryReset.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140975934 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1409759C0 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpKeyEnumStackNotifyPromotion(unsigned __int16 *a1)
{
  __int64 EntryAtLayerHeight; // rdi
  __int64 result; // rax
  __int64 v4; // rbx
  ULONG_PTR v5; // rcx
  _DWORD *v6; // r8
  ULONG_PTR v7; // rdx

  EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(a1, *a1);
  CmpKeyEnumStackEntryNotifyPromotion(EntryAtLayerHeight);
  result = CmpKeyNodeStackGetEntryAtLayerHeight(a1 + 4, *a1);
  v4 = result;
  if ( *(_DWORD *)(result + 8) == -1 )
  {
    CmpKeyNodeStackEntryReset(result);
    v5 = *(_QWORD *)EntryAtLayerHeight;
    v6 = (_DWORD *)(v4 + 24);
    v7 = *(unsigned int *)(EntryAtLayerHeight + 112);
    *(_QWORD *)v4 = *(_QWORD *)EntryAtLayerHeight;
    *(_DWORD *)(v4 + 8) = v7;
    if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
      result = HvpGetCellFlat(v5, v7, v6);
    else
      result = HvpGetCellPaged(v5, v7, v6);
    *(_QWORD *)(v4 + 16) = result;
  }
  return result;
}
