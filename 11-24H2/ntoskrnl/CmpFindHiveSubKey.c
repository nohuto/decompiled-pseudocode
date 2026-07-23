/*
 * XREFs of CmpFindHiveSubKey @ 0x140C4DA44
 * Callers:
 *     CmpFindStateSepKeysRedirectionMapNode @ 0x140C4DC00 (CmpFindStateSepKeysRedirectionMapNode.c)
 *     CmpGetKnownHivePathNode @ 0x140C4DF08 (CmpGetKnownHivePathNode.c)
 * Callees:
 *     CmpGetNextName @ 0x1407E1568 (CmpGetNextName.c)
 *     CmpWalkUnicodeStringPath @ 0x1407E38E4 (CmpWalkUnicodeStringPath.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

bool __fastcall CmpFindHiveSubKey(ULONG_PTR BugCheckParameter3, unsigned int a2, __int128 *a3, __int64 *a4, _DWORD *a5)
{
  char v5; // bl
  unsigned int v10; // edi
  __int128 *v11; // r8
  ULONG_PTR v12; // rdx
  __int64 CellFlat; // rax
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF
  __int16 v16[20]; // [rsp+30h] [rbp-28h] BYREF
  bool v17; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  v10 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
  String2 = 0LL;
  if ( a3 && *(_WORD *)a3 )
  {
    *(_OWORD *)v16 = *a3;
    if ( !CmpGetNextName(v16, (__int64)&String2, &v17) )
      return v5;
    if ( RtlEqualUnicodeString(&CmpCCSString, &String2, 1u) )
    {
      v11 = (__int128 *)v16;
      v12 = a2;
    }
    else
    {
      v11 = a3;
      v12 = v10;
    }
    v10 = CmpWalkUnicodeStringPath(BugCheckParameter3, v12, v11);
  }
  if ( v10 != -1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v10, a5);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v10, a5);
    *a4 = CellFlat;
    return CellFlat != 0;
  }
  return v5;
}
