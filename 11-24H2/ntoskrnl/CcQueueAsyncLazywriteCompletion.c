/*
 * XREFs of CcQueueAsyncLazywriteCompletion @ 0x14057B740
 * Callers:
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C0AEC (CcAsyncLazywriteWorkerMulti.c)
 * Callees:
 *     CcFlushCachePostProcess @ 0x1402791F0 (CcFlushCachePostProcess.c)
 *     CcWriteBehindReleaseFile @ 0x1404D8118 (CcWriteBehindReleaseFile.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x1404D8AC0 (CcPostWorkQueueAsyncLazywrite.c)
 */

char __fastcall CcQueueAsyncLazywriteCompletion(__int64 a1, char a2, char a3)
{
  __int64 v3; // rbp
  char v4; // di
  __int64 v5; // r14

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 152);
  if ( a2 )
    CcFlushCachePostProcess(*(__int64 **)(a1 + 16));
  if ( a3 )
    v4 = CcWriteBehindReleaseFile(v3);
  *(_DWORD *)(a1 + 128) = 8;
  *(_BYTE *)(a1 + 72) = a3;
  CcPostWorkQueueAsyncLazywrite(a1, v5 + 384);
  return v4;
}
