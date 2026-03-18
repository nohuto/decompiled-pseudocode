/*
 * XREFs of ?DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEBAIII@Z @ 0x14003E330
 * Callers:
 *     ?CreateVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAJPEAVVIDMM_GLOBAL@@PEAVDXGK_DIRTY_BITPLANE@@_KPEAPEAV1@@Z @ 0x14004E8D8 (-CreateVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAJPEAVVIDMM_GLOBAL@@PEAVDXGK_DIRTY_BITPLANE@@_K.c)
 *     ?QuerySegmentDirtyBitTrackingCaps@VIDMM_GLOBAL@@QEAAJGIPEAU_DXGK_DIRTY_BIT_TRACKING_SEGMENT_CAPS@@@Z @ 0x1400991C8 (-QuerySegmentDirtyBitTrackingCaps@VIDMM_GLOBAL@@QEAAJGIPEAU_DXGK_DIRTY_BIT_TRACKING_SEGMENT_CAPS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::DriverSegmentIdToAdapterSegmentIndex(VIDMM_GLOBAL *this, unsigned int a2, int a3)
{
  if ( a3 )
    return (unsigned int)(a3 - 1);
  else
    return *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2) + 68LL);
}
