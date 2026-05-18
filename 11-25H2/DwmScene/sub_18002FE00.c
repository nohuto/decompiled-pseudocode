/*
 * XREFs of sub_18002FE00 @ 0x18002FE00
 * Callers:
 *     sub_18002D500 @ 0x18002D500 (sub_18002D500.c)
 *     sub_18002FBDC @ 0x18002FBDC (sub_18002FBDC.c)
 *     sub_1800D74A5 @ 0x1800D74A5 (sub_1800D74A5.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

char __fastcall sub_18002FE00(__int64 a1)
{
  sub_180011A5C(a1 + 32);
  return sub_180011A5C(a1);
}
