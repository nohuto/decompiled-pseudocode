/*
 * XREFs of HalpGetCpuInfo @ 0x140487890
 * Callers:
 *     HalpInterruptIsMsiSupported @ 0x1404B1F6C (HalpInterruptIsMsiSupported.c)
 *     HalpDmaGetDefaultRemappingDomainPolicy @ 0x140539F14 (HalpDmaGetDefaultRemappingDomainPolicy.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x14053FE34 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpTscReserveResources @ 0x140546FB0 (HalpTscReserveResources.c)
 *     HalpTimerConfigureQpcBypass @ 0x140547F3C (HalpTimerConfigureQpcBypass.c)
 *     HalpProcGetFeatureBits @ 0x14054AA20 (HalpProcGetFeatureBits.c)
 *     HalpIommuAllocateDmaDomain @ 0x140550E04 (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuGetPageTableType @ 0x140551720 (HalpIommuGetPageTableType.c)
 *     HalpInterruptIsProcessorCacheFlushOptimizationSupported @ 0x140556E3C (HalpInterruptIsProcessorCacheFlushOptimizationSupported.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406FD034 (IommupDeviceEnablePasidTaggedDma.c)
 *     HalpSetSystemInformation @ 0x140A95A10 (HalpSetSystemInformation.c)
 *     HalpDpPostReplaceInitialization @ 0x140B51A3C (HalpDpPostReplaceInitialization.c)
 *     HalpLbrInitialize @ 0x140B52B78 (HalpLbrInitialize.c)
 *     HalpPiix4Detect @ 0x140B6C308 (HalpPiix4Detect.c)
 *     HalpErrataApplyPerProcessor @ 0x140B6FE5C (HalpErrataApplyPerProcessor.c)
 *     HalpProcIsSmtDisabled @ 0x140C11514 (HalpProcIsSmtDisabled.c)
 *     HalpMiscGetParameters @ 0x140C11650 (HalpMiscGetParameters.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpGetCpuInfo(char *a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  struct _KPRCB *CurrentPrcb; // r10

  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->CpuID )
    return 0;
  if ( a1 )
    *a1 = CurrentPrcb->CpuType;
  if ( a2 )
    *a2 = CurrentPrcb->CpuStepping;
  if ( a3 )
    *a3 = CurrentPrcb->CpuModel;
  if ( a4 )
    *a4 = CurrentPrcb->CpuVendor;
  return 1;
}
