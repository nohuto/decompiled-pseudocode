/*
 * XREFs of sub_1800CB134 @ 0x1800CB134
 * Callers:
 *     sub_1800CC9C0 @ 0x1800CC9C0 (sub_1800CC9C0.c)
 * Callees:
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 */

__int64 __fastcall sub_1800CB134(__int64 *a1)
{
  sub_18000B2D4((__int64)(a1 + 6), 48LL, 2LL, (void (__fastcall *)(__int64))sub_1800CB0F0);
  sub_18000E854(a1 + 4);
  sub_18000E854(a1 + 3);
  sub_18000E854(a1 + 2);
  return sub_18000E854(a1 + 1);
}
