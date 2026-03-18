/*
 * XREFs of CmpEnableLazyFlush @ 0x1404ABD84
 * Callers:
 *     CmpCoalescingCallback @ 0x1404ABD30 (CmpCoalescingCallback.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x14065C480 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmThawRegistry @ 0x1407C8E40 (CmThawRegistry.c)
 *     CmSetLazyFlushState @ 0x140A9AAA0 (CmSetLazyFlushState.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140349918 (CmpArmLazyWriter.c)
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
