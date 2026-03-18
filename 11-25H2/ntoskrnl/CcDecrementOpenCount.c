/*
 * XREFs of CcDecrementOpenCount @ 0x1402D9A30
 * Callers:
 *     CcPurgeCacheSection @ 0x1402C4260 (CcPurgeCacheSection.c)
 *     CcMdlWriteComplete2 @ 0x1402D2A60 (CcMdlWriteComplete2.c)
 *     CcFlushCachePostProcess @ 0x1402D9BE0 (CcFlushCachePostProcess.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1403A6780 (CcNotifyOfMappedWriteComplete.c)
 *     CcGetFlushedValidData @ 0x1403A68F0 (CcGetFlushedValidData.c)
 *     CcWriteBehindPreProcess @ 0x1403ACA84 (CcWriteBehindPreProcess.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403B5BF0 (CcUnmapInactiveViewsInternal.c)
 *     CcNotifyOfMappedWrite @ 0x14040ECD8 (CcNotifyOfMappedWrite.c)
 *     CcSetFileSizesEx @ 0x1404A5BD0 (CcSetFileSizesEx.c)
 *     CcPerformReadAhead @ 0x1404DE7C0 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1404E018C (CcCompleteAsyncRead.c)
 *     CcMdlWriteAbort @ 0x140579040 (CcMdlWriteAbort.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x1403A724C (CcNotifyWriteBehindInternal.c)
 *     CcScheduleLazyWriteScan @ 0x1403A79B0 (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehindVolume @ 0x1403A7B2C (CcNotifyWriteBehindVolume.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1404498E8 (CcInsertIntoDirtySharedCacheMapList.c)
 */

__int64 __fastcall CcDecrementOpenCount(__int64 a1)
{
  char v1; // r11
  __int64 result; // rax
  _BYTE *v3; // rdi
  __int64 v4; // rbx
  _BYTE *v5; // rax
  int v6; // edx
  __int64 v7; // r11
  __int64 v8; // r8

  v1 = CcEnablePerVolumeLazyWriter;
  result = (unsigned int)(*(_DWORD *)(a1 + 4) - 1);
  *(_DWORD *)(a1 + 4) = result;
  --*(_DWORD *)(a1 + 544);
  v3 = *(_BYTE **)(a1 + 536);
  if ( v1 )
    v4 = *(_QWORD *)(a1 + 600);
  else
    v4 = 0LL;
  if ( !*(_DWORD *)(a1 + 4) )
  {
    if ( v1 )
      v5 = (_BYTE *)(*(_QWORD *)(a1 + 600) + 986LL);
    else
      v5 = v3 + 1050;
    *v5 = 1;
    v6 = *(_DWORD *)(a1 + 152);
    result = *(unsigned int *)(a1 + 112);
    if ( (v6 & 0x10000) != 0 )
    {
      if ( !(_DWORD)result )
        CcInsertIntoDirtySharedCacheMapList(a1);
      if ( v1 )
      {
        result = CcNotifyWriteBehindVolume(v4, 8LL);
        if ( !*(_BYTE *)(v4 + 1172) )
          *(_BYTE *)(v4 + 985) = 1;
      }
      else
      {
        result = CcNotifyWriteBehindInternal(v3, 8LL);
        if ( !v3[1292] )
          v3[1049] = 1;
      }
    }
    else if ( !(_DWORD)result && (v6 & 0x20) == 0 )
    {
      CcInsertIntoDirtySharedCacheMapList(a1);
      LOBYTE(v8) = v7 != 0;
      return CcScheduleLazyWriteScan(v3, v4, v8, 0LL);
    }
  }
  return result;
}
