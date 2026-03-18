/*
 * XREFs of HalpBlkFatalErrorHalt @ 0x140BCA900
 * Callers:
 *     HalpBlkHandleMachineCheckAbort @ 0x140BCA400 (HalpBlkHandleMachineCheckAbort.c)
 *     HalpBlkMceFastForward @ 0x140BCA510 (HalpBlkMceFastForward.c)
 *     HalpBlkDivideErrorFault @ 0x140BCAA00 (HalpBlkDivideErrorFault.c)
 *     HalpBlkDebugExceptionTrap @ 0x140BCAA80 (HalpBlkDebugExceptionTrap.c)
 *     HalpBlkBreakpointTrap @ 0x140BCAB00 (HalpBlkBreakpointTrap.c)
 *     HalpBlkOverflowTrap @ 0x140BCAB80 (HalpBlkOverflowTrap.c)
 *     HalpBlkBoundRangeExceededFault @ 0x140BCAC00 (HalpBlkBoundRangeExceededFault.c)
 *     HalpBlkInvalidOpcodeFault @ 0x140BCAC80 (HalpBlkInvalidOpcodeFault.c)
 *     HalpBlkDeviceNotAvailableFault @ 0x140BCAD00 (HalpBlkDeviceNotAvailableFault.c)
 *     HalpBlkDoubleFaultAbort @ 0x140BCAD80 (HalpBlkDoubleFaultAbort.c)
 *     HalpBlkCoprocessorSegmentOverrunFault @ 0x140BCAE00 (HalpBlkCoprocessorSegmentOverrunFault.c)
 *     HalpBlkInvalidTssFault @ 0x140BCAE80 (HalpBlkInvalidTssFault.c)
 *     HalpBlkSegmentNotPresentFault @ 0x140BCAF00 (HalpBlkSegmentNotPresentFault.c)
 *     HalpBlkStackSegmentFault @ 0x140BCAF80 (HalpBlkStackSegmentFault.c)
 *     HalpBlkGeneralProtectionFault @ 0x140BCB000 (HalpBlkGeneralProtectionFault.c)
 *     HalpBlkPageFault @ 0x140BCB080 (HalpBlkPageFault.c)
 *     HalpBlkFloatingPointErrorFault @ 0x140BCB100 (HalpBlkFloatingPointErrorFault.c)
 *     HalpBlkAlignmentFault @ 0x140BCB180 (HalpBlkAlignmentFault.c)
 *     HalpBlkFloatingPointFault @ 0x140BCB200 (HalpBlkFloatingPointFault.c)
 *     HalpBlkVirtualizationFault @ 0x140BCB280 (HalpBlkVirtualizationFault.c)
 *     HalpBlkReservedVector21 @ 0x140BCB300 (HalpBlkReservedVector21.c)
 *     HalpBlkReservedVector22 @ 0x140BCB380 (HalpBlkReservedVector22.c)
 *     HalpBlkReservedVector23 @ 0x140BCB400 (HalpBlkReservedVector23.c)
 *     HalpBlkReservedVector24 @ 0x140BCB480 (HalpBlkReservedVector24.c)
 *     HalpBlkReservedVector25 @ 0x140BCB500 (HalpBlkReservedVector25.c)
 *     HalpBlkReservedVector26 @ 0x140BCB580 (HalpBlkReservedVector26.c)
 *     HalpBlkReservedVector27 @ 0x140BCB600 (HalpBlkReservedVector27.c)
 *     HalpBlkReservedVector28 @ 0x140BCB680 (HalpBlkReservedVector28.c)
 *     HalpBlkReservedVector29 @ 0x140BCB700 (HalpBlkReservedVector29.c)
 *     HalpBlkReservedVector30 @ 0x140BCB780 (HalpBlkReservedVector30.c)
 *     HalpBlkReservedVector31 @ 0x140BCB800 (HalpBlkReservedVector31.c)
 *     HalpBlkNmiInterrupt @ 0x140BCBD00 (HalpBlkNmiInterrupt.c)
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
