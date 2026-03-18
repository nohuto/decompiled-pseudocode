/*
 * XREFs of RtlStringCchPrintfW @ 0x140041DB4
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x140014A50 (PciConfigSpaceHandlerWorker.c)
 *     LinkNodeCrackPrt @ 0x14002B0F8 (LinkNodeCrackPrt.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x14003EC14 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToSerialIDWide @ 0x140060C1C (ACPIGetConvertToSerialIDWide.c)
 *     LogInErrorLog @ 0x14006BFC8 (LogInErrorLog.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x14009ABC0 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x140041FDC (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(pszDest, cchDest, 0LL, pszFormat, va);
  result = -1073741811;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
