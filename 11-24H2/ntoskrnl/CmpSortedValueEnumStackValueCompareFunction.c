/*
 * XREFs of CmpSortedValueEnumStackValueCompareFunction @ 0x140A1D050
 * Callers:
 *     CmpSortedValueEnumStackAdvanceInternal @ 0x140A1CF08 (CmpSortedValueEnumStackAdvanceInternal.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     CmpCompareTwoCompressedNames @ 0x1408712D0 (CmpCompareTwoCompressedNames.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 *     CmpCompareCompressedName @ 0x140940E20 (CmpCompareCompressedName.c)
 */

LONG __fastcall CmpSortedValueEnumStackValueCompareFunction(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int8 *v5; // r15
  __int16 v6; // dx
  unsigned __int8 *v7; // r14
  unsigned __int64 v8; // rbx
  _BYTE *v9; // rcx
  __int16 v10; // dx
  unsigned __int16 i; // bx
  WCHAR v13; // di
  unsigned int v14; // esi
  int v15; // edx
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF

  v16 = 0LL;
  v2 = *a1;
  v3 = *a2;
  v4 = *(unsigned __int16 *)(v2 + 2);
  v5 = (unsigned __int8 *)(v2 + 20);
  v6 = *(_WORD *)(v2 + 16);
  v7 = (unsigned __int8 *)(v3 + 20);
  v8 = *(unsigned __int16 *)(v3 + 2);
  v9 = (_BYTE *)(v3 + 16);
  *((_QWORD *)&v16 + 1) = v2 + 20;
  LOWORD(v16) = v4;
  WORD1(v16) = v4;
  v10 = v6 & 1;
  if ( v10 )
  {
    if ( (*v9 & 1) != 0 )
      return CmpCompareTwoCompressedNames((unsigned __int8 *)(v2 + 20), v4, v7, v8);
  }
  else if ( (*v9 & 1) != 0 )
  {
    return CmpCompareCompressedName((__int64)&v16, v7, v8, 0);
  }
  if ( !v10 )
    return RtlCompareUnicodeStrings((PCWCH)(v2 + 20), v4 >> 1, (PCWCH)v7, v8 >> 1, 1u);
  for ( i = (unsigned __int16)v8 >> 1; i && (_WORD)v4; --i )
  {
    v13 = *(_WORD *)v7;
    v7 += 2;
    v14 = *v5++;
    if ( v13 != (_WORD)v14 )
    {
      if ( v13 >= 0x61u )
      {
        if ( v13 > 0x7Au )
          v13 = RtlUpcaseUnicodeChar(v13);
        else
          v13 -= 32;
      }
      if ( v14 >= 0x61 )
      {
        if ( v14 > 0x7A )
          LOWORD(v14) = RtlUpcaseUnicodeChar(v14);
        else
          LOWORD(v14) = v14 - 32;
      }
      v15 = v13 - (unsigned __int16)v14;
      if ( v13 != (unsigned __int16)v14 )
        return -v15;
    }
    LOWORD(v4) = v4 - 1;
  }
  v15 = i - (unsigned __int16)v4;
  return -v15;
}
