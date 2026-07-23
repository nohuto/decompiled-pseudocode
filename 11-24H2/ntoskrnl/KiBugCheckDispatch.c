/*
 * XREFs of KiBugCheckDispatch @ 0x1406BFB80
 * Callers:
 *     KxIsrLinkage @ 0x1406AF940 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x1406B76C0 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1406B8340 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x1406B9100 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x1406B94C0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x1406B9840 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1406B9BC0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1406B9F40 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x1406BAA40 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1406BB240 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x1406BC800 (KiXmmException.c)
 *     KiVirtualizationException @ 0x1406BCC00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406BD340 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x1406BEBC0 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x1406BED40 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x1406C0140 (KiFastFailDispatch.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
