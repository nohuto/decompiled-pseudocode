/*
 * XREFs of CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1403A5530
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1403A4DE4 (CcDeleteSharedCacheMap.c)
 *     CcPostWorkQueueAsyncRead @ 0x1403AA564 (CcPostWorkQueueAsyncRead.c)
 *     CcPostWorkQueueRegular @ 0x1403ABCE4 (CcPostWorkQueueRegular.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x14048DAE0 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcPostWorkQueueSpecial @ 0x1404B6B88 (CcPostWorkQueueSpecial.c)
 *     CcIncrementWriteBehindPriority @ 0x1404DB970 (CcIncrementWriteBehindPriority.c)
 *     CcReEngageWorkerThreads @ 0x1404DBB10 (CcReEngageWorkerThreads.c)
 *     CcWorkerThread @ 0x1404DBCE0 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x1404DF9B0 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1404E05FC (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcDeferWrite @ 0x140577E30 (CcDeferWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcReferencePartitionAndPrivateVolumeCacheMap(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1296));
  if ( result <= 1 )
    __fastfail(0xEu);
  if ( a2 )
  {
    result = _InterlockedIncrement64((volatile signed __int64 *)(a2 + 8));
    if ( result <= 1 )
      __fastfail(0xEu);
  }
  return result;
}
