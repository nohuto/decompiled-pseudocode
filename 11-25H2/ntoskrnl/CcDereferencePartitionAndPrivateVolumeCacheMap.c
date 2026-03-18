/*
 * XREFs of CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1403A549C
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1403A4DE4 (CcDeleteSharedCacheMap.c)
 *     CcPostDeferredWrites @ 0x1403A5FC4 (CcPostDeferredWrites.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403A8B18 (CcDeletePrivateVolumeCacheMap.c)
 *     CcCachemapUninitWorkerThread @ 0x1403ABE90 (CcCachemapUninitWorkerThread.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x14048DAE0 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcQuickLazyWriteScanForVolume @ 0x1404B5A00 (CcQuickLazyWriteScanForVolume.c)
 *     CcUninitializeCacheMap @ 0x1404DADC0 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1404DBCE0 (CcWorkerThread.c)
 *     CcCanIWrite @ 0x1404DC3B0 (CcCanIWrite.c)
 *     CcAsyncLazywriteWorkerThread @ 0x1404DF850 (CcAsyncLazywriteWorkerThread.c)
 *     CcAsyncReadWorker @ 0x1404DFB90 (CcAsyncReadWorker.c)
 *     CcCompleteAsyncReadWorker @ 0x1404E04B0 (CcCompleteAsyncReadWorker.c)
 *     CcRemoveExternalCache @ 0x1405777F4 (CcRemoveExternalCache.c)
 *     CcRemoveExternalCacheEx @ 0x1405778A0 (CcRemoveExternalCacheEx.c)
 *     CcAsyncReadWorkerThread @ 0x14057AA90 (CcAsyncReadWorkerThread.c)
 *     CcCompleteAsyncLazywriteWorkerThread @ 0x14057ACA0 (CcCompleteAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 */

char __fastcall CcDereferencePartitionAndPrivateVolumeCacheMap(__int64 a1, __int64 a2)
{
  signed __int64 v3; // rax
  char v4; // bl
  bool v5; // cc
  signed __int64 v6; // rax
  char v7; // di
  signed __int64 v8; // rax
  signed __int64 v9; // rax

  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1296), 0xFFFFFFFFFFFFFFFFuLL);
  v4 = 0;
  v5 = v3 <= 1;
  v6 = v3 - 1;
  if ( v5 )
  {
    if ( v6 )
      __fastfail(0xEu);
    v7 = 1;
    KeSetEvent((PRKEVENT)(a1 + 1328), 0, 0);
  }
  else
  {
    v7 = 0;
  }
  if ( a2 )
  {
    v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
    v5 = v8 <= 1;
    v9 = v8 - 1;
    if ( v5 )
    {
      if ( v9 )
        __fastfail(0xEu);
      v4 = 1;
    }
  }
  return v4 & v7;
}
