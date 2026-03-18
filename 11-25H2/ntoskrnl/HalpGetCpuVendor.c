/*
 * XREFs of HalpGetCpuVendor @ 0x14047C6E4
 * Callers:
 *     HaliWheaInitProcessorGenericSection @ 0x14047BEB8 (HaliWheaInitProcessorGenericSection.c)
 *     HalpMcaProcessorBankConfig @ 0x14047BFBC (HalpMcaProcessorBankConfig.c)
 *     HalpWheaReadMsrMisc @ 0x14047BFEC (HalpWheaReadMsrMisc.c)
 *     HalpWheaGetBankFromMciStatusIndex @ 0x14047C16C (HalpWheaGetBankFromMciStatusIndex.c)
 *     HalpWheaWriteMsrStatus @ 0x14047C1C0 (HalpWheaWriteMsrStatus.c)
 *     HalpWheaWriteMsrControl @ 0x14047C20C (HalpWheaWriteMsrControl.c)
 *     HalpCmciInitProcessor @ 0x14047C2E4 (HalpCmciInitProcessor.c)
 *     HalpCmcPollProcessor @ 0x14047C42C (HalpCmcPollProcessor.c)
 *     HalpMcaReadErrorPresence @ 0x14047C5D4 (HalpMcaReadErrorPresence.c)
 *     HalpWheaReadMsrStatus @ 0x14047C69C (HalpWheaReadMsrStatus.c)
 *     HalpCmciSetProcessorConfig @ 0x14047C704 (HalpCmciSetProcessorConfig.c)
 *     HalpCmciPollProcessor @ 0x14047C788 (HalpCmciPollProcessor.c)
 *     HalpIsLmceSupported @ 0x1404F8044 (HalpIsLmceSupported.c)
 *     HalpCreateMcaMemoryErrorRecord @ 0x14053C828 (HalpCreateMcaMemoryErrorRecord.c)
 *     HalpMcaClearError @ 0x14053D028 (HalpMcaClearError.c)
 *     HalpMcaPopulateErrorData @ 0x14053D35C (HalpMcaPopulateErrorData.c)
 *     HalpMcaReadError @ 0x14053D5DC (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x14053D8B4 (HalpMcaReportError.c)
 *     HalpCmciHandler @ 0x140540C78 (HalpCmciHandler.c)
 *     HalpGetMcaMaxVendorSpecificSectionLength @ 0x140540EF4 (HalpGetMcaMaxVendorSpecificSectionLength.c)
 *     HalpGetMcaVendorSpecificSections @ 0x140540F18 (HalpGetMcaVendorSpecificSections.c)
 *     HalpMcaReadErrorUncorrected @ 0x140541030 (HalpMcaReadErrorUncorrected.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x140548150 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpWheaReadMsrAddress @ 0x140551C80 (HalpWheaReadMsrAddress.c)
 *     HalpIsCmciImplemented @ 0x140B3C2F4 (HalpIsCmciImplemented.c)
 *     HalpMcaSetFeatureFlags @ 0x140B3C414 (HalpMcaSetFeatureFlags.c)
 * Callees:
 *     <none>
 */

unsigned __int8 HalpGetCpuVendor()
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 result; // al

  CurrentPrcb = KeGetCurrentPrcb();
  result = 0;
  if ( CurrentPrcb->CpuID )
    return CurrentPrcb->CpuVendor;
  return result;
}
