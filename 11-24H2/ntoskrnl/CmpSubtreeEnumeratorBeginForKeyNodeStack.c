/*
 * XREFs of CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x1407E1B0C
 * Callers:
 *     CmpPromoteSubtree @ 0x140908398 (CmpPromoteSubtree.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x1409090E8 (CmpDoAccessCheckOnLayeredSubtree.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14090A728 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorBeginForKeyNodeStack(__int64 a1, __int16 *a2)
{
  __int16 v2; // bx
  __int64 i; // rbp
  __int64 EntryAtLayerHeight; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // rcx
  __int64 CellFlat; // rax
  __int64 result; // rax

  v2 = *a2;
  for ( i = a1 + 16; v2 >= 0; --v2 )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(i, (unsigned __int16)v2);
    v8 = CmpKeyNodeStackGetEntryAtLayerHeight(a2, v7);
    v9 = *(unsigned int *)(v8 + 8);
    if ( (_DWORD)v9 != -1 )
    {
      v10 = *(_QWORD *)v8;
      *(_QWORD *)EntryAtLayerHeight = *(_QWORD *)v8;
      *(_DWORD *)(EntryAtLayerHeight + 8) = v9;
      if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v10, v9);
      else
        CellFlat = HvpGetCellPaged(v10);
      *(_QWORD *)(EntryAtLayerHeight + 16) = CellFlat;
    }
  }
  result = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(result + 16) = i;
  *(_QWORD *)(result + 8) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
