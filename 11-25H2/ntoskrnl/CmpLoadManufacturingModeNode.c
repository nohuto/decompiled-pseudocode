/*
 * XREFs of CmpLoadManufacturingModeNode @ 0x140C3B1A8
 * Callers:
 *     CmpLoadManufacturingProfileNode @ 0x140C3B2DC (CmpLoadManufacturingProfileNode.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByName @ 0x140A366A8 (CmpFindSubKeyByName.c)
 */

bool __fastcall CmpLoadManufacturingModeNode(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 *a3, _DWORD *a4)
{
  __int64 CellFlat; // rax
  unsigned int SubKeyByName; // edi
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 CellPaged; // rax
  _QWORD v13[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+20h] BYREF

  v13[0] = 0xFFFFFFFFLL;
  v14 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v14);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, &v14);
  if ( !CellFlat )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, CellFlat, (unsigned __int16 *)&CmpControlString);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v14);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v14);
  if ( SubKeyByName == -1 )
    return 0;
  v9 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
     ? HvpGetCellFlat(BugCheckParameter3, SubKeyByName, v13)
     : HvpGetCellPaged(BugCheckParameter3, SubKeyByName, v13);
  if ( !v9 )
    return 0;
  v10 = CmpFindSubKeyByName(BugCheckParameter3, v9, L"\"$");
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v13);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v13);
  if ( v10 == -1 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(BugCheckParameter3, v10, a4);
  else
    CellPaged = HvpGetCellPaged(BugCheckParameter3, v10, a4);
  *a3 = CellPaged;
  return CellPaged != 0;
}
