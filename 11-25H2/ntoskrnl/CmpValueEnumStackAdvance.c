/*
 * XREFs of CmpValueEnumStackAdvance @ 0x14083F754
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1404632A4 (CmpGetValueCountForKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14083F9D0 (CmEnumerateValueFromLayeredKey.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409737C4 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x14083F8C8 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14083F9A0 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpValueEnumStackAdvance(__int64 a1)
{
  __int64 v2; // rdx
  __int64 EntryAtLayerHeight; // rsi
  unsigned int v4; // r9d
  ULONG_PTR v5; // rcx
  __int64 CellFlat; // rax
  ULONG_PTR v7; // rcx
  int v8; // eax
  ULONG_PTR v9; // rcx
  int v10; // edi
  unsigned int v11; // eax
  char v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0LL;
  v13 = 0;
  HvpGetCellContextInitialize(&v14);
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
      v5 = *(_QWORD *)EntryAtLayerHeight;
      if ( (*(_BYTE *)(*(_QWORD *)EntryAtLayerHeight + 140LL) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v5, *(unsigned int *)(*(_QWORD *)(EntryAtLayerHeight + 8) + 4LL * v4));
      else
        CellFlat = HvpGetCellPaged(v5);
      v7 = *(_QWORD *)EntryAtLayerHeight;
      if ( (*(_DWORD *)(*(_QWORD *)EntryAtLayerHeight + 160LL) & 0x80000) != 0 && (*(_BYTE *)(CellFlat + 16) & 2) != 0 )
      {
        if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v7, &v14);
        else
          HvpReleaseCellPaged(v7, &v14);
        v4 = ++*(_DWORD *)(a1 + 8);
      }
      else
      {
        v8 = CmpValueEnumStackMatchingValueInUpperLayer(a1, *(unsigned __int16 *)(a1 + 6), CellFlat, &v13);
        v9 = *(_QWORD *)EntryAtLayerHeight;
        v10 = v8;
        if ( (*(_BYTE *)(*(_QWORD *)EntryAtLayerHeight + 140LL) & 1) != 0 )
          HvpReleaseCellFlat(v9, &v14);
        else
          HvpReleaseCellPaged(v9, &v14);
        if ( v10 < 0 )
          return (unsigned int)v10;
        v11 = *(_DWORD *)(a1 + 8);
        if ( !v13 )
        {
          v10 = 0;
          *(_DWORD *)a1 = *(_DWORD *)(*(_QWORD *)(EntryAtLayerHeight + 8) + 4LL * v11);
          return (unsigned int)v10;
        }
        v4 = v11 + 1;
        *(_DWORD *)(a1 + 8) = v11 + 1;
      }
    }
    --*(_WORD *)(a1 + 6);
    *(_DWORD *)(a1 + 8) = 0;
  }
  return (unsigned int)-2147483622;
}
