/*
 * XREFs of KiBugCheckDispatch @ 0x1406BEC80
 * Callers:
 *     KxIsrLinkage @ 0x1406AE9A0 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x1406B67C0 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1406B7440 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x1406B8200 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x1406B85C0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x1406B8940 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1406B8CC0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1406B9040 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x1406B9B40 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1406BA340 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x1406BB900 (KiXmmException.c)
 *     KiVirtualizationException @ 0x1406BBD00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406BC440 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x1406BDCC0 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x1406BDE40 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x1406BF240 (KiFastFailDispatch.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
