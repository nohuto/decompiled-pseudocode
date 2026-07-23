/*
 * XREFs of CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402E624C
 * Callers:
 *     CcPostDeferredWrites @ 0x1402795B0 (CcPostDeferredWrites.c)
 *     CcCachemapUninitWorkerThread @ 0x14027AAB0 (CcCachemapUninitWorkerThread.c)
 *     CcDeleteSharedCacheMap @ 0x1402E5B98 (CcDeleteSharedCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1404309A4 (CcDeletePrivateVolumeCacheMap.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x140487DA0 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcQuickLazyWriteScanForVolume @ 0x1404AFD40 (CcQuickLazyWriteScanForVolume.c)
 *     CcUninitializeCacheMap @ 0x1404D3ED0 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1404D4DF0 (CcWorkerThread.c)
 *     CcCanIWrite @ 0x1404D54C0 (CcCanIWrite.c)
 *     CcAsyncLazywriteWorkerThread @ 0x1404D8960 (CcAsyncLazywriteWorkerThread.c)
 *     CcAsyncReadWorker @ 0x1404D8CA0 (CcAsyncReadWorker.c)
 *     CcCompleteAsyncReadWorker @ 0x1404D95C0 (CcCompleteAsyncReadWorker.c)
 *     CcRemoveExternalCache @ 0x140577F98 (CcRemoveExternalCache.c)
 *     CcRemoveExternalCacheEx @ 0x140578044 (CcRemoveExternalCacheEx.c)
 *     CcAsyncReadWorkerThread @ 0x14057B240 (CcAsyncReadWorkerThread.c)
 *     CcCompleteAsyncLazywriteWorkerThread @ 0x14057B450 (CcCompleteAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
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
