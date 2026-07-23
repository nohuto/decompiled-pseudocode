/*
 * XREFs of CmpCompareCompressedName @ 0x140940E20
 * Callers:
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140A1D050 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     CmpCompareKeysByName @ 0x140A44274 (CmpCompareKeysByName.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x140A9F9CC (CmpFindKcbInHashEntryByCompressedName.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpCompareCompressedName(__int64 a1, unsigned __int8 *a2, unsigned __int16 a3, char a4)
{
  WCHAR *v4; // r14
  unsigned __int16 i; // bx
  WCHAR v9; // di
  unsigned int v10; // esi

  v4 = *(WCHAR **)(a1 + 8);
  for ( i = *(_WORD *)a1 >> 1; ; --i )
  {
    if ( !i || !a3 )
      return i - (unsigned int)a3;
    v9 = *v4++;
    v10 = *a2++;
    if ( v9 != (_WORD)v10 )
    {
      if ( (a4 & 1) == 0 && v9 >= 0x61u )
      {
        if ( v9 > 0x7Au )
          v9 = RtlUpcaseUnicodeChar(v9);
        else
          v9 -= 32;
      }
      if ( (a4 & 2) == 0 && v10 >= 0x61 )
      {
        if ( v10 > 0x7A )
          LOWORD(v10) = RtlUpcaseUnicodeChar(v10);
        else
          LOWORD(v10) = v10 - 32;
      }
      if ( v9 != (unsigned __int16)v10 )
        break;
    }
    --a3;
  }
  return v9 - (unsigned int)(unsigned __int16)v10;
}
