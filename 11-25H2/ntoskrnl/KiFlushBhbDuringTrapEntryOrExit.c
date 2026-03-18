/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440
 * Callers:
 *     KyStartUserThread @ 0x1406A0B40 (KyStartUserThread.c)
 *     KxIsrLinkage @ 0x1406A36D0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1406A3E70 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x1406A4670 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1406A49E0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1406A4D50 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1406A50C0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1406A5430 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1406A60C0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1406A6810 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1406A6F70 (KiIpiInterrupt.c)
 *     KiDivideErrorFault @ 0x1406AAB00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x1406AB040 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x1406ABA40 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x1406ABDC0 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x1406AC140 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406AC840 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x1406ACF00 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x1406AD2C0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x1406AD640 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1406AD9C0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1406ADD40 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x1406AE140 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x1406AE4C0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x1406AE840 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1406AF040 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x1406AF440 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x1406AFF00 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x1406B0600 (KiXmmException.c)
 *     KiVirtualizationException @ 0x1406B0A00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406B1140 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x1406B18C0 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x1406B1C40 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x1406B1FC0 (KiDebugServiceTrap.c)
 *     KiSystemService @ 0x1406B2340 (KiSystemService.c)
 *     KiSystemCall32 @ 0x1406B2600 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x1406B2B40 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140BABE40 (KiSystemCall32Shadow.c)
 *     KiSystemCall64Shadow @ 0x140BAC200 (KiSystemCall64Shadow.c)
 * Callees:
 *     <none>
 */

char KiFlushBhbDuringTrapEntryOrExit()
{
  char result; // al

  if ( (KeGetPcr()->Prcb.BpbFeatures.AllFlags & 0x30) == 0 )
    __debugbreak();
  result = KeGetPcr()->Prcb.BpbFeatures.AllFlags & 0x30;
  switch ( result )
  {
    case 16:
      return KiFlushBhbDuringTrapEntryOrExitPreAlderLake(56026LL);
    case 32:
      return KiFlushBhbDuringTrapEntryOrExitAlderLake(56026LL);
    case 48:
      return KiFlushBhbDuringTrapEntryOrExitTsx(56026LL);
  }
  __debugbreak();
  return result;
}
