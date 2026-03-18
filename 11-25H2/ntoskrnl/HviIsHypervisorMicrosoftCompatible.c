/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x140657A88
 * Callers:
 *     HvlpTryConfigureInterface @ 0x1405881AC (HvlpTryConfigureInterface.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1405B99C8 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x1406577A8 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1406577F0 (HviGetHypervisorFeatures.c)
 *     HviGetHypervisorVersion @ 0x140657880 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x1406578C8 (HviGetImplementationLimits.c)
 *     HviGetIptFeatures @ 0x140657968 (HviGetIptFeatures.c)
 *     HviGetSharedGpaBoundary @ 0x140657A04 (HviGetSharedGpaBoundary.c)
 *     HalpDmaInitializeCvmSupport @ 0x140BFFA64 (HalpDmaInitializeCvmSupport.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x140657838 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  HviGetHypervisorInterface(&v1);
  return (_DWORD)v1 == 824407624;
}
