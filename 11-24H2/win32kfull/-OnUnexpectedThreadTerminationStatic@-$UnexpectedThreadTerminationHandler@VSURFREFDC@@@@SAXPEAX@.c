/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@Z @ 0x14032F740
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1400DD084 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<SURFREFDC>::OnUnexpectedThreadTerminationStatic(SURFREFDC *a1)
{
  SURFREFDC::vUnlock(a1);
}
