/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x140663D48
 * Callers:
 *     HvlpTryConfigureInterface @ 0x14058B81C (HvlpTryConfigureInterface.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1405BD814 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x140663A68 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x140663AB0 (HviGetHypervisorFeatures.c)
 *     HviGetHypervisorVersion @ 0x140663B40 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x140663B88 (HviGetImplementationLimits.c)
 *     HviGetIptFeatures @ 0x140663C28 (HviGetIptFeatures.c)
 *     HviGetSharedGpaBoundary @ 0x140663CC4 (HviGetSharedGpaBoundary.c)
 *     HalpDmaInitializeCvmSupport @ 0x140C10AE4 (HalpDmaInitializeCvmSupport.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x140663AF8 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  HviGetHypervisorInterface(&v1);
  return (_DWORD)v1 == 824407624;
}
