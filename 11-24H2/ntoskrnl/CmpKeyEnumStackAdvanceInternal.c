/*
 * XREFs of CmpKeyEnumStackAdvanceInternal @ 0x14090A540
 * Callers:
 *     CmpKeyEnumStackAdvance @ 0x14090A2F8 (CmpKeyEnumStackAdvance.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     CmpKeyNodeStackEntryReset @ 0x14090A44C (CmpKeyNodeStackEntryReset.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14090A69C (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14090A728 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x14090A844 (CmpKeyEnumStackEntryAdvance.c)
 *     CmpCompareKeysByName @ 0x140A44274 (CmpCompareKeysByName.c)
 */

__int64 __fastcall CmpKeyEnumStackAdvanceInternal(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int16 i; // si
  __int64 v4; // rdx
  __int64 EntryAtLayerHeight; // rbp
  __int16 v6; // si
  __int64 v7; // r14
  unsigned __int16 v8; // bp
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rax
  ULONG_PTR v16; // rcx
  __int64 v17; // rsi
  ULONG_PTR v18; // rdx
  _DWORD *v19; // r8
  __int64 CellFlat; // rax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 4) )
  {
    for ( i = 0; i <= *(_WORD *)a1; ++i )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1 + 8, i);
      if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
      {
        v12 = CmpKeyEnumStackGetEntryAtLayerHeight(a1, v4);
        CmpKeyEnumStackEntryAdvance(v12);
        CmpKeyNodeStackEntryReset(EntryAtLayerHeight);
      }
    }
  }
  v6 = *(_WORD *)a1;
  *(_BYTE *)(a1 + 4) = 1;
  v7 = 0LL;
  v8 = -1;
  if ( v6 < 0 )
    return (unsigned int)-2147483622;
  do
  {
    v9 = CmpKeyEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)v6);
    v10 = *(_QWORD *)(v9 + 120);
    if ( v10 && (!v7 || (int)CmpCompareKeysByName(v10, v7) < 0) )
    {
      v7 = *(_QWORD *)(v9 + 120);
      v8 = v6;
    }
    --v6;
  }
  while ( v6 >= 0 );
  if ( v7 )
  {
    for ( ; (v8 & 0x8000u) == 0; --v8 )
    {
      v13 = CmpKeyEnumStackGetEntryAtLayerHeight(a1, v8);
      v14 = *(_QWORD *)(v13 + 120);
      if ( v14 && (v14 == v7 || !(unsigned int)CmpCompareKeysByName(v14, v7)) )
      {
        v15 = CmpKeyNodeStackGetEntryAtLayerHeight(a1 + 8, v8);
        v16 = *(_QWORD *)v13;
        v17 = v15;
        v18 = *(unsigned int *)(v13 + 112);
        *(_QWORD *)v15 = *(_QWORD *)v13;
        v19 = (_DWORD *)(v15 + 24);
        *(_DWORD *)(v15 + 8) = v18;
        if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v16, v18, v19);
        else
          CellFlat = HvpGetCellPaged(v16, v18, v19);
        *(_QWORD *)(v17 + 16) = CellFlat;
      }
    }
  }
  else
  {
    return (unsigned int)-2147483622;
  }
  return v1;
}
