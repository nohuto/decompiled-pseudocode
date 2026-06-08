/*
 * XREFs of sub_140006390 @ 0x140006390
 * Callers:
 *     sub_140006350 @ 0x140006350 (sub_140006350.c)
 *     sub_1400100B8 @ 0x1400100B8 (sub_1400100B8.c)
 * Callees:
 *     sub_140004BDC @ 0x140004BDC (sub_140004BDC.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

bool sub_140006390()
{
  if ( sub_140004BDC() )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
  }
  else
  {
    LODWORD(_RAX) = 0;
  }
  return (_DWORD)_RAX == 824407624;
}
