/*
 * XREFs of CmpDisableLazyFlush @ 0x1404FAA00
 * Callers:
 *     CmFreezeRegistry @ 0x1407D841C (CmFreezeRegistry.c)
 *     CmSetLazyFlushState @ 0x140AA0860 (CmSetLazyFlushState.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
