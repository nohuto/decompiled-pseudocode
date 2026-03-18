/*
 * XREFs of CmpFindGroupOrderList @ 0x140C3A4C4
 * Callers:
 *     CmpFindDrivers @ 0x140C3A1D0 (CmpFindDrivers.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByName @ 0x140A366A8 (CmpFindSubKeyByName.c)
 */

__int64 __fastcall CmpFindGroupOrderList(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  __int64 CellFlat; // rax
  unsigned int SubKeyByName; // edi
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v8);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, &v8);
  if ( !CellFlat )
    return 0xFFFFFFFFLL;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, CellFlat, (unsigned __int16 *)&CmpControlString);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v8);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v8);
  if ( SubKeyByName == -1 )
    return 0xFFFFFFFFLL;
  v5 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
     ? HvpGetCellFlat(BugCheckParameter3, SubKeyByName, &v8)
     : HvpGetCellPaged(BugCheckParameter3, SubKeyByName, &v8);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  v6 = CmpFindSubKeyByName(BugCheckParameter3, v5, (unsigned __int16 *)&CmpGroupOrderListString);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v8);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v8);
  return v6;
}
