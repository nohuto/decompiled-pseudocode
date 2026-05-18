/*
 * XREFs of sub_1800CFA8C @ 0x1800CFA8C
 * Callers:
 *     sub_1800CF6A0 @ 0x1800CF6A0 (sub_1800CF6A0.c)
 *     sub_1800D14F4 @ 0x1800D14F4 (sub_1800D14F4.c)
 * Callees:
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_1800D1604 @ 0x1800D1604 (sub_1800D1604.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CFA8C(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  sub_180012444(a2, *a4);
  return sub_1800D1604(a2 + 32);
}
