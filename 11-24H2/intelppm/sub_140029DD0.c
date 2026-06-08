/*
 * XREFs of sub_140029DD0 @ 0x140029DD0
 * Callers:
 *     sub_14002B380 @ 0x14002B380 (sub_14002B380.c)
 *     sub_14002B750 @ 0x14002B750 (sub_14002B750.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010270 @ 0x140010270 (sub_140010270.c)
 */

bool sub_140029DD0()
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
    return (v3 & 0x40) != 0;
  }
  return v0;
}
