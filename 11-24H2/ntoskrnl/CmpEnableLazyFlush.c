/*
 * XREFs of CmpEnableLazyFlush @ 0x1404A7864
 * Callers:
 *     CmpCoalescingCallback @ 0x1404A7810 (CmpCoalescingCallback.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x140666670 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmThawRegistry @ 0x1407D8B30 (CmThawRegistry.c)
 *     CmSetLazyFlushState @ 0x140A9BBF0 (CmSetLazyFlushState.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140230640 (CmpArmLazyWriter.c)
 */

void __fastcall CmpEnableLazyFlush(int a1)
{
  unsigned int i; // ebx

  _m_prefetchw(&CmpHoldLazyFlush);
  if ( _InterlockedAnd(&CmpHoldLazyFlush, ~a1) == a1 )
  {
    for ( i = 0; i < 3; ++i )
      CmpArmLazyWriter(i, 0LL, 1);
  }
}
