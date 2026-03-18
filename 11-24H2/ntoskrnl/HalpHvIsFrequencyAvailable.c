/*
 * XREFs of HalpHvIsFrequencyAvailable @ 0x14054AB84
 * Callers:
 *     HalSocRequestApi @ 0x1404AE160 (HalSocRequestApi.c)
 *     HalpHvGetApicFrequency @ 0x14054A9E0 (HalpHvGetApicFrequency.c)
 *     HalpHvGetTscFrequency @ 0x14054AA10 (HalpHvGetTscFrequency.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A57AC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x14054AC90 (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

bool __fastcall HalpHvIsFrequencyAvailable()
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded() )
    return (unsigned __int8)HalpIsXboxNanovisorPresent() != 0;
  _RAX = 1073741827LL;
  __asm { cpuid }
  return (_RDX & 0x100) != 0;
}
