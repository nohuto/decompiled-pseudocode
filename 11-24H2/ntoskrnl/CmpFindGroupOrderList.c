/*
 * XREFs of CmpFindGroupOrderList @ 0x140C4B7C0
 * Callers:
 *     CmpFindDrivers @ 0x140C4B4CC (CmpFindDrivers.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByName @ 0x140A3D268 (CmpFindSubKeyByName.c)
 */

__int64 __fastcall CmpFindGroupOrderList(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  bool v3; // zf
  __int64 CellPaged; // rax
  unsigned int SubKeyByName; // edi
  __int64 v6; // rax
  unsigned int v7; // edi
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = -1;
  v3 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v10 = 0;
  if ( v3 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2, &v9);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, &v9);
  if ( !CellPaged )
    return 0xFFFFFFFFLL;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, CellPaged, (unsigned __int16 *)&CmpControlString);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v9);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v9);
  if ( SubKeyByName == -1 )
    return 0xFFFFFFFFLL;
  v6 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
     ? HvpGetCellFlat(BugCheckParameter3, SubKeyByName, &v9)
     : HvpGetCellPaged(BugCheckParameter3, SubKeyByName, &v9);
  if ( !v6 )
    return 0xFFFFFFFFLL;
  v7 = CmpFindSubKeyByName(BugCheckParameter3, v6, (unsigned __int16 *)&CmpGroupOrderListString);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v9);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v9);
  return v7;
}
