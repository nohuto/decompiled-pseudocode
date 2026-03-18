/*
 * XREFs of HalpGetCpuInfo @ 0x14048CB70
 * Callers:
 *     HalpInterruptIsMsiSupported @ 0x1404B778C (HalpInterruptIsMsiSupported.c)
 *     HalpDmaGetDefaultRemappingDomainPolicy @ 0x14053C688 (HalpDmaGetDefaultRemappingDomainPolicy.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1405424E4 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpTscReserveResources @ 0x1405496F0 (HalpTscReserveResources.c)
 *     HalpTimerConfigureQpcBypass @ 0x14054A67C (HalpTimerConfigureQpcBypass.c)
 *     HalpProcGetFeatureBits @ 0x14054D160 (HalpProcGetFeatureBits.c)
 *     HalpIommuAllocateDmaDomain @ 0x1405534C4 (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuGetPageTableType @ 0x140553DE0 (HalpIommuGetPageTableType.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406FF3F4 (IommupDeviceEnablePasidTaggedDma.c)
 *     HalpSetSystemInformation @ 0x140A9A4A0 (HalpSetSystemInformation.c)
 *     HalpDpPostReplaceInitialization @ 0x140B4F9EC (HalpDpPostReplaceInitialization.c)
 *     HalpLbrInitialize @ 0x140B50B28 (HalpLbrInitialize.c)
 *     HalpErrataApplyPerProcessor @ 0x140B68B08 (HalpErrataApplyPerProcessor.c)
 *     HalpPiix4Detect @ 0x140B6AA1C (HalpPiix4Detect.c)
 *     HalpProcIsSmtDisabled @ 0x140C0F514 (HalpProcIsSmtDisabled.c)
 *     HalpMiscGetParameters @ 0x140C0F650 (HalpMiscGetParameters.c)
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
