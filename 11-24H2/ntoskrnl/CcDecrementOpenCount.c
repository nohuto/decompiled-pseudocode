/*
 * XREFs of CcDecrementOpenCount @ 0x1402ABDBC
 * Callers:
 *     CcPurgeCacheSection @ 0x14023EF70 (CcPurgeCacheSection.c)
 *     CcWriteBehindPreProcess @ 0x1402A8434 (CcWriteBehindPreProcess.c)
 *     CcFlushCachePostProcess @ 0x1402ABF10 (CcFlushCachePostProcess.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402CC554 (CcNotifyOfMappedWriteComplete.c)
 *     CcGetFlushedValidData @ 0x1402CC6C0 (CcGetFlushedValidData.c)
 *     CcNotifyOfMappedWrite @ 0x14036BCAC (CcNotifyOfMappedWrite.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403F877C (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteComplete2 @ 0x140461194 (CcMdlWriteComplete2.c)
 *     CcSetFileSizesEx @ 0x1404A6800 (CcSetFileSizesEx.c)
 *     CcPerformReadAhead @ 0x1404DDEB0 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1404DF87C (CcCompleteAsyncRead.c)
 *     CcMdlWriteAbort @ 0x14057C350 (CcMdlWriteAbort.c)
 * Callees:
 *     CcGetPrivateVolumeCacheMap @ 0x1402CD530 (CcGetPrivateVolumeCacheMap.c)
 *     CcScheduleLazyWriteScan @ 0x14043C9B0 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140446E98 (CcInsertIntoDirtySharedCacheMapList.c)
 */

__int64 __fastcall CcDecrementOpenCount(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdi
  _BYTE *v6; // rdx
  int v7; // edx
  __int64 v8; // r11

  --*(_DWORD *)(a1 + 4);
  --*(_DWORD *)(a1 + 544);
  v1 = *(_QWORD *)(a1 + 536);
  result = CcGetPrivateVolumeCacheMap(a1);
  v5 = result;
  if ( !*(_DWORD *)(v3 + 4) )
  {
    if ( CcEnablePerVolumeLazyWriter )
      v6 = (_BYTE *)(*(_QWORD *)(v3 + 600) + 986LL);
    else
      v6 = (_BYTE *)(v1 + 1050);
    *v6 = 1;
    v7 = *(_DWORD *)(v3 + 152);
    result = *(unsigned int *)(v3 + 112);
    if ( (v7 & 0x10000) != 0 )
    {
      if ( !(_DWORD)result )
        CcInsertIntoDirtySharedCacheMapList(v3);
      LOBYTE(v4) = 1;
      return CcScheduleLazyWriteScan(v1, v5, v4);
    }
    if ( !(_DWORD)result && (v7 & 0x20) == 0 )
    {
      CcInsertIntoDirtySharedCacheMapList(v3);
      LOBYTE(v4) = v8 != 0;
      return CcScheduleLazyWriteScan(v1, v5, v4);
    }
  }
  return result;
}
