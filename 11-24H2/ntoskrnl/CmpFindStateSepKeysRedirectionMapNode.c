/*
 * XREFs of CmpFindStateSepKeysRedirectionMapNode @ 0x140C4DC00
 * Callers:
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140C4E0E8 (CmpGetStateSepKeysRedirectionPathValue.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByName @ 0x140A32B78 (CmpFindSubKeyByName.c)
 *     CmpFindHiveSubKey @ 0x140C4DA44 (CmpFindHiveSubKey.c)
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
