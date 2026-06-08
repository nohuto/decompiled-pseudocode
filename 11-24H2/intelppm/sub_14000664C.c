/*
 * XREFs of sub_14000664C @ 0x14000664C
 * Callers:
 *     sub_14002ABC0 @ 0x14002ABC0 (sub_14002ABC0.c)
 *     sub_14004903C @ 0x14004903C (sub_14004903C.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010270 @ 0x140010270 (sub_140010270.c)
 */

char sub_14000664C()
{
  __int128 v1; // [rsp+20h] [rbp-38h] BYREF
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  sub_140010270(0LL, &v1);
  if ( (unsigned int)v1 < 6 )
    return 0;
  sub_140010270(6LL, &v2);
  return BYTE8(v2) & 1;
}
