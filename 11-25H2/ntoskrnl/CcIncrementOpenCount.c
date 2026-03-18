/*
 * XREFs of CcIncrementOpenCount @ 0x1402C5A9C
 * Callers:
 *     CcPurgeCacheSection @ 0x1402C4260 (CcPurgeCacheSection.c)
 *     CcGetDirtyPagesHelper @ 0x1402C56E0 (CcGetDirtyPagesHelper.c)
 *     CcFlushCachePreProcess @ 0x1402D9F6C (CcFlushCachePreProcess.c)
 *     CcGetFlushedValidData @ 0x1403A68F0 (CcGetFlushedValidData.c)
 *     CcPrepareMdlWrite @ 0x1403A6EA0 (CcPrepareMdlWrite.c)
 *     CcAsyncCopyRead @ 0x1403AAC00 (CcAsyncCopyRead.c)
 *     CcWriteBehindPreProcess @ 0x1403ACA84 (CcWriteBehindPreProcess.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403B5BF0 (CcUnmapInactiveViewsInternal.c)
 *     CcNotifyOfMappedWrite @ 0x14040ECD8 (CcNotifyOfMappedWrite.c)
 *     CcInitializeCacheMapInternal @ 0x14045E3B0 (CcInitializeCacheMapInternal.c)
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
