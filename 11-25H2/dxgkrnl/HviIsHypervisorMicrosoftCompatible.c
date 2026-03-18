/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x14005F7F0
 * Callers:
 *     SmmQueryRegistry @ 0x1403FD498 (SmmQueryRegistry.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14005F848 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  if ( (unsigned __int8)HviIsAnyHypervisorPresent() )
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
