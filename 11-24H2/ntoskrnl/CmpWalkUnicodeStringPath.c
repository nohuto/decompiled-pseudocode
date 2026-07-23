/*
 * XREFs of CmpWalkUnicodeStringPath @ 0x1407E38E4
 * Callers:
 *     CmpWalkPath @ 0x1407E389C (CmpWalkPath.c)
 *     CmpFindHiveSubKey @ 0x140C4DA44 (CmpFindHiveSubKey.c)
 * Callees:
 *     CmpGetNextName @ 0x1407E1568 (CmpGetNextName.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408764B0 (CmpFindSubKeyByNameWithStatus.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpWalkUnicodeStringPath(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, __int128 *a3)
{
  unsigned int v3; // edi
  __int128 v4; // xmm0
  __int64 CellFlat; // rax
  __int128 v8; // [rsp+20h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+28h] BYREF
  int v11; // [rsp+70h] [rbp+30h] BYREF
  int v12; // [rsp+74h] [rbp+34h]

  v11 = -1;
  v8 = 0LL;
  v3 = BugCheckParameter4;
  v4 = *a3;
  v12 = 0;
  v9 = v4;
  while ( 1 )
  {
    CmpGetNextName((__int16 *)&v9, (__int64)&v8, (bool *)&v10);
    if ( !(_WORD)v8 )
      break;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v3);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    if ( CellFlat )
    {
      v10 = 0;
      CmpFindSubKeyByNameWithStatus(BugCheckParameter3);
      v3 = v10;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v11);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v11);
      if ( v3 != -1 )
        continue;
    }
    return 0xFFFFFFFFLL;
  }
  return v3;
}
