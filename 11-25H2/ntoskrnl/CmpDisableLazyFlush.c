/*
 * XREFs of CmpDisableLazyFlush @ 0x1404F8550
 * Callers:
 *     CmFreezeRegistry @ 0x1407C8C7C (CmFreezeRegistry.c)
 *     CmSetLazyFlushState @ 0x140A9AAA0 (CmSetLazyFlushState.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
