/*
 * XREFs of KzSetIrqlUnsafe @ 0x1405B4DD0
 * Callers:
 *     KiIdleLoop @ 0x1406ACBD0 (KiIdleLoop.c)
 *     KiChainedDispatch @ 0x1406AD740 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1406ADB20 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1406ADC50 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1406ADCF0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1406ADD90 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatch @ 0x1406ADDF0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1406AE1D0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406AE5B0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1406AE990 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406AED60 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1406AF940 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1406B00E0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1406B1A10 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1406B1E00 (KiVmbusInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x1406B21D0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1406B2280 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x1406B2330 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1406B2A80 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1406B31E0 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1406B3920 (KiIpiInterruptSubDispatch.c)
 *     KiNmiInterruptStart @ 0x1406B76C0 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x1406BB9C0 (KiMcheckAbort.c)
 *     KiSystemStartup @ 0x140B4D3E0 (KiSystemStartup.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 __fastcall KzSetIrqlUnsafe(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v3; // cl

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > a1 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a1);
    __writecr8(v1);
  }
  else
  {
    v3 = KeGetCurrentIrql();
    __writecr8(v1);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v3, (unsigned __int8)v1);
  }
  return CurrentIrql;
}
