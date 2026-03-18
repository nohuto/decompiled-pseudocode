/*
 * XREFs of EngMovePointer @ 0x140321690
 * Callers:
 *     <none>
 * Callees:
 *     EngpMovePointer @ 0x140024AC8 (EngpMovePointer.c)
 */

void __stdcall EngMovePointer(SURFOBJ *pso, LONG x, LONG y, RECTL *prcl)
{
  EngpMovePointer(pso, x, y, (__int64)prcl, 0);
}
