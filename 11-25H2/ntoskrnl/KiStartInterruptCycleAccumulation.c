/*
 * XREFs of KiStartInterruptCycleAccumulation @ 0x14028E700
 * Callers:
 *     KiScanInterruptObjectList @ 0x1406A18B0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1406A19E0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1406A1A80 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1406A1B20 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406A2AF0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1406A36D0 (KxIsrLinkage.c)
 *     KiHvInterruptSubDispatch @ 0x1406A5F60 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1406A6010 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x1406A60C0 (KiSwInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1406A76B0 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14028CBB0 (KiEndThreadCycleAccumulation.c)
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
    result = KiEndThreadCycleAccumulation(a1, *(_QWORD *)(a1 + 8), 0LL, 0);
    if ( a2 )
      return SymCryptEntropyAccumulatorAccumulateSample(a1 + 37312);
  }
  return result;
}
