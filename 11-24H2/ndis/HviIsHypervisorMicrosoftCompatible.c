/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1400E58C4
 * Callers:
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1400DD68C (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1400E5868 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  if ( HviIsAnyHypervisorPresent() )
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
