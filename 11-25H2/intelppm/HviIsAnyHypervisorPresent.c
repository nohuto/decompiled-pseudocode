/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x140004BCC
 * Callers:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14000637C (HviIsHypervisorMicrosoftCompatible.c)
 *     RegisterKernelPlatformStates @ 0x140038AC4 (RegisterKernelPlatformStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x14003DFE8 (RegisterKernelPepIdleStatesV2.c)
 *     InitDriver @ 0x14004903C (InitDriver.c)
 *     ProcLibGlobalInit @ 0x14004A9C8 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
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
