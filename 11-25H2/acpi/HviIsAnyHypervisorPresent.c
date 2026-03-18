/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1400467E4
 * Callers:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1400532AC (HviIsHypervisorMicrosoftCompatible.c)
 *     AcpiRootIsFeatureSupported @ 0x140067A80 (AcpiRootIsFeatureSupported.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

bool HviIsAnyHypervisorPresent()
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
