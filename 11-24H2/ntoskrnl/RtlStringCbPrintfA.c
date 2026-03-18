/*
 * XREFs of RtlStringCbPrintfA @ 0x14053A038
 * Callers:
 *     RtlpVerCompare @ 0x140450B9C (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x1405B3C54 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x140612574 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1406125F8 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14061268C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140612730 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x140B61470 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140B83FA0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140B84270 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140B9222C (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140B9235C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140B934C0 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140B93558 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140BA10B0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140BA1260 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140BA13B0 (VerifierNtWriteFile.c)
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     InitLoadDebuggerSymbols @ 0x140C0B7D0 (InitLoadDebuggerSymbols.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     RamdiskCreateSymbolicLink @ 0x140C5E4D8 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x14053A388 (RtlStringVPrintfWorkerA.c)
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
