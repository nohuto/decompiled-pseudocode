/*
 * XREFs of CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1402CD5E0
 * Callers:
 *     CcPostWorkQueueRegular @ 0x1402A74B4 (CcPostWorkQueueRegular.c)
 *     CcDeleteSharedCacheMap @ 0x1402CCE98 (CcDeleteSharedCacheMap.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x14048D520 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcPostWorkQueueSpecial @ 0x1404B6678 (CcPostWorkQueueSpecial.c)
 *     CcIncrementWriteBehindPriority @ 0x1404DB060 (CcIncrementWriteBehindPriority.c)
 *     CcReEngageWorkerThreads @ 0x1404DB200 (CcReEngageWorkerThreads.c)
 *     CcWorkerThread @ 0x1404DB3D0 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x1404DF0A0 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcPostWorkQueueAsyncRead @ 0x1404DFCEC (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1404E00C0 (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcDeferWrite @ 0x14057B140 (CcDeferWrite.c)
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
