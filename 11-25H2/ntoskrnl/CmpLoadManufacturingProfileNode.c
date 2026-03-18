/*
 * XREFs of CmpLoadManufacturingProfileNode @ 0x140C3B2DC
 * Callers:
 *     CmpLoadManufacturingProfileServicesNode @ 0x140C3B3C8 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByName @ 0x140A366A8 (CmpFindSubKeyByName.c)
 *     CmpLoadManufacturingModeNode @ 0x140C3B1A8 (CmpLoadManufacturingModeNode.c)
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
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF

  v13 = 0xFFFFFFFFLL;
  v11 = 0LL;
  DestinationString = 0LL;
  if ( !a3 || !CmpLoadManufacturingModeNode(BugCheckParameter3, a2, &v11, &v13) )
    return 0;
  if ( RtlInitUnicodeStringEx(&DestinationString, a3) < 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v13);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v13);
    return 0;
  }
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, v11, &DestinationString.Length);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v13);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v13);
  if ( SubKeyByName == -1 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, SubKeyByName, a5);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, SubKeyByName, a5);
  *a4 = CellFlat;
  return CellFlat != 0;
}
