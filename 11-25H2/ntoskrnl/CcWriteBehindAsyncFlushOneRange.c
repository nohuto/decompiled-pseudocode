/*
 * XREFs of CcWriteBehindAsyncFlushOneRange @ 0x14057B01C
 * Callers:
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C8A30 (CcAsyncLazywriteWorkerMulti.c)
 * Callees:
 *     CcFlushCacheOneRange @ 0x1402C13D0 (CcFlushCacheOneRange.c)
 *     CcFlushCachePostProcessOneRange @ 0x1402D9210 (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCacheAcquireRange @ 0x1402D9840 (CcFlushCacheAcquireRange.c)
 */

char __fastcall CcWriteBehindAsyncFlushOneRange(__int64 a1)
{
  __int64 v1; // rax
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  if ( !v1 || (*(_DWORD *)(v1 + 152) & 0x4000000) != 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 72);
  *(_WORD *)v4 = 1;
  *(_BYTE *)(v4 + 2) = 6;
  *(_DWORD *)(v4 + 4) = 0;
  v4 += 8LL;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)v4 = v4;
  while ( (unsigned __int8)CcFlushCacheAcquireRange(a1) )
  {
    CcFlushCacheOneRange((__int64 *)a1);
    if ( !*(_DWORD *)(a1 + 60) )
      return 1;
    if ( !CcFlushCachePostProcessOneRange((__int64 *)a1, v5, v6, v7) )
      return v2;
  }
  return v2;
}
