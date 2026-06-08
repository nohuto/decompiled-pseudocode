/*
 * XREFs of sub_1400066B4 @ 0x1400066B4
 * Callers:
 *     sub_14002B250 @ 0x14002B250 (sub_14002B250.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010270 @ 0x140010270 (sub_140010270.c)
 */

bool sub_1400066B4()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  sub_140010270(1LL, &v1);
  return (BYTE8(v1) & 0x80) != 0;
}
