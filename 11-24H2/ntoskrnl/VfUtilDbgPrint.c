/*
 * XREFs of VfUtilDbgPrint @ 0x14061029C
 * Callers:
 *     VfDifCaptureIoCallbacks @ 0x14049E358 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x14049E3B8 (VfDifCaptureDriverEntry.c)
 *     VfClearVerifierSettings @ 0x14060FDA0 (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x140612434 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x140612574 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1406125F8 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14061268C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140612730 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x140B82EA0 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x140B834E4 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x140B83EF0 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140B83FA0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140B84270 (ViGenericVerifyNewIrp.c)
 *     ViAdapterCallback @ 0x140B87B50 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x140B889E0 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x140B8921C (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140B89BC0 (ViSpecialAllocateCommonBuffer.c)
 *     ViXdvDriverLoadImage @ 0x140B8A9B0 (ViXdvDriverLoadImage.c)
 *     VfIoDeleteDevice @ 0x140B9222C (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140B9235C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140B934C0 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140B93558 (VfErrorReport8.c)
 *     ViErrorDisplayDescription @ 0x140B9362C (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140B9367C (ViErrorFinishReport.c)
 *     ViDeadlockPreprocessOptions @ 0x140B99BC4 (ViDeadlockPreprocessOptions.c)
 *     VerifierNtCreateFile @ 0x140BA10B0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140BA1260 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140BA13B0 (VerifierNtWriteFile.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140BA1F50 (ViCtxCheckAndReleaseIsrState.c)
 *     VfPnpDumpIrpStack @ 0x140BA5320 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x140BA5E10 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x140BA60D0 (VfWmiDumpIrpStack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1402CB374 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal((int)&File, 101, 0, (int)a1, va, 1);
}
