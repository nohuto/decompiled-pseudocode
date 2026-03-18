/*
 * XREFs of HalpGetCpuVendor @ 0x14047D5E4
 * Callers:
 *     HaliWheaInitProcessorGenericSection @ 0x14047CDB8 (HaliWheaInitProcessorGenericSection.c)
 *     HalpMcaProcessorBankConfig @ 0x14047CEBC (HalpMcaProcessorBankConfig.c)
 *     HalpWheaReadMsrMisc @ 0x14047CEEC (HalpWheaReadMsrMisc.c)
 *     HalpWheaGetBankFromMciStatusIndex @ 0x14047D06C (HalpWheaGetBankFromMciStatusIndex.c)
 *     HalpWheaWriteMsrStatus @ 0x14047D0C0 (HalpWheaWriteMsrStatus.c)
 *     HalpWheaWriteMsrControl @ 0x14047D10C (HalpWheaWriteMsrControl.c)
 *     HalpCmciInitProcessor @ 0x14047D1E4 (HalpCmciInitProcessor.c)
 *     HalpCmcPollProcessor @ 0x14047D32C (HalpCmcPollProcessor.c)
 *     HalpMcaReadErrorPresence @ 0x14047D4D4 (HalpMcaReadErrorPresence.c)
 *     HalpWheaReadMsrStatus @ 0x14047D59C (HalpWheaReadMsrStatus.c)
 *     HalpCmciSetProcessorConfig @ 0x14047D604 (HalpCmciSetProcessorConfig.c)
 *     HalpCmciPollProcessor @ 0x14047D688 (HalpCmciPollProcessor.c)
 *     HalpIsLmceSupported @ 0x1404FA50C (HalpIsLmceSupported.c)
 *     HalpCreateMcaMemoryErrorRecord @ 0x14053F058 (HalpCreateMcaMemoryErrorRecord.c)
 *     HalpMcaClearError @ 0x14053F858 (HalpMcaClearError.c)
 *     HalpMcaPopulateErrorData @ 0x14053FB8C (HalpMcaPopulateErrorData.c)
 *     HalpMcaReadError @ 0x14053FE0C (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x1405400E4 (HalpMcaReportError.c)
 *     HalpCmciHandler @ 0x1405434A8 (HalpCmciHandler.c)
 *     HalpGetMcaMaxVendorSpecificSectionLength @ 0x140543724 (HalpGetMcaMaxVendorSpecificSectionLength.c)
 *     HalpGetMcaVendorSpecificSections @ 0x140543748 (HalpGetMcaVendorSpecificSections.c)
 *     HalpMcaReadErrorUncorrected @ 0x140543860 (HalpMcaReadErrorUncorrected.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x14054AA40 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpWheaReadMsrAddress @ 0x140554580 (HalpWheaReadMsrAddress.c)
 *     HalpIsCmciImplemented @ 0x140B4C2F4 (HalpIsCmciImplemented.c)
 *     HalpMcaSetFeatureFlags @ 0x140B4C414 (HalpMcaSetFeatureFlags.c)
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
