/*
 * XREFs of CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402CD54C
 * Callers:
 *     CcCachemapUninitWorkerThread @ 0x1402A7660 (CcCachemapUninitWorkerThread.c)
 *     CcPostDeferredWrites @ 0x1402AAB14 (CcPostDeferredWrites.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1402CB768 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeleteSharedCacheMap @ 0x1402CCE98 (CcDeleteSharedCacheMap.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x14048D520 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcQuickLazyWriteScanForVolume @ 0x1404B54A0 (CcQuickLazyWriteScanForVolume.c)
 *     CcUninitializeCacheMap @ 0x1404DA4B0 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1404DB3D0 (CcWorkerThread.c)
 *     CcCanIWrite @ 0x1404DBAA0 (CcCanIWrite.c)
 *     CcAsyncLazywriteWorkerThread @ 0x1404DEF40 (CcAsyncLazywriteWorkerThread.c)
 *     CcAsyncReadWorker @ 0x1404DF280 (CcAsyncReadWorker.c)
 *     CcCompleteAsyncReadWorker @ 0x1404DFBA0 (CcCompleteAsyncReadWorker.c)
 *     CcRemoveExternalCache @ 0x14057AB08 (CcRemoveExternalCache.c)
 *     CcRemoveExternalCacheEx @ 0x14057ABB4 (CcRemoveExternalCacheEx.c)
 *     CcAsyncReadWorkerThread @ 0x14057DDB0 (CcAsyncReadWorkerThread.c)
 *     CcCompleteAsyncLazywriteWorkerThread @ 0x14057DFC0 (CcCompleteAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
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
