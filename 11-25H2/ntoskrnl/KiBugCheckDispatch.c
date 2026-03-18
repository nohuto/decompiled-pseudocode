/*
 * XREFs of KiBugCheckDispatch @ 0x1406B3980
 * Callers:
 *     KxIsrLinkage @ 0x1406A36D0 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x1406AB4C0 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1406AC140 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x1406ACF00 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x1406AD2C0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x1406AD640 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1406AD9C0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1406ADD40 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x1406AE840 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1406AF040 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x1406B0600 (KiXmmException.c)
 *     KiVirtualizationException @ 0x1406B0A00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406B1140 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x1406B29C0 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x1406B2B40 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x1406B3F40 (KiFastFailDispatch.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
