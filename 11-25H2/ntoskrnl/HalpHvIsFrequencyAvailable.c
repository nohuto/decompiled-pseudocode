/*
 * XREFs of HalpHvIsFrequencyAvailable @ 0x140548294
 * Callers:
 *     HalSocRequestApi @ 0x1404AD34C (HalSocRequestApi.c)
 *     HalpHvGetApicFrequency @ 0x1405480F0 (HalpHvGetApicFrequency.c)
 *     HalpHvGetTscFrequency @ 0x140548120 (HalpHvGetTscFrequency.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14049BFDC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x1405483A0 (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

bool __fastcall HalpHvIsFrequencyAvailable()
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded() )
    return (unsigned __int8)HalpIsXboxNanovisorPresent() != 0;
  _RAX = 1073741827LL;
  __asm { cpuid }
  return (_RDX & 0x100) != 0;
}
