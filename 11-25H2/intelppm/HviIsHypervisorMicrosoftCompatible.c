/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x14000637C
 * Callers:
 *     HviGetHypervisorFeatures @ 0x14000633C (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x14000FD78 (HviGetEnlightenmentInformation.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140004BCC (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
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
