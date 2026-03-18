/*
 * XREFs of ?QuerySegmentDirtyBitTrackingCaps@VIDMM_GLOBAL@@QEAAJGIPEAU_DXGK_DIRTY_BIT_TRACKING_SEGMENT_CAPS@@@Z @ 0x140099348
 * Callers:
 *     VidMmQuerySegmentDirtyBitTrackingCaps @ 0x14004BF60 (VidMmQuerySegmentDirtyBitTrackingCaps.c)
 * Callees:
 *     ?DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEBAIII@Z @ 0x14003C350 (-DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEBAIII@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QuerySegmentDirtyBitTrackingCaps(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        unsigned int a3,
        struct _DXGK_DIRTY_BIT_TRACKING_SEGMENT_CAPS *a4)
{
  unsigned int v4; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // r9
  int v10; // eax

  v4 = *((_DWORD *)this + 1736);
  if ( a2 >= v4 )
  {
    WdLogSingleEntry2(3LL, a2, v4);
    WdLogGlobalForLineNumber = 1037;
    return 3221225485LL;
  }
  v7 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2) + 64LL);
  if ( a3 >= v7 )
  {
    WdLogSingleEntry2(3LL, a3, v7);
    WdLogGlobalForLineNumber = 1047;
    return 3221225485LL;
  }
  v8 = VIDMM_GLOBAL::DriverSegmentIdToAdapterSegmentIndex(this, a2, a3);
  v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 1648) + 8LL * v8) + 536LL);
  *(_DWORD *)a4 = v10;
  return v10 == 0 ? 0xC0000002 : 0;
}
