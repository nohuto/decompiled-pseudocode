/*
 * XREFs of CmpLoadServicesNode @ 0x140C4C784
 * Callers:
 *     CmpFindDrivers @ 0x140C4B4CC (CmpFindDrivers.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByName @ 0x140A3D268 (CmpFindSubKeyByName.c)
 */

bool __fastcall CmpLoadServicesNode(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 *a3, _DWORD *a4)
{
  bool v4; // zf
  __int64 CellPaged; // rax
  unsigned int SubKeyByName; // edi
  __int64 CellFlat; // rax
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+44h] [rbp+Ch]

  v12 = -1;
  v4 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v13 = 0;
  if ( v4 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2, &v12);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, &v12);
  if ( !CellPaged )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, CellPaged, (unsigned __int16 *)&CmpServicesString);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v12);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v12);
  if ( SubKeyByName == -1 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, SubKeyByName, a4);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, SubKeyByName, a4);
  *a3 = CellFlat;
  return CellFlat != 0;
}
