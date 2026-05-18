/*
 * XREFs of sub_18002378C @ 0x18002378C
 * Callers:
 *     sub_180024B60 @ 0x180024B60 (sub_180024B60.c)
 *     sub_180025690 @ 0x180025690 (sub_180025690.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 *     sub_180034C38 @ 0x180034C38 (sub_180034C38.c)
 *     sub_1800350F8 @ 0x1800350F8 (sub_1800350F8.c)
 *     sub_1800355DC @ 0x1800355DC (sub_1800355DC.c)
 *     sub_18009521C @ 0x18009521C (sub_18009521C.c)
 * Callees:
 *     sub_1800231AC @ 0x1800231AC (sub_1800231AC.c)
 */

float __fastcall sub_18002378C(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  float v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  sub_1800231AC((__int64)&v3, (__int64)&v2);
  return v3;
}
