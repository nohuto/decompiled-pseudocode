/*
 * XREFs of CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1402E62E0
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x14027372C (CcPostWorkQueueAsyncRead.c)
 *     CcPostWorkQueueRegular @ 0x14027AE98 (CcPostWorkQueueRegular.c)
 *     CcDeleteSharedCacheMap @ 0x1402E5B98 (CcDeleteSharedCacheMap.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x140487DA0 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcPostWorkQueueSpecial @ 0x1404B0E58 (CcPostWorkQueueSpecial.c)
 *     CcIncrementWriteBehindPriority @ 0x1404D4A80 (CcIncrementWriteBehindPriority.c)
 *     CcReEngageWorkerThreads @ 0x1404D4C20 (CcReEngageWorkerThreads.c)
 *     CcWorkerThread @ 0x1404D4DF0 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x1404D8AC0 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1404D970C (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcDeferWrite @ 0x1405785D0 (CcDeferWrite.c)
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
