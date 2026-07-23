/*
 * XREFs of VfUtilDbgPrint @ 0x14060E85C
 * Callers:
 *     VfDifCaptureIoCallbacks @ 0x140499158 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x1404991B8 (VfDifCaptureDriverEntry.c)
 *     VfClearVerifierSettings @ 0x14060E360 (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x1406109F4 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x140610B34 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140610BB8 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140610C4C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140610CF0 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x140B84EA0 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x140B854E4 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x140B85EF0 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140B85FA0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140B86270 (ViGenericVerifyNewIrp.c)
 *     ViAdapterCallback @ 0x140B89B50 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x140B8A9E0 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x140B8B21C (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140B8BBC0 (ViSpecialAllocateCommonBuffer.c)
 *     ViXdvDriverLoadImage @ 0x140B8C9B0 (ViXdvDriverLoadImage.c)
 *     VfIoDeleteDevice @ 0x140B9422C (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140B9435C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140B954C0 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140B95558 (VfErrorReport8.c)
 *     ViErrorDisplayDescription @ 0x140B9562C (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140B9567C (ViErrorFinishReport.c)
 *     ViDeadlockPreprocessOptions @ 0x140B9BBC4 (ViDeadlockPreprocessOptions.c)
 *     VerifierNtCreateFile @ 0x140BA30B0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140BA3260 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140BA33B0 (VerifierNtWriteFile.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140BA3F50 (ViCtxCheckAndReleaseIsrState.c)
 *     VfPnpDumpIrpStack @ 0x140BA7320 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x140BA7E10 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x140BA80D0 (VfWmiDumpIrpStack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140275BC4 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal((int)&File, 101, 0, (int)a1, va, 1);
}
