/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1400532AC
 * Callers:
 *     HviGetHypervisorFeatures @ 0x14005326C (HviGetHypervisorFeatures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1400467E4 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
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
