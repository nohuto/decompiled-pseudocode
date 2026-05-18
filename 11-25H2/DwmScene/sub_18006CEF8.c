/*
 * XREFs of sub_18006CEF8 @ 0x18006CEF8
 * Callers:
 *     sub_18008F4D8 @ 0x18008F4D8 (sub_18008F4D8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180026088 @ 0x180026088 (sub_180026088.c)
 *     sub_1800262EC @ 0x1800262EC (sub_1800262EC.c)
 */

_QWORD *__fastcall sub_18006CEF8(_QWORD *a1, unsigned int a2)
{
  _BYTE *v3; // rax
  _BYTE v5[3]; // [rsp+45h] [rbp-13h] BYREF

  v3 = (_BYTE *)sub_1800262EC((__int64)v5, a2);
  sub_180026088(a1, v3, v5);
  return a1;
}
