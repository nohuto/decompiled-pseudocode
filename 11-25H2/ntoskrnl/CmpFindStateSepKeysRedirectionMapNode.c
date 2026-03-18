/*
 * XREFs of CmpFindStateSepKeysRedirectionMapNode @ 0x140C3A768
 * Callers:
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140C3AC50 (CmpGetStateSepKeysRedirectionPathValue.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByName @ 0x140A366A8 (CmpFindSubKeyByName.c)
 *     CmpFindHiveSubKey @ 0x140C3A5AC (CmpFindHiveSubKey.c)
 */

bool __fastcall CmpFindStateSepKeysRedirectionMapNode(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 *a3,
        _DWORD *a4)
{
  unsigned int SubKeyByName; // edi
  __int64 CellFlat; // rax
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  v10 = 0xFFFFFFFFLL;
  v11 = 0LL;
  if ( !CmpFindHiveSubKey(BugCheckParameter3, a2, (__int128 *)L"pr", &v11, &v10) )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, v11, L"\b\n");
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v10);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v10);
  if ( SubKeyByName == -1 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, SubKeyByName, a4);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, SubKeyByName, a4);
  *a3 = CellFlat;
  return CellFlat != 0;
}
