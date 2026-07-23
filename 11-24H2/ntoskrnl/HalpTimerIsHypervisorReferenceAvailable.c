/*
 * XREFs of HalpTimerIsHypervisorReferenceAvailable @ 0x14055F2DC
 * Callers:
 *     HalSocRequestApi @ 0x1404A8A70 (HalSocRequestApi.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A053C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

bool HalpTimerIsHypervisorReferenceAvailable()
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded() )
    return 0;
  _RAX = 1073741827LL;
  __asm { cpuid }
  return (_RAX & 2) != 0;
}
