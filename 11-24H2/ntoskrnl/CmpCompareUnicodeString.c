/*
 * XREFs of CmpCompareUnicodeString @ 0x140A00290
 * Callers:
 *     CmpCheckValueList @ 0x14088B030 (CmpCheckValueList.c)
 *     CmpGetMappingHiveForString @ 0x1408E232C (CmpGetMappingHiveForString.c)
 *     CmpCompareKeysByName @ 0x140A44274 (CmpCompareKeysByName.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpCompareUnicodeString(__int64 a1, __int64 a2, char a3)
{
  WCHAR *v4; // r14
  WCHAR *v5; // r15
  unsigned __int16 v6; // si
  unsigned __int16 i; // bp
  WCHAR v8; // bx
  WCHAR v9; // di

  v4 = *(WCHAR **)(a1 + 8);
  v5 = *(WCHAR **)(a2 + 8);
  v6 = *(_WORD *)a1 >> 1;
  for ( i = *(_WORD *)a2 >> 1; ; --i )
  {
    if ( !v6 || !i )
      return v6 - (unsigned int)i;
    v8 = *v4++;
    v9 = *v5++;
    if ( v8 != v9 )
    {
      if ( (a3 & 1) == 0 && v8 >= 0x61u )
      {
        if ( v8 > 0x7Au )
          v8 = RtlUpcaseUnicodeChar(v8);
        else
          v8 -= 32;
      }
      if ( (a3 & 2) == 0 && v9 >= 0x61u )
      {
        if ( v9 <= 0x7Au )
          v9 -= 32;
        else
          v9 = RtlUpcaseUnicodeChar(v9);
      }
      if ( v8 != v9 )
        break;
    }
    --v6;
  }
  return v8 - (unsigned int)v9;
}
