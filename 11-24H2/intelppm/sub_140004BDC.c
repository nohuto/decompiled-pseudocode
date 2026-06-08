/*
 * XREFs of sub_140004BDC @ 0x140004BDC
 * Callers:
 *     sub_140006390 @ 0x140006390 (sub_140006390.c)
 *     sub_140038BD4 @ 0x140038BD4 (sub_140038BD4.c)
 *     sub_14003E0E8 @ 0x14003E0E8 (sub_14003E0E8.c)
 *     sub_14004903C @ 0x14004903C (sub_14004903C.c)
 *     sub_14004A99C @ 0x14004A99C (sub_14004A99C.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

bool sub_140004BDC()
{
  char v1; // r8

  _RAX = 1LL;
  v1 = 0;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX != 1986945624;
  }
  return v1;
}
