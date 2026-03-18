/*
 * XREFs of HalpBlkFatalErrorHalt @ 0x140BDB900
 * Callers:
 *     HalpBlkHandleMachineCheckAbort @ 0x140BDB400 (HalpBlkHandleMachineCheckAbort.c)
 *     HalpBlkMceFastForward @ 0x140BDB510 (HalpBlkMceFastForward.c)
 *     HalpBlkDivideErrorFault @ 0x140BDBA00 (HalpBlkDivideErrorFault.c)
 *     HalpBlkDebugExceptionTrap @ 0x140BDBA80 (HalpBlkDebugExceptionTrap.c)
 *     HalpBlkBreakpointTrap @ 0x140BDBB00 (HalpBlkBreakpointTrap.c)
 *     HalpBlkOverflowTrap @ 0x140BDBB80 (HalpBlkOverflowTrap.c)
 *     HalpBlkBoundRangeExceededFault @ 0x140BDBC00 (HalpBlkBoundRangeExceededFault.c)
 *     HalpBlkInvalidOpcodeFault @ 0x140BDBC80 (HalpBlkInvalidOpcodeFault.c)
 *     HalpBlkDeviceNotAvailableFault @ 0x140BDBD00 (HalpBlkDeviceNotAvailableFault.c)
 *     HalpBlkDoubleFaultAbort @ 0x140BDBD80 (HalpBlkDoubleFaultAbort.c)
 *     HalpBlkCoprocessorSegmentOverrunFault @ 0x140BDBE00 (HalpBlkCoprocessorSegmentOverrunFault.c)
 *     HalpBlkInvalidTssFault @ 0x140BDBE80 (HalpBlkInvalidTssFault.c)
 *     HalpBlkSegmentNotPresentFault @ 0x140BDBF00 (HalpBlkSegmentNotPresentFault.c)
 *     HalpBlkStackSegmentFault @ 0x140BDBF80 (HalpBlkStackSegmentFault.c)
 *     HalpBlkGeneralProtectionFault @ 0x140BDC000 (HalpBlkGeneralProtectionFault.c)
 *     HalpBlkPageFault @ 0x140BDC080 (HalpBlkPageFault.c)
 *     HalpBlkFloatingPointErrorFault @ 0x140BDC100 (HalpBlkFloatingPointErrorFault.c)
 *     HalpBlkAlignmentFault @ 0x140BDC180 (HalpBlkAlignmentFault.c)
 *     HalpBlkFloatingPointFault @ 0x140BDC200 (HalpBlkFloatingPointFault.c)
 *     HalpBlkVirtualizationFault @ 0x140BDC280 (HalpBlkVirtualizationFault.c)
 *     HalpBlkReservedVector21 @ 0x140BDC300 (HalpBlkReservedVector21.c)
 *     HalpBlkReservedVector22 @ 0x140BDC380 (HalpBlkReservedVector22.c)
 *     HalpBlkReservedVector23 @ 0x140BDC400 (HalpBlkReservedVector23.c)
 *     HalpBlkReservedVector24 @ 0x140BDC480 (HalpBlkReservedVector24.c)
 *     HalpBlkReservedVector25 @ 0x140BDC500 (HalpBlkReservedVector25.c)
 *     HalpBlkReservedVector26 @ 0x140BDC580 (HalpBlkReservedVector26.c)
 *     HalpBlkReservedVector27 @ 0x140BDC600 (HalpBlkReservedVector27.c)
 *     HalpBlkReservedVector28 @ 0x140BDC680 (HalpBlkReservedVector28.c)
 *     HalpBlkReservedVector29 @ 0x140BDC700 (HalpBlkReservedVector29.c)
 *     HalpBlkReservedVector30 @ 0x140BDC780 (HalpBlkReservedVector30.c)
 *     HalpBlkReservedVector31 @ 0x140BDC800 (HalpBlkReservedVector31.c)
 *     HalpBlkNmiInterrupt @ 0x140BDCD00 (HalpBlkNmiInterrupt.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn HalpBlkFatalErrorHalt(unsigned __int8 a1, unsigned __int64 a2)
{
  __writegsbyte(0x70u, a1);
  _mm_sfence();
  __writegsqword(0x78u, a2);
  _disable();
  __halt();
}
