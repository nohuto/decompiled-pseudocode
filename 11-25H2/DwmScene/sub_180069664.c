/*
 * XREFs of sub_180069664 @ 0x180069664
 * Callers:
 *     sub_180069494 @ 0x180069494 (sub_180069494.c)
 * Callees:
 *     sub_18006945C @ 0x18006945C (sub_18006945C.c)
 *     sub_180069740 @ 0x180069740 (sub_180069740.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180069664(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 80LL )
  {
    sub_180069740(a1, a3, i);
    a3 += 80LL;
  }
  sub_18006945C(a3, a3);
  return a3;
}
