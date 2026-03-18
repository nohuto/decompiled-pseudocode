/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740
 * Callers:
 *     KyStartUserThread @ 0x1406ABE10 (KyStartUserThread.c)
 *     KxIsrLinkage @ 0x1406AE9A0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1406AF140 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x1406AF940 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1406AFCB0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1406B0020 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1406B0390 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1406B0700 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1406B1390 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1406B1AE0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1406B2240 (KiIpiInterrupt.c)
 *     KiDivideErrorFault @ 0x1406B5E00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x1406B6340 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x1406B6D40 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x1406B70C0 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x1406B7440 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406B7B40 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x1406B8200 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x1406B85C0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x1406B8940 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1406B8CC0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1406B9040 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x1406B9440 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x1406B97C0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x1406B9B40 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1406BA340 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x1406BA740 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x1406BB200 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x1406BB900 (KiXmmException.c)
 *     KiVirtualizationException @ 0x1406BBD00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406BC440 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x1406BCBC0 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x1406BCF40 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x1406BD2C0 (KiDebugServiceTrap.c)
 *     KiSystemService @ 0x1406BD640 (KiSystemService.c)
 *     KiSystemCall32 @ 0x1406BD900 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x1406BDE40 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140BBCE40 (KiSystemCall32Shadow.c)
 *     KiSystemCall64Shadow @ 0x140BBD200 (KiSystemCall64Shadow.c)
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
