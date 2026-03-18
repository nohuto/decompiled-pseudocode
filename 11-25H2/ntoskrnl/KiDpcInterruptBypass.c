/*
 * XREFs of KiDpcInterruptBypass @ 0x1406A6F30
 * Callers:
 *     KiChainedDispatch @ 0x1406A14D0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1406A1B80 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1406A1F60 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406A2340 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1406A2720 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406A2AF0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1406A36D0 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x1406A57A0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1406A5B90 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1406A60C0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1406A6F70 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x14032E330 (KiDispatchInterrupt.c)
 */

char __fastcall KiDpcInterruptBypass(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  char result; // al

  __writecr8(2uLL);
  _enable();
  result = KiDispatchInterrupt(*(_QWORD *)(v4 - 87), v4 - 128, a3, a4);
  _disable();
  return result;
}
