/*
 * XREFs of sub_1400064C4 @ 0x1400064C4
 * Callers:
 *     sub_140003010 @ 0x140003010 (sub_140003010.c)
 *     sub_140003370 @ 0x140003370 (sub_140003370.c)
 *     sub_1400053F0 @ 0x1400053F0 (sub_1400053F0.c)
 *     sub_14004903C @ 0x14004903C (sub_14004903C.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010270 @ 0x140010270 (sub_140010270.c)
 */

bool sub_1400064C4()
{
  __int128 v1; // [rsp+20h] [rbp-38h] BYREF
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  sub_140010270(0LL, &v1);
  if ( (unsigned int)v1 < 6 )
    return 0;
  sub_140010270(6LL, &v2);
  return (v2 & 2) != 0;
}
