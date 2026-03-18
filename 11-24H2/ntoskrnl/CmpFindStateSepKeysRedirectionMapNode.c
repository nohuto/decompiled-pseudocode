/*
 * XREFs of CmpFindStateSepKeysRedirectionMapNode @ 0x140C4BA64
 * Callers:
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140C4BF4C (CmpGetStateSepKeysRedirectionPathValue.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByName @ 0x140A3D268 (CmpFindSubKeyByName.c)
 *     CmpFindHiveSubKey @ 0x140C4B8A8 (CmpFindHiveSubKey.c)
 */

bool __fastcall CmpFindStateSepKeysRedirectionMapNode(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 *a3,
        _DWORD *a4)
{
  unsigned int SubKeyByName; // edi
  __int64 CellFlat; // rax
  unsigned int v10[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  v10[0] = -1;
  v11 = 0LL;
  v10[1] = 0;
  if ( !CmpFindHiveSubKey(BugCheckParameter3, a2, (__int128 *)L"pr", &v11, v10) )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, v11, L"\b\n");
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v10);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v10);
  if ( SubKeyByName == -1 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, SubKeyByName, a4);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, SubKeyByName, a4);
  *a3 = CellFlat;
  return CellFlat != 0;
}
