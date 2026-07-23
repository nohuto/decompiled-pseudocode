/*
 * XREFs of CmpLoadManufacturingModeNode @ 0x140C4E640
 * Callers:
 *     CmpLoadManufacturingProfileNode @ 0x140C4E774 (CmpLoadManufacturingProfileNode.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByName @ 0x140A32B78 (CmpFindSubKeyByName.c)
 */

bool __fastcall CmpLoadManufacturingModeNode(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 *a3, _DWORD *a4)
{
  bool v5; // zf
  __int64 CellPaged; // rax
  unsigned int SubKeyByName; // edi
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 CellFlat; // rax
  unsigned int v14[4]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+50h] [rbp+20h] BYREF
  int v16; // [rsp+54h] [rbp+24h]

  v14[0] = -1;
  v15 = -1;
  v5 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v14[1] = 0;
  v16 = 0;
  if ( v5 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2, &v15);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, &v15);
  if ( !CellPaged )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, CellPaged, (unsigned __int16 *)&CmpControlString);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v15);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v15);
  if ( SubKeyByName == -1 )
    return 0;
  v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, SubKeyByName, v14)
      : HvpGetCellPaged(BugCheckParameter3, SubKeyByName, v14);
  if ( !v10 )
    return 0;
  v11 = CmpFindSubKeyByName(BugCheckParameter3, v10, L"\"$");
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v14);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v14);
  if ( v11 == -1 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v11, a4);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v11, a4);
  *a3 = CellFlat;
  return CellFlat != 0;
}
