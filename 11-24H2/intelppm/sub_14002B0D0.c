/*
 * XREFs of sub_14002B0D0 @ 0x14002B0D0
 * Callers:
 *     sub_14002AC30 @ 0x14002AC30 (sub_14002AC30.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010270 @ 0x140010270 (sub_140010270.c)
 */

bool sub_14002B0D0()
{
  char v0; // bl
  __int128 v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v0 = 0;
  v3 = 0LL;
  sub_140010270(0, &v2);
  if ( (unsigned int)v2 >= 6 )
  {
    sub_140010270(6u, &v3);
    return (v3 & 0x880) == 2176;
  }
  return v0;
}
