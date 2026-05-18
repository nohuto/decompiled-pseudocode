/*
 * XREFs of sub_18002938C @ 0x18002938C
 * Callers:
 *     sub_180028FCC @ 0x180028FCC (sub_180028FCC.c)
 *     sub_1800290E4 @ 0x1800290E4 (sub_1800290E4.c)
 *     sub_18006D0AC @ 0x18006D0AC (sub_18006D0AC.c)
 * Callees:
 *     sub_180028E14 @ 0x180028E14 (sub_180028E14.c)
 *     sub_1800294F0 @ 0x1800294F0 (sub_1800294F0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002938C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 152LL )
  {
    sub_1800294F0(a1, a3, i);
    a3 += 152LL;
  }
  sub_180028E14(a3, a3);
  return a3;
}
