/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x14000E214
 * Callers:
 *     HviGetEnlightenmentInformation @ 0x14000E138 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x14000E178 (HviGetHypervisorFeatures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14000E1B8 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
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
