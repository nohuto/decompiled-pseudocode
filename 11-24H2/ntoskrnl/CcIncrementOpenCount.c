/*
 * XREFs of CcIncrementOpenCount @ 0x1402AAADC
 * Callers:
 *     CcPurgeCacheSection @ 0x14023EF70 (CcPurgeCacheSection.c)
 *     CcWriteBehindPreProcess @ 0x1402A8434 (CcWriteBehindPreProcess.c)
 *     CcAsyncCopyRead @ 0x1402A94F0 (CcAsyncCopyRead.c)
 *     CcGetDirtyPagesHelper @ 0x1402AA740 (CcGetDirtyPagesHelper.c)
 *     CcFlushCachePreProcess @ 0x1402AC290 (CcFlushCachePreProcess.c)
 *     CcPrepareMdlWrite @ 0x1402CC1E0 (CcPrepareMdlWrite.c)
 *     CcGetFlushedValidData @ 0x1402CC6C0 (CcGetFlushedValidData.c)
 *     CcNotifyOfMappedWrite @ 0x14036BCAC (CcNotifyOfMappedWrite.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403F877C (CcUnmapInactiveViewsInternal.c)
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcIncrementOpenCount(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a1 + 4) + 1);
  *(_DWORD *)(a1 + 4) = result;
  if ( a3 )
    ++*(_DWORD *)(a1 + 544);
  return result;
}
