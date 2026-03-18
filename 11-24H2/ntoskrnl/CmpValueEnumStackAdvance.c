/*
 * XREFs of CmpValueEnumStackAdvance @ 0x14090B6F8
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140462930 (CmpGetValueCountForKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14090B974 (CmEnumerateValueFromLayeredKey.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140914AE0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x14090B86C (CmpValueEnumStackMatchingValueInUpperLayer.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14090B944 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpValueEnumStackAdvance(__int64 a1)
{
  __int64 v2; // rdx
  __int64 EntryAtLayerHeight; // rsi
  unsigned int v4; // r9d
  ULONG_PTR v5; // rdx
  ULONG_PTR v6; // rcx
  __int64 CellFlat; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edi
  unsigned int v12; // eax
  char v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = 0LL;
  v14 = 0;
  HvpGetCellContextInitialize(&v15);
  if ( *(_BYTE *)(a1 + 4) )
  {
    if ( *(_DWORD *)a1 == -1 )
      return (unsigned int)-2147483622;
    ++*(_DWORD *)(a1 + 8);
  }
  else
  {
    *(_WORD *)(a1 + 6) = *(_WORD *)(a1 + 12);
    *(_BYTE *)(a1 + 4) = 1;
    *(_DWORD *)(a1 + 8) = 0;
  }
  *(_DWORD *)a1 = -1;
  while ( 1 )
  {
    v2 = *(unsigned __int16 *)(a1 + 6);
    if ( (v2 & 0x8000u) != 0LL )
      break;
    EntryAtLayerHeight = CmpValueEnumStackGetEntryAtLayerHeight(a1, v2);
    while ( v4 < *(_DWORD *)(EntryAtLayerHeight + 24) )
    {
      v5 = *(unsigned int *)(*(_QWORD *)(EntryAtLayerHeight + 8) + 4LL * v4);
      v6 = *(_QWORD *)EntryAtLayerHeight;
      if ( (*(_BYTE *)(*(_QWORD *)EntryAtLayerHeight + 140LL) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v6, v5, &v15);
      else
        CellFlat = HvpGetCellPaged(v6, v5, &v15);
      v8 = *(_QWORD *)EntryAtLayerHeight;
      if ( (*(_DWORD *)(*(_QWORD *)EntryAtLayerHeight + 160LL) & 0x80000) != 0 && (*(_BYTE *)(CellFlat + 16) & 2) != 0 )
      {
        if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v8, (__int64)&v15);
        else
          HvpReleaseCellPaged(v8, (unsigned int *)&v15);
        v4 = ++*(_DWORD *)(a1 + 8);
      }
      else
      {
        v9 = CmpValueEnumStackMatchingValueInUpperLayer(a1, *(unsigned __int16 *)(a1 + 6), CellFlat, &v14);
        v10 = *(_QWORD *)EntryAtLayerHeight;
        v11 = v9;
        if ( (*(_BYTE *)(*(_QWORD *)EntryAtLayerHeight + 140LL) & 1) != 0 )
          HvpReleaseCellFlat(v10, (__int64)&v15);
        else
          HvpReleaseCellPaged(v10, (unsigned int *)&v15);
        if ( v11 < 0 )
          return (unsigned int)v11;
        v12 = *(_DWORD *)(a1 + 8);
        if ( !v14 )
        {
          v11 = 0;
          *(_DWORD *)a1 = *(_DWORD *)(*(_QWORD *)(EntryAtLayerHeight + 8) + 4LL * v12);
          return (unsigned int)v11;
        }
        v4 = v12 + 1;
        *(_DWORD *)(a1 + 8) = v12 + 1;
      }
    }
    --*(_WORD *)(a1 + 6);
    *(_DWORD *)(a1 + 8) = 0;
  }
  return (unsigned int)-2147483622;
}
