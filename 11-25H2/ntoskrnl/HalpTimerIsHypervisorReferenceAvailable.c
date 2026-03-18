/*
 * XREFs of HalpTimerIsHypervisorReferenceAvailable @ 0x14055EDAC
 * Callers:
 *     HalSocRequestApi @ 0x1404AD34C (HalSocRequestApi.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14049BFDC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

bool HalpTimerIsHypervisorReferenceAvailable()
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded() )
    return 0;
  _RAX = 1073741827LL;
  __asm { cpuid }
  return (_RAX & 2) != 0;
}
