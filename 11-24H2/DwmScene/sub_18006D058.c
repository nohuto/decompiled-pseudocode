/*
 * XREFs of sub_18006D058 @ 0x18006D058
 * Callers:
 *     sub_18008F638 @ 0x18008F638 (sub_18008F638.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_1800261E8 @ 0x1800261E8 (sub_1800261E8.c)
 *     sub_18002644C @ 0x18002644C (sub_18002644C.c)
 */

_QWORD *__fastcall sub_18006D058(_QWORD *a1, unsigned int a2)
{
  _BYTE *v3; // rax
  _BYTE v5[3]; // [rsp+45h] [rbp-13h] BYREF

  v3 = (_BYTE *)sub_18002644C((__int64)v5, a2);
  sub_1800261E8(a1, v3, v5);
  return a1;
}
