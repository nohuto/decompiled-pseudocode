/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1400600A8
 * Callers:
 *     SmmQueryRegistry @ 0x1403F7424 (SmmQueryRegistry.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140060100 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
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
