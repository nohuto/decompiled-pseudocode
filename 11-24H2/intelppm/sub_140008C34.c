/*
 * XREFs of sub_140008C34 @ 0x140008C34
 * Callers:
 *     sub_140003010 @ 0x140003010 (sub_140003010.c)
 *     sub_140003370 @ 0x140003370 (sub_140003370.c)
 *     sub_1400053F0 @ 0x1400053F0 (sub_1400053F0.c)
 * Callees:
 *     sub_140001008 @ 0x140001008 (sub_140001008.c)
 *     sub_140001034 @ 0x140001034 (sub_140001034.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

void sub_140008C34()
{
  __int64 v0; // r8
  __int64 v1; // r9
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_140018C80 > 5 )
  {
    if ( sub_140001008((__int64)&dword_140018C80, 0x200000000000LL) )
      sub_140001034((__int64)&dword_140018C80, (unsigned __int8 *)dword_140014DDC, v0, v1, 2u, &v2);
  }
}
