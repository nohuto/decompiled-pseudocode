/*
 * XREFs of sub_180027470 @ 0x180027470
 * Callers:
 *     sub_180026344 @ 0x180026344 (sub_180026344.c)
 *     sub_1800348C0 @ 0x1800348C0 (sub_1800348C0.c)
 *     sub_18004C828 @ 0x18004C828 (sub_18004C828.c)
 *     sub_1800604D0 @ 0x1800604D0 (sub_1800604D0.c)
 *     sub_180068754 @ 0x180068754 (sub_180068754.c)
 *     sub_180069D48 @ 0x180069D48 (sub_180069D48.c)
 *     sub_18006C60C @ 0x18006C60C (sub_18006C60C.c)
 *     sub_1800790A4 @ 0x1800790A4 (sub_1800790A4.c)
 *     sub_18007A120 @ 0x18007A120 (sub_18007A120.c)
 *     sub_1800925E0 @ 0x1800925E0 (sub_1800925E0.c)
 *     sub_1800B9D90 @ 0x1800B9D90 (sub_1800B9D90.c)
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 *     sub_1800C1330 @ 0x1800C1330 (sub_1800C1330.c)
 *     sub_1800C1DB0 @ 0x1800C1DB0 (sub_1800C1DB0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180026088 @ 0x180026088 (sub_180026088.c)
 *     sub_1800262EC @ 0x1800262EC (sub_1800262EC.c)
 */

_QWORD *__fastcall sub_180027470(_QWORD *a1, signed int a2)
{
  _BYTE *v3; // rax
  _BYTE v5[3]; // [rsp+45h] [rbp-13h] BYREF

  if ( a2 >= 0 )
  {
    v3 = (_BYTE *)sub_1800262EC((__int64)v5, a2);
  }
  else
  {
    v3 = (_BYTE *)(sub_1800262EC((__int64)v5, -a2) - 1);
    *v3 = 45;
  }
  sub_180026088(a1, v3, v5);
  return a1;
}
