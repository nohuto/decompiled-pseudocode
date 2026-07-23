/*
 * XREFs of HalpInterruptGetX2ApicPolicy @ 0x14053FD44
 * Callers:
 *     HalSocRequestConfigurationData @ 0x14055F0DC (HalSocRequestConfigurationData.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A053C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

bool HalpInterruptGetX2ApicPolicy()
{
  char v0; // r11
  char v1; // r10

  v0 = 0;
  v1 = 0;
  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RCX & 0x200000) != 0 )
  {
    if ( HalpIommuX2ApicSupport )
      goto LABEL_5;
    if ( HalpIsMicrosoftCompatibleHvLoaded() )
    {
      _RAX = 1073741828LL;
      __asm { cpuid }
      if ( (_RAX & 0x80000) != 0 )
LABEL_5:
        v1 = 1;
    }
  }
  return HalpInterruptX2ApicPolicy != v0 && HalpHvCpuManager == v0 && v1 != 0;
}
