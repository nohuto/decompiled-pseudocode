/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@Z @ 0x1C013E820
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1C028E090 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<SURFREFDC>::OnUnexpectedThreadTerminationStatic(SURFREFDC *a1)
{
  SURFREFDC::vUnlock(a1);
}
