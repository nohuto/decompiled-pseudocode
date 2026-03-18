/*
 * XREFs of HalpIsCmciImplemented @ 0x140B4C2F4
 * Callers:
 *     HalpCorrectErrSrc @ 0x140B4B800 (HalpCorrectErrSrc.c)
 *     HalpInitializeCmc @ 0x140B4BAE8 (HalpInitializeCmc.c)
 *     HalpMcaSetFeatureFlags @ 0x140B4C414 (HalpMcaSetFeatureFlags.c)
 *     HalpPostSleepMP @ 0x140B6886C (HalpPostSleepMP.c)
 *     HalpMcaResumeProcessorConfig @ 0x140B68E20 (HalpMcaResumeProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14047D5E4 (HalpGetCpuVendor.c)
 *     HalpInterruptIsCmciSupported @ 0x14054249C (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1405424E4 (HalpInterruptIsDeferredErrorSupported.c)
 */

char HalpIsCmciImplemented()
{
  unsigned __int8 CpuVendor; // al
  bool IsCmciSupported; // bl
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !HalpCmciImplementationChecked )
  {
    CpuVendor = HalpGetCpuVendor();
    if ( CpuVendor == 2 )
    {
      IsCmciSupported = HalpInterruptIsCmciSupported();
    }
    else if ( CpuVendor == 1 )
    {
      IsCmciSupported = HalpInterruptIsCmciSupported();
      if ( IsCmciSupported )
        HalpDeferredErrorInterruptPresent = HalpInterruptIsDeferredErrorSupported();
    }
    else
    {
      IsCmciSupported = 0;
    }
    HalpCmciImplementationPresent = IsCmciSupported;
    _InterlockedOr(v3, 0);
    HalpCmciImplementationChecked = 1;
  }
  return HalpCmciImplementationPresent;
}
