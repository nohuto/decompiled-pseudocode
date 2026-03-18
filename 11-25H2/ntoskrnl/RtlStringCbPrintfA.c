/*
 * XREFs of RtlStringCbPrintfA @ 0x140537888
 * Callers:
 *     RtlpVerCompare @ 0x14046646C (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x1405B02A8 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x1406065B4 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140606638 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1406066CC (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140606770 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x140B51340 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140B73FC0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140B74290 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140B8224C (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140B8237C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140B834E0 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140B83578 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140B910D0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140B91280 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140B913D0 (VerifierNtWriteFile.c)
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     InitLoadDebuggerSymbols @ 0x140BFA7D0 (InitLoadDebuggerSymbols.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     RamdiskCreateSymbolicLink @ 0x140C4D158 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x140537BD8 (RtlStringVPrintfWorkerA.c)
 */

NTSTATUS RtlStringCbPrintfA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  if ( cbDest - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerA(pszDest, cbDest, 0LL, pszFormat, va);
  result = -1073741811;
  if ( cbDest )
    *pszDest = 0;
  return result;
}
