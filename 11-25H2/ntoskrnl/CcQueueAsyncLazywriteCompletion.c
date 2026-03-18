/*
 * XREFs of CcQueueAsyncLazywriteCompletion @ 0x14057AF90
 * Callers:
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C8A30 (CcAsyncLazywriteWorkerMulti.c)
 * Callees:
 *     CcFlushCachePostProcess @ 0x1402D9BE0 (CcFlushCachePostProcess.c)
 *     CcWriteBehindReleaseFile @ 0x1404DF008 (CcWriteBehindReleaseFile.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x1404DF9B0 (CcPostWorkQueueAsyncLazywrite.c)
 */

char __fastcall CcQueueAsyncLazywriteCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  char v5; // di
  __int64 v6; // r14
  char v7; // si

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 152);
  v7 = a3;
  if ( (_BYTE)a2 )
    CcFlushCachePostProcess(*(__int64 **)(a1 + 16), a2, a3, a4);
  if ( v7 )
    v5 = CcWriteBehindReleaseFile(v4);
  *(_DWORD *)(a1 + 128) = 8;
  *(_BYTE *)(a1 + 72) = v7;
  CcPostWorkQueueAsyncLazywrite(a1, v6 + 384);
  return v5;
}
