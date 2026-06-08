/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x14000D508
 * Callers:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14000D564 (HviIsHypervisorMicrosoftCompatible.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x140035504 (RegisterKernelPepIdleStatesV2.c)
 *     RegisterKernelPlatformStates @ 0x140035E64 (RegisterKernelPlatformStates.c)
 *     ProcLibGlobalInit @ 0x140043530 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
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
