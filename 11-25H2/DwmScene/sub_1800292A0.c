/*
 * XREFs of sub_1800292A0 @ 0x1800292A0
 * Callers:
 *     sub_180028E6C @ 0x180028E6C (sub_180028E6C.c)
 *     sub_180028F84 @ 0x180028F84 (sub_180028F84.c)
 * Callees:
 *     sub_180028CB4 @ 0x180028CB4 (sub_180028CB4.c)
 *     sub_1800293A4 @ 0x1800293A4 (sub_1800293A4.c)
 */

__int64 __fastcall sub_1800292A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 152LL )
  {
    sub_1800293A4(a1, a3, i);
    a3 += 152LL;
  }
  sub_180028CB4(a3, a3);
  return a3;
}
