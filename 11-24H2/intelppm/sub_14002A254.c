/*
 * XREFs of sub_14002A254 @ 0x14002A254
 * Callers:
 *     sub_14002B688 @ 0x14002B688 (sub_14002B688.c)
 *     sub_14004903C @ 0x14004903C (sub_14004903C.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010270 @ 0x140010270 (sub_140010270.c)
 */

bool sub_14002A254()
{
  __int128 v1; // [rsp+20h] [rbp-38h] BYREF
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v1 = 0LL;
  sub_140010270(1u, &v1);
  if ( (BYTE8(v1) & 8) == 0 )
    return 0;
  sub_140010270(0, &v2);
  return (unsigned int)v2 >= 5;
}
