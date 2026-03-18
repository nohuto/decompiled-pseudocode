/*
 * XREFs of CmpLoadManufacturingProfileNode @ 0x140C4C5D8
 * Callers:
 *     CmpLoadManufacturingProfileServicesNode @ 0x140C4C6C4 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByName @ 0x140A3D268 (CmpFindSubKeyByName.c)
 *     CmpLoadManufacturingModeNode @ 0x140C4C4A4 (CmpLoadManufacturingModeNode.c)
 */

bool __fastcall CmpLoadManufacturingProfileNode(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        const WCHAR *a3,
        __int64 *a4,
        _DWORD *a5)
{
  unsigned int SubKeyByName; // edi
  __int64 CellFlat; // rax
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+30h] BYREF
  int v14; // [rsp+74h] [rbp+34h]

  v13 = -1;
  v11 = 0LL;
  v14 = 0;
  DestinationString = 0LL;
  if ( !a3 || !CmpLoadManufacturingModeNode(BugCheckParameter3, a2, &v11, &v13) )
    return 0;
  if ( RtlInitUnicodeStringEx(&DestinationString, a3) < 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v13);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v13);
    return 0;
  }
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, v11, &DestinationString.Length);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v13);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v13);
  if ( SubKeyByName == -1 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, SubKeyByName, a5);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, SubKeyByName, a5);
  *a4 = CellFlat;
  return CellFlat != 0;
}
