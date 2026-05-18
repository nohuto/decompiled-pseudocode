/*
 * XREFs of sub_1800275D0 @ 0x1800275D0
 * Callers:
 *     sub_1800264A4 @ 0x1800264A4 (sub_1800264A4.c)
 *     sub_180034A20 @ 0x180034A20 (sub_180034A20.c)
 *     sub_18004C988 @ 0x18004C988 (sub_18004C988.c)
 *     sub_180060630 @ 0x180060630 (sub_180060630.c)
 *     sub_1800688B4 @ 0x1800688B4 (sub_1800688B4.c)
 *     sub_180069EA8 @ 0x180069EA8 (sub_180069EA8.c)
 *     sub_18006C76C @ 0x18006C76C (sub_18006C76C.c)
 *     sub_180079204 @ 0x180079204 (sub_180079204.c)
 *     sub_18007A280 @ 0x18007A280 (sub_18007A280.c)
 *     sub_180092740 @ 0x180092740 (sub_180092740.c)
 *     sub_1800B9EF0 @ 0x1800B9EF0 (sub_1800B9EF0.c)
 *     sub_1800C0598 @ 0x1800C0598 (sub_1800C0598.c)
 *     sub_1800C1490 @ 0x1800C1490 (sub_1800C1490.c)
 *     sub_1800C1F10 @ 0x1800C1F10 (sub_1800C1F10.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_1800261E8 @ 0x1800261E8 (sub_1800261E8.c)
 *     sub_18002644C @ 0x18002644C (sub_18002644C.c)
 */

_QWORD *__fastcall sub_1800275D0(_QWORD *a1, signed int a2)
{
  _BYTE *v3; // rax
  _BYTE v5[3]; // [rsp+45h] [rbp-13h] BYREF

  if ( a2 >= 0 )
  {
    v3 = (_BYTE *)sub_18002644C((__int64)v5, a2);
  }
  else
  {
    v3 = (_BYTE *)(sub_18002644C((__int64)v5, -a2) - 1);
    *v3 = 45;
  }
  sub_1800261E8(a1, v3, v5);
  return a1;
}
