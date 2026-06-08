/*
 * XREFs of sub_14002B600 @ 0x14002B600
 * Callers:
 *     sub_14002B380 @ 0x14002B380 (sub_14002B380.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010270 @ 0x140010270 (sub_140010270.c)
 */

bool sub_14002B600()
{
  char v0; // bl
  unsigned __int64 v1; // rax
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0LL;
  v0 = 0;
  v4 = 0LL;
  sub_140010270(0, &v3);
  if ( (unsigned int)v3 >= 7 )
  {
    sub_140010270(7u, &v4);
    if ( (HIDWORD(v4) & 0x20000000) != 0 )
    {
      v1 = __readmsr(0x10Au);
      return (v1 & 0x800000) != 0;
    }
  }
  return v0;
}
