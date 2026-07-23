/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x140662638
 * Callers:
 *     HvlpTryConfigureInterface @ 0x140588B0C (HvlpTryConfigureInterface.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1405BAE44 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x14066234C (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1406623A0 (HviGetHypervisorFeatures.c)
 *     HviGetHypervisorVersion @ 0x140662430 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x140662478 (HviGetImplementationLimits.c)
 *     HviGetIptFeatures @ 0x140662518 (HviGetIptFeatures.c)
 *     HviGetSharedGpaBoundary @ 0x1406625B4 (HviGetSharedGpaBoundary.c)
 *     HalpDmaInitializeCvmSupport @ 0x140C12AE4 (HalpDmaInitializeCvmSupport.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x1406623E8 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  HviGetHypervisorInterface(&v1);
  return (_DWORD)v1 == 824407624;
}
