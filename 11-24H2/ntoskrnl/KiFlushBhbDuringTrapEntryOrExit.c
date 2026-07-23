/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640
 * Callers:
 *     KyStartUserThread @ 0x1406ACDB0 (KyStartUserThread.c)
 *     KxIsrLinkage @ 0x1406AF940 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1406B00E0 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x1406B08E0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1406B0C50 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1406B0FC0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1406B1330 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1406B16A0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1406B2330 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1406B2A80 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1406B31E0 (KiIpiInterrupt.c)
 *     KiDivideErrorFault @ 0x1406B6D00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x1406B7240 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x1406B7C40 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x1406B7FC0 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x1406B8340 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406B8A40 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x1406B9100 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x1406B94C0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x1406B9840 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1406B9BC0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1406B9F40 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x1406BA340 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x1406BA6C0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x1406BAA40 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1406BB240 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x1406BB640 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x1406BC100 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x1406BC800 (KiXmmException.c)
 *     KiVirtualizationException @ 0x1406BCC00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406BD340 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x1406BDAC0 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x1406BDE40 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x1406BE1C0 (KiDebugServiceTrap.c)
 *     KiSystemService @ 0x1406BE540 (KiSystemService.c)
 *     KiSystemCall32 @ 0x1406BE800 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x1406BED40 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140BBEE40 (KiSystemCall32Shadow.c)
 *     KiSystemCall64Shadow @ 0x140BBF200 (KiSystemCall64Shadow.c)
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
