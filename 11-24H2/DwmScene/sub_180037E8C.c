/*
 * XREFs of sub_180037E8C @ 0x180037E8C
 * Callers:
 *     sub_180038810 @ 0x180038810 (sub_180038810.c)
 * Callees:
 *     sub_180030C00 @ 0x180030C00 (sub_180030C00.c)
 *     sub_1800380FC @ 0x1800380FC (sub_1800380FC.c)
 *     sub_1800385F0 @ 0x1800385F0 (sub_1800385F0.c)
 *     sub_180038914 @ 0x180038914 (sub_180038914.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180037E8C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // r15d
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 i; // rbp
  __int64 v14; // rbp

  v8 = a1;
  v9 = a1;
  if ( a3 > 32 )
  {
    v10 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      v9 = sub_1800385F0(v9, v9 + 512, a5);
      --v10;
    }
    while ( v10 );
  }
  result = sub_1800385F0(v9, a2, a5);
  if ( a3 > 32 )
  {
    sub_180038914(v8, a2, a4, a3, a5);
    v12 = a4 + 16 * a3;
    result = sub_1800380FC(a4, (int)a4 + 16 * (int)a3, v8, 64, a3, a5);
    for ( i = 128LL; a3 > i; i = 2 * v14 )
    {
      sub_1800380FC(v8, a2, a4, i, a3, a5);
      v14 = 2 * i;
      result = sub_1800380FC(a4, (int)a4 + 16 * (int)a3, v8, v14, a3, a5);
    }
    while ( a4 != v12 )
    {
      result = sub_180030C00(a4);
      a4 += 16LL;
    }
  }
  return result;
}
