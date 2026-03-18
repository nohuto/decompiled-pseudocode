/*
 * XREFs of CmpLoadServicesNode @ 0x140C3B488
 * Callers:
 *     CmpFindDrivers @ 0x140C3A1D0 (CmpFindDrivers.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByName @ 0x140A366A8 (CmpFindSubKeyByName.c)
 */

bool __fastcall CmpLoadServicesNode(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 *a3, _DWORD *a4)
{
  __int64 CellFlat; // rax
  unsigned int SubKeyByName; // edi
  __int64 CellPaged; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v11);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, &v11);
  if ( !CellFlat )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, CellFlat, (unsigned __int16 *)&CmpServicesString);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v11);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v11);
  if ( SubKeyByName == -1 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(BugCheckParameter3, SubKeyByName, a4);
  else
    CellPaged = HvpGetCellPaged(BugCheckParameter3, SubKeyByName, a4);
  *a3 = CellPaged;
  return CellPaged != 0;
}
