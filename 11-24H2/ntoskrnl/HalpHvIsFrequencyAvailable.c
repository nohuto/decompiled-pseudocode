/*
 * XREFs of HalpHvIsFrequencyAvailable @ 0x140548444
 * Callers:
 *     HalSocRequestApi @ 0x1404A8A70 (HalSocRequestApi.c)
 *     HalpHvGetApicFrequency @ 0x1405482A0 (HalpHvGetApicFrequency.c)
 *     HalpHvGetTscFrequency @ 0x1405482D0 (HalpHvGetTscFrequency.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A053C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x140548550 (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

bool __fastcall HalpHvIsFrequencyAvailable()
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded() )
    return (unsigned __int8)HalpIsXboxNanovisorPresent() != 0;
  _RAX = 1073741827LL;
  __asm { cpuid }
  return (_RDX & 0x100) != 0;
}
