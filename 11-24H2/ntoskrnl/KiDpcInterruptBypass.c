/*
 * XREFs of KiDpcInterruptBypass @ 0x1406B31A0
 * Callers:
 *     KiChainedDispatch @ 0x1406AD740 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1406ADDF0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1406AE1D0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406AE5B0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1406AE990 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406AED60 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1406AF940 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x1406B1A10 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1406B1E00 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1406B2330 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1406B31E0 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x1402A32B0 (KiDispatchInterrupt.c)
 */

__int64 __fastcall KiDpcInterruptBypass()
{
  __int64 v0; // rbp
  __int64 result; // rax

  __writecr8(2uLL);
  _enable();
  result = KiDispatchInterrupt(*(_QWORD *)(v0 - 87), v0 - 128);
  _disable();
  return result;
}
