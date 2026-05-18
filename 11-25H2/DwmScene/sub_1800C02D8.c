/*
 * XREFs of sub_1800C02D8 @ 0x1800C02D8
 * Callers:
 *     sub_180017F50 @ 0x180017F50 (sub_180017F50.c)
 *     sub_1800C0284 @ 0x1800C0284 (sub_1800C0284.c)
 *     sub_1800C8C18 @ 0x1800C8C18 (sub_1800C8C18.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_1800BEC70 @ 0x1800BEC70 (sub_1800BEC70.c)
 *     sub_1800C234C @ 0x1800C234C (sub_1800C234C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C02D8(__int64 *a1, __int64 *a2, __int64 *a3, unsigned int a4)
{
  sub_1800BEC70(a1 + 21, a2);
  sub_1800BEC70(a1 + 20, a3);
  sub_18000E854(a1 + 22);
  sub_1800C234C(a1, a4);
  sub_18000E854(a2);
  return sub_18000E854(a3);
}
