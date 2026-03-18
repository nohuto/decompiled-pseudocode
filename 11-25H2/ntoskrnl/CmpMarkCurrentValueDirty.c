/*
 * XREFs of CmpMarkCurrentValueDirty @ 0x1407BC524
 * Callers:
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 * Callees:
 *     CmpFindValueByName @ 0x1408695FC (CmpFindValueByName.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x140875D60 (CmpFindSubKeyByNameWithStatus.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpMarkCurrentValueDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  bool v3; // zf
  __int64 result; // rax
  unsigned int ValueByName; // edi
  int v6; // [rsp+40h] [rbp+20h] BYREF
  int v7; // [rsp+44h] [rbp+24h]

  v6 = -1;
  v3 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v7 = 0;
  if ( v3 )
    result = HvpGetCellPaged(BugCheckParameter3);
  else
    result = HvpGetCellFlat(BugCheckParameter3, a2);
  if ( result )
  {
    CmpFindSubKeyByNameWithStatus(BugCheckParameter3);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v6);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v6);
    result = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
           ? HvpGetCellFlat(BugCheckParameter3, 0LL)
           : HvpGetCellPaged(BugCheckParameter3);
    if ( result )
    {
      ValueByName = CmpFindValueByName(BugCheckParameter3, result, &CmpCurrentString);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        result = HvpReleaseCellFlat(BugCheckParameter3, &v6);
      else
        result = HvpReleaseCellPaged(BugCheckParameter3, &v6);
      if ( ValueByName != -1 )
        return HvpMarkCellDirty(BugCheckParameter3, ValueByName);
    }
  }
  return result;
}
