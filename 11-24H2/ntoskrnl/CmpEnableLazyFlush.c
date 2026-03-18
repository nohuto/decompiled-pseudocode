/*
 * XREFs of CmpEnableLazyFlush @ 0x1404AD184
 * Callers:
 *     CmpCoalescingCallback @ 0x1404AD130 (CmpCoalescingCallback.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x140667D80 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmThawRegistry @ 0x1407D85E0 (CmThawRegistry.c)
 *     CmSetLazyFlushState @ 0x140AA0860 (CmSetLazyFlushState.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x14027B0B0 (CmpArmLazyWriter.c)
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
