/*
 * XREFs of HalpGetCpuVendor @ 0x140478774
 * Callers:
 *     HaliWheaInitProcessorGenericSection @ 0x140477F48 (HaliWheaInitProcessorGenericSection.c)
 *     HalpMcaProcessorBankConfig @ 0x14047804C (HalpMcaProcessorBankConfig.c)
 *     HalpWheaReadMsrMisc @ 0x14047807C (HalpWheaReadMsrMisc.c)
 *     HalpWheaGetBankFromMciStatusIndex @ 0x1404781FC (HalpWheaGetBankFromMciStatusIndex.c)
 *     HalpWheaWriteMsrStatus @ 0x140478250 (HalpWheaWriteMsrStatus.c)
 *     HalpWheaWriteMsrControl @ 0x14047829C (HalpWheaWriteMsrControl.c)
 *     HalpCmciInitProcessor @ 0x140478374 (HalpCmciInitProcessor.c)
 *     HalpCmcPollProcessor @ 0x1404784BC (HalpCmcPollProcessor.c)
 *     HalpMcaReadErrorPresence @ 0x140478664 (HalpMcaReadErrorPresence.c)
 *     HalpWheaReadMsrStatus @ 0x14047872C (HalpWheaReadMsrStatus.c)
 *     HalpCmciSetProcessorConfig @ 0x140478794 (HalpCmciSetProcessorConfig.c)
 *     HalpCmciPollProcessor @ 0x140478818 (HalpCmciPollProcessor.c)
 *     HalpIsLmceSupported @ 0x1404F7DEC (HalpIsLmceSupported.c)
 *     HalpCreateMcaMemoryErrorRecord @ 0x14053C958 (HalpCreateMcaMemoryErrorRecord.c)
 *     HalpMcaClearError @ 0x14053D158 (HalpMcaClearError.c)
 *     HalpMcaPopulateErrorData @ 0x14053D48C (HalpMcaPopulateErrorData.c)
 *     HalpMcaReadError @ 0x14053D70C (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x14053D9E4 (HalpMcaReportError.c)
 *     HalpCmciHandler @ 0x140540DF8 (HalpCmciHandler.c)
 *     HalpGetMcaMaxVendorSpecificSectionLength @ 0x140541074 (HalpGetMcaMaxVendorSpecificSectionLength.c)
 *     HalpGetMcaVendorSpecificSections @ 0x140541098 (HalpGetMcaVendorSpecificSections.c)
 *     HalpMcaReadErrorUncorrected @ 0x1405411B0 (HalpMcaReadErrorUncorrected.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x140548300 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpWheaReadMsrAddress @ 0x140551EC0 (HalpWheaReadMsrAddress.c)
 *     HalpIsCmciImplemented @ 0x140B4E334 (HalpIsCmciImplemented.c)
 *     HalpMcaSetFeatureFlags @ 0x140B4E454 (HalpMcaSetFeatureFlags.c)
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
