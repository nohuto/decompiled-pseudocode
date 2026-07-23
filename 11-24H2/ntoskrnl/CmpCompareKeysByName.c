/*
 * XREFs of CmpCompareKeysByName @ 0x140A44274
 * Callers:
 *     CmpFindSubKeyByNumberFromMergedView @ 0x14087F9B0 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14090A540 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x14090A844 (CmpKeyEnumStackEntryAdvance.c)
 *     CmpKeyEnumStackEntryBegin @ 0x14090AA50 (CmpKeyEnumStackEntryBegin.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     CmpCompareTwoCompressedNames @ 0x1408712D0 (CmpCompareTwoCompressedNames.c)
 *     CmpCompareCompressedName @ 0x140940E20 (CmpCompareCompressedName.c)
 *     CmpCompareUnicodeString @ 0x140A00290 (CmpCompareUnicodeString.c)
 */

__int64 __fastcall CmpCompareKeysByName(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // r12
  __int16 v3; // r9
  unsigned __int8 *v4; // r15
  bool v5; // zf
  unsigned __int16 v6; // r14
  unsigned __int16 i; // si
  WCHAR v9; // bx
  unsigned int v10; // edi
  int v11; // edx
  unsigned __int16 v12; // r8
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF
  __int128 v14; // [rsp+30h] [rbp-10h] BYREF

  v2 = (unsigned __int8 *)(a2 + 76);
  v3 = *(_WORD *)(a2 + 2) & 0x20;
  v4 = (unsigned __int8 *)(a1 + 76);
  v5 = (*(_BYTE *)(a1 + 2) & 0x20) == 0;
  v13 = 0LL;
  v14 = 0LL;
  if ( v5 )
  {
    *((_QWORD *)&v13 + 1) = a1 + 76;
    if ( v3 )
    {
      v12 = *(_WORD *)(a2 + 72);
      LOWORD(v13) = *(_WORD *)(a1 + 72);
      WORD1(v13) = v13;
      return CmpCompareCompressedName((__int64)&v13, (unsigned __int8 *)(a2 + 76), v12, 0);
    }
    else
    {
      LOWORD(v14) = *(_WORD *)(a2 + 72);
      WORD1(v14) = v14;
      LOWORD(v13) = *(_WORD *)(a1 + 72);
      WORD1(v13) = v13;
      *((_QWORD *)&v14 + 1) = a2 + 76;
      return CmpCompareUnicodeString((__int64)&v13, (__int64)&v14, 0);
    }
  }
  else
  {
    v6 = *(_WORD *)(a1 + 72);
    if ( v3 )
    {
      return CmpCompareTwoCompressedNames((unsigned __int8 *)(a1 + 76), *(_WORD *)(a1 + 72), v2, *(_WORD *)(a2 + 72));
    }
    else
    {
      for ( i = *(_WORD *)(a2 + 72) >> 1; i && v6; --i )
      {
        v9 = *(_WORD *)v2;
        v2 += 2;
        v10 = *v4++;
        if ( v9 != (_WORD)v10 )
        {
          if ( v9 >= 0x61u )
          {
            if ( v9 > 0x7Au )
              v9 = RtlUpcaseUnicodeChar(v9);
            else
              v9 -= 32;
          }
          if ( v10 >= 0x61 )
          {
            if ( v10 > 0x7A )
              LOWORD(v10) = RtlUpcaseUnicodeChar(v10);
            else
              LOWORD(v10) = v10 - 32;
          }
          v11 = v9 - (unsigned __int16)v10;
          if ( v9 != (unsigned __int16)v10 )
            return (unsigned int)-v11;
        }
        --v6;
      }
      v11 = i - v6;
      return (unsigned int)-v11;
    }
  }
}
