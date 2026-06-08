/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x14000D564
 * Callers:
 *     HviGetEnlightenmentInformation @ 0x14000D488 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x14000D4C8 (HviGetHypervisorFeatures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14000D508 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
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
