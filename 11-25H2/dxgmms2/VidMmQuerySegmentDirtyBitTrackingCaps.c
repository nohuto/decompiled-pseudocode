/*
 * XREFs of VidMmQuerySegmentDirtyBitTrackingCaps @ 0x14004C850
 * Callers:
 *     <none>
 * Callees:
 *     ?QuerySegmentDirtyBitTrackingCaps@VIDMM_GLOBAL@@QEAAJGIPEAU_DXGK_DIRTY_BIT_TRACKING_SEGMENT_CAPS@@@Z @ 0x1400991C8 (-QuerySegmentDirtyBitTrackingCaps@VIDMM_GLOBAL@@QEAAJGIPEAU_DXGK_DIRTY_BIT_TRACKING_SEGMENT_CAPS.c)
 */

int __fastcall VidMmQuerySegmentDirtyBitTrackingCaps(
        VIDMM_GLOBAL *a1,
        unsigned __int16 a2,
        unsigned int a3,
        struct _DXGK_DIRTY_BIT_TRACKING_SEGMENT_CAPS *a4)
{
  return VIDMM_GLOBAL::QuerySegmentDirtyBitTrackingCaps(a1, a2, a3, a4);
}
