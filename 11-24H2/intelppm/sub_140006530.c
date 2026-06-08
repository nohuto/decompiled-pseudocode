/*
 * XREFs of sub_140006530 @ 0x140006530
 * Callers:
 *     sub_14004903C @ 0x14004903C (sub_14004903C.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010270 @ 0x140010270 (sub_140010270.c)
 */

bool sub_140006530()
{
  char v0; // bl
  __int128 v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v0 = 0;
  v3 = 0LL;
  sub_140010270(0LL, &v2);
  if ( (unsigned int)v2 >= 6 )
  {
    sub_140010270(6LL, &v3);
    return (BYTE8(v3) & 8) != 0;
  }
  return v0;
}
