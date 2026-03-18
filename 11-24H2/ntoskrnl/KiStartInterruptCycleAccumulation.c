/*
 * XREFs of KiStartInterruptCycleAccumulation @ 0x14034C150
 * Callers:
 *     KiScanInterruptObjectList @ 0x1406ACB80 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1406ACCB0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1406ACD50 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1406ACDF0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406ADDC0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1406AE9A0 (KxIsrLinkage.c)
 *     KiHvInterruptSubDispatch @ 0x1406B1230 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1406B12E0 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x1406B1390 (KiSwInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1406B2980 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14034D120 (KiEndThreadCycleAccumulation.c)
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
