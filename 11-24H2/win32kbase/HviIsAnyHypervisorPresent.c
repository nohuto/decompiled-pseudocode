/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x14023D10C
 * Callers:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14023D168 (HviIsHypervisorMicrosoftCompatible.c)
 * Callees:
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
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
