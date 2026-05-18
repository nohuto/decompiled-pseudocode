/*
 * XREFs of sub_1800549A8 @ 0x1800549A8
 * Callers:
 *     sub_1800542C0 @ 0x1800542C0 (sub_1800542C0.c)
 * Callees:
 *     sub_18001D8FC @ 0x18001D8FC (sub_18001D8FC.c)
 *     sub_180023DA4 @ 0x180023DA4 (sub_180023DA4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800549A8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 i; // rdi

  v4 = a2;
  for ( i = a1; v4; --v4 )
  {
    sub_180023DA4(a1, a3, i);
    a3 += 32LL;
    i += 32LL;
  }
  sub_18001D8FC(a3, a3);
  return a3;
}
