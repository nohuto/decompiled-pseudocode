/*
 * XREFs of sub_180029400 @ 0x180029400
 * Callers:
 *     sub_180028FCC @ 0x180028FCC (sub_180028FCC.c)
 *     sub_1800290E4 @ 0x1800290E4 (sub_1800290E4.c)
 * Callees:
 *     sub_180028E14 @ 0x180028E14 (sub_180028E14.c)
 *     sub_180029504 @ 0x180029504 (sub_180029504.c)
 */

__int64 __fastcall sub_180029400(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 152LL )
  {
    sub_180029504(a1, a3, i);
    a3 += 152LL;
  }
  sub_180028E14(a3, a3);
  return a3;
}
