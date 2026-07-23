/*
 * XREFs of HalpBlkFatalErrorHalt @ 0x140BDD900
 * Callers:
 *     HalpBlkHandleMachineCheckAbort @ 0x140BDD400 (HalpBlkHandleMachineCheckAbort.c)
 *     HalpBlkMceFastForward @ 0x140BDD510 (HalpBlkMceFastForward.c)
 *     HalpBlkDivideErrorFault @ 0x140BDDA00 (HalpBlkDivideErrorFault.c)
 *     HalpBlkDebugExceptionTrap @ 0x140BDDA80 (HalpBlkDebugExceptionTrap.c)
 *     HalpBlkBreakpointTrap @ 0x140BDDB00 (HalpBlkBreakpointTrap.c)
 *     HalpBlkOverflowTrap @ 0x140BDDB80 (HalpBlkOverflowTrap.c)
 *     HalpBlkBoundRangeExceededFault @ 0x140BDDC00 (HalpBlkBoundRangeExceededFault.c)
 *     HalpBlkInvalidOpcodeFault @ 0x140BDDC80 (HalpBlkInvalidOpcodeFault.c)
 *     HalpBlkDeviceNotAvailableFault @ 0x140BDDD00 (HalpBlkDeviceNotAvailableFault.c)
 *     HalpBlkDoubleFaultAbort @ 0x140BDDD80 (HalpBlkDoubleFaultAbort.c)
 *     HalpBlkCoprocessorSegmentOverrunFault @ 0x140BDDE00 (HalpBlkCoprocessorSegmentOverrunFault.c)
 *     HalpBlkInvalidTssFault @ 0x140BDDE80 (HalpBlkInvalidTssFault.c)
 *     HalpBlkSegmentNotPresentFault @ 0x140BDDF00 (HalpBlkSegmentNotPresentFault.c)
 *     HalpBlkStackSegmentFault @ 0x140BDDF80 (HalpBlkStackSegmentFault.c)
 *     HalpBlkGeneralProtectionFault @ 0x140BDE000 (HalpBlkGeneralProtectionFault.c)
 *     HalpBlkPageFault @ 0x140BDE080 (HalpBlkPageFault.c)
 *     HalpBlkFloatingPointErrorFault @ 0x140BDE100 (HalpBlkFloatingPointErrorFault.c)
 *     HalpBlkAlignmentFault @ 0x140BDE180 (HalpBlkAlignmentFault.c)
 *     HalpBlkFloatingPointFault @ 0x140BDE200 (HalpBlkFloatingPointFault.c)
 *     HalpBlkVirtualizationFault @ 0x140BDE280 (HalpBlkVirtualizationFault.c)
 *     HalpBlkReservedVector21 @ 0x140BDE300 (HalpBlkReservedVector21.c)
 *     HalpBlkReservedVector22 @ 0x140BDE380 (HalpBlkReservedVector22.c)
 *     HalpBlkReservedVector23 @ 0x140BDE400 (HalpBlkReservedVector23.c)
 *     HalpBlkReservedVector24 @ 0x140BDE480 (HalpBlkReservedVector24.c)
 *     HalpBlkReservedVector25 @ 0x140BDE500 (HalpBlkReservedVector25.c)
 *     HalpBlkReservedVector26 @ 0x140BDE580 (HalpBlkReservedVector26.c)
 *     HalpBlkReservedVector27 @ 0x140BDE600 (HalpBlkReservedVector27.c)
 *     HalpBlkReservedVector28 @ 0x140BDE680 (HalpBlkReservedVector28.c)
 *     HalpBlkReservedVector29 @ 0x140BDE700 (HalpBlkReservedVector29.c)
 *     HalpBlkReservedVector30 @ 0x140BDE780 (HalpBlkReservedVector30.c)
 *     HalpBlkReservedVector31 @ 0x140BDE800 (HalpBlkReservedVector31.c)
 *     HalpBlkNmiInterrupt @ 0x140BDED00 (HalpBlkNmiInterrupt.c)
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
