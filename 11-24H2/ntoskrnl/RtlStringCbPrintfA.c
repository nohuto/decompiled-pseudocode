/*
 * XREFs of RtlStringCbPrintfA @ 0x140537878
 * Callers:
 *     RtlpVerCompare @ 0x140445E0C (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x1405B0BC8 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x140610B34 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140610BB8 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140610C4C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140610CF0 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x140B63540 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140B85FA0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140B86270 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140B9422C (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140B9435C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140B954C0 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140B95558 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140BA30B0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140BA3260 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140BA33B0 (VerifierNtWriteFile.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     InitLoadDebuggerSymbols @ 0x140C0D7D0 (InitLoadDebuggerSymbols.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     RamdiskCreateSymbolicLink @ 0x140C60628 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x140537BC8 (RtlStringVPrintfWorkerA.c)
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
