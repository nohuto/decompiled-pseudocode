/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1400E5868
 * Callers:
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1400DD68C (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1400E5828 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1400E58C4 (HviIsHypervisorMicrosoftCompatible.c)
 * Callees:
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
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
