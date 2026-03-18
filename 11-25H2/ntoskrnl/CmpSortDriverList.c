/*
 * XREFs of CmpSortDriverList @ 0x140C3B5E4
 * Callers:
 *     CmGetSystemDriverList @ 0x140C51914 (CmGetSystemDriverList.c)
 * Callees:
 *     CmpValueToData @ 0x1407D3CE4 (CmpValueToData.c)
 *     CmpFindValueByName @ 0x1408695FC (CmpFindValueByName.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByName @ 0x140A366A8 (CmpFindSubKeyByName.c)
 *     CmpDoSort @ 0x140C3A098 (CmpDoSort.c)
 */

char __fastcall CmpSortDriverList(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 **a3)
{
  bool v3; // zf
  __int64 CellPaged; // rax
  unsigned int SubKeyByName; // edi
  __int64 v8; // rax
  unsigned int v9; // edi
  unsigned int ValueByName; // edi
  ULONG_PTR v12; // rax
  PVOID v14; // rax
  PVOID v15; // rdi
  char v16; // di
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  __int128 v19; // [rsp+40h] [rbp-10h] BYREF
  int v20; // [rsp+80h] [rbp+30h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  v3 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v18 = 0xFFFFFFFFLL;
  v19 = 0LL;
  v17 = 0xFFFFFFFFLL;
  v20 = 0;
  v21 = 0xFFFFFFFFLL;
  if ( v3 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2, &v21);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, &v21);
  if ( !CellPaged )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, CellPaged, (unsigned __int16 *)&CmpControlString);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v21);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v21);
  if ( SubKeyByName == -1 )
    return 0;
  v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
     ? HvpGetCellFlat(BugCheckParameter3, SubKeyByName, &v21)
     : HvpGetCellPaged(BugCheckParameter3, SubKeyByName, &v21);
  if ( !v8 )
    return 0;
  v9 = CmpFindSubKeyByName(BugCheckParameter3, v8, L"\"$");
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v21);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v21);
  if ( v9 == -1 )
    return 0;
  if ( !((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
       ? HvpGetCellFlat(BugCheckParameter3, v9, &v21)
       : HvpGetCellPaged(BugCheckParameter3, v9, &v21)) )
    return 0;
  ValueByName = CmpFindValueByName(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v21);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v21);
  if ( ValueByName == -1 )
    return 0;
  v12 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, ValueByName, &v17)
      : HvpGetCellPaged(BugCheckParameter3, ValueByName, &v17);
  if ( !v12 )
    return 0;
  if ( *(_DWORD *)(v12 + 12) != 7 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v17);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v17);
    return 0;
  }
  v14 = CmpValueToData(BugCheckParameter3, ValueByName, v12, (__int64)&v20, (__int64)&v18);
  v3 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v15 = v14;
  *((_QWORD *)&v19 + 1) = v14;
  if ( v3 )
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v17);
  else
    HvpReleaseCellFlat(BugCheckParameter3, &v17);
  if ( !v15 )
    return 0;
  WORD1(v19) = v20 - 2;
  LOWORD(v19) = v20 - 2;
  v16 = CmpDoSort(a3, (unsigned __int16 *)&v19);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v18);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v18);
  return v16;
}
