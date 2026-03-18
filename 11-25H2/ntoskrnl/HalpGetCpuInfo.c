/*
 * XREFs of HalpGetCpuInfo @ 0x14048D3A0
 * Callers:
 *     HalpInterruptIsMsiSupported @ 0x1404B7ECC (HalpInterruptIsMsiSupported.c)
 *     HalpDmaGetDefaultRemappingDomainPolicy @ 0x140539E84 (HalpDmaGetDefaultRemappingDomainPolicy.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x14053FCB4 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpTscReserveResources @ 0x140546E00 (HalpTscReserveResources.c)
 *     HalpTimerConfigureQpcBypass @ 0x140547D8C (HalpTimerConfigureQpcBypass.c)
 *     HalpProcGetFeatureBits @ 0x14054A870 (HalpProcGetFeatureBits.c)
 *     HalpIommuAllocateDmaDomain @ 0x140550BC4 (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuGetPageTableType @ 0x1405514E0 (HalpIommuGetPageTableType.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406F3604 (IommupDeviceEnablePasidTaggedDma.c)
 *     HalpSetSystemInformation @ 0x140A94780 (HalpSetSystemInformation.c)
 *     HalpDpPostReplaceInitialization @ 0x140B3F9EC (HalpDpPostReplaceInitialization.c)
 *     HalpLbrInitialize @ 0x140B40B28 (HalpLbrInitialize.c)
 *     HalpErrataApplyPerProcessor @ 0x140B58CD8 (HalpErrataApplyPerProcessor.c)
 *     HalpPiix4Detect @ 0x140B5AF1C (HalpPiix4Detect.c)
 *     HalpProcIsSmtDisabled @ 0x140BFE514 (HalpProcIsSmtDisabled.c)
 *     HalpMiscGetParameters @ 0x140BFE650 (HalpMiscGetParameters.c)
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
