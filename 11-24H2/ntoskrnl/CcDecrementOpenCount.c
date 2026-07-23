/*
 * XREFs of CcDecrementOpenCount @ 0x140279504
 * Callers:
 *     CcPurgeCacheSection @ 0x1402070C0 (CcPurgeCacheSection.c)
 *     CcFlushCachePostProcess @ 0x1402791F0 (CcFlushCachePostProcess.c)
 *     CcWriteBehindPreProcess @ 0x14027A224 (CcWriteBehindPreProcess.c)
 *     CcNotifyOfMappedWrite @ 0x1402EDA4C (CcNotifyOfMappedWrite.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403EE88C (CcUnmapInactiveViewsInternal.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14040B624 (CcNotifyOfMappedWriteComplete.c)
 *     CcGetFlushedValidData @ 0x14040B790 (CcGetFlushedValidData.c)
 *     CcMdlWriteComplete2 @ 0x1404567A4 (CcMdlWriteComplete2.c)
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 *     CcPerformReadAhead @ 0x1404D78D0 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1404D929C (CcCompleteAsyncRead.c)
 *     CcMdlWriteAbort @ 0x1405797E0 (CcMdlWriteAbort.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140264F40 (CcScheduleLazyWriteScan.c)
 *     CcGetPrivateVolumeCacheMap @ 0x1402E6230 (CcGetPrivateVolumeCacheMap.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14043F66C (CcInsertIntoDirtySharedCacheMapList.c)
 */

char __fastcall CcDecrementOpenCount(__int64 a1)
{
  _BYTE *v1; // rbx
  __int64 PrivateVolumeCacheMap; // rax
  __int64 v3; // rcx
  _BYTE *v4; // rdi
  _BYTE *v5; // rdx
  int v6; // edx
  char v7; // r9
  char v8; // r8
  __int64 v9; // r11

  --*(_DWORD *)(a1 + 4);
  --*(_DWORD *)(a1 + 544);
  v1 = *(_BYTE **)(a1 + 536);
  PrivateVolumeCacheMap = CcGetPrivateVolumeCacheMap();
  v4 = (_BYTE *)PrivateVolumeCacheMap;
  if ( !*(_DWORD *)(v3 + 4) )
  {
    if ( CcEnablePerVolumeLazyWriter )
      v5 = (_BYTE *)(*(_QWORD *)(v3 + 600) + 986LL);
    else
      v5 = v1 + 1050;
    *v5 = 1;
    v6 = *(_DWORD *)(v3 + 152);
    LODWORD(PrivateVolumeCacheMap) = *(_DWORD *)(v3 + 112);
    if ( (v6 & 0x10000) != 0 )
    {
      if ( !(_DWORD)PrivateVolumeCacheMap )
        CcInsertIntoDirtySharedCacheMapList(v3);
      v7 = 1;
      v8 = 1;
      goto LABEL_12;
    }
    if ( !(_DWORD)PrivateVolumeCacheMap && (v6 & 0x20) == 0 )
    {
      CcInsertIntoDirtySharedCacheMapList(v3);
      v8 = v9 != 0;
      v7 = 0;
LABEL_12:
      LOBYTE(PrivateVolumeCacheMap) = CcScheduleLazyWriteScan(v1, v4, v8, v7);
    }
  }
  return PrivateVolumeCacheMap;
}
