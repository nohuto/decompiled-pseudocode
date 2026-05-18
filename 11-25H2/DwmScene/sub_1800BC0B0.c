/*
 * XREFs of sub_1800BC0B0 @ 0x1800BC0B0
 * Callers:
 *     sub_1800B9D90 @ 0x1800B9D90 (sub_1800B9D90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180026088 @ 0x180026088 (sub_180026088.c)
 */

_QWORD *__fastcall sub_1800BC0B0(_QWORD *a1, unsigned __int64 a2)
{
  _BYTE *v4; // r9
  _BYTE v6[3]; // [rsp+45h] [rbp-13h] BYREF

  v4 = v6;
  do
  {
    *--v4 = a2 % 0xA + 48;
    a2 /= 0xAuLL;
  }
  while ( a2 );
  sub_180026088(a1, v4, v6);
  return a1;
}
