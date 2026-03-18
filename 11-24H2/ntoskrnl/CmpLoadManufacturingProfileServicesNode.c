/*
 * XREFs of CmpLoadManufacturingProfileServicesNode @ 0x140C4C6C4
 * Callers:
 *     CmpFindDrivers @ 0x140C4B4CC (CmpFindDrivers.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByName @ 0x140A3D268 (CmpFindSubKeyByName.c)
 *     CmpLoadManufacturingProfileNode @ 0x140C4C5D8 (CmpLoadManufacturingProfileNode.c)
 */

bool __fastcall CmpLoadManufacturingProfileServicesNode(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        const WCHAR *a3,
        __int64 *a4,
        _DWORD *a5)
{
  unsigned int SubKeyByName; // edi
  __int64 CellFlat; // rax
  unsigned int v10[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  v10[0] = -1;
  v11 = 0LL;
  v10[1] = 0;
  if ( !CmpLoadManufacturingProfileNode(BugCheckParameter3, a2, a3, &v11, v10) )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, v11, (unsigned __int16 *)&CmpServicesString);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v10);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v10);
  if ( SubKeyByName == -1 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, SubKeyByName, a5);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, SubKeyByName, a5);
  *a4 = CellFlat;
  return CellFlat != 0;
}
