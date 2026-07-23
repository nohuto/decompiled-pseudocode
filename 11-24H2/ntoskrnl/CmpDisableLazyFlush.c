/*
 * XREFs of CmpDisableLazyFlush @ 0x1404F82E0
 * Callers:
 *     CmFreezeRegistry @ 0x1407D896C (CmFreezeRegistry.c)
 *     CmSetLazyFlushState @ 0x140A9BBF0 (CmSetLazyFlushState.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
