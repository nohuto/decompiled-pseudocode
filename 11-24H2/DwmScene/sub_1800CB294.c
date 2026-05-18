/*
 * XREFs of sub_1800CB294 @ 0x1800CB294
 * Callers:
 *     sub_1800CCB20 @ 0x1800CCB20 (sub_1800CCB20.c)
 * Callees:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 */

__int64 __fastcall sub_1800CB294(__int64 *a1)
{
  sub_18000B6A4((__int64)(a1 + 6), 48LL, 2LL, (void (__fastcall *)(__int64))sub_1800CB250);
  sub_18000E954(a1 + 4);
  sub_18000E954(a1 + 3);
  sub_18000E954(a1 + 2);
  return sub_18000E954(a1 + 1);
}
