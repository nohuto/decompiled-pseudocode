/*
 * XREFs of KiStartInterruptCycleAccumulation @ 0x14036A630
 * Callers:
 *     KiScanInterruptObjectList @ 0x1406ADB20 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1406ADC50 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1406ADCF0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1406ADD90 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406AED60 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1406AF940 (KxIsrLinkage.c)
 *     KiHvInterruptSubDispatch @ 0x1406B21D0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1406B2280 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x1406B2330 (KiSwInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1406B3920 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14036B600 (KiEndThreadCycleAccumulation.c)
 */

char __fastcall KiStartInterruptCycleAccumulation(__int64 a1, char a2)
{
  char v2; // al
  char result; // al

  v2 = *(_BYTE *)(a1 + 32);
  if ( v2 )
  {
    result = v2 + 1;
    *(_BYTE *)(a1 + 32) = result;
  }
  else
  {
    result = KiEndThreadCycleAccumulation(a1, *(_QWORD *)(a1 + 8), 0LL, 0LL);
    if ( a2 )
      return SymCryptEntropyAccumulatorAccumulateSample(a1 + 37312);
  }
  return result;
}
