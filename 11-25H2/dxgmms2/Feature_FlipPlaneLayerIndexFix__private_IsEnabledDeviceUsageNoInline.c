/*
 * XREFs of Feature_FlipPlaneLayerIndexFix__private_IsEnabledDeviceUsageNoInline @ 0x14004F6C8
 * Callers:
 *     ?VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_VIDSCH_FLIP_STATUS@@PEAVHwQueueStagingList@@@Z @ 0x14000BADC (-VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_E.c)
 *     ?VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1400117BC (-VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     ?VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1400129C0 (-VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x14003A8E8 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 * Callees:
 *     Feature_FlipPlaneLayerIndexFix__private_IsEnabledFallback @ 0x14004F700 (Feature_FlipPlaneLayerIndexFix__private_IsEnabledFallback.c)
 */

__int64 Feature_FlipPlaneLayerIndexFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FlipPlaneLayerIndexFix__private_featureState & 0x10) != 0 )
    return Feature_FlipPlaneLayerIndexFix__private_featureState & 1;
  else
    return Feature_FlipPlaneLayerIndexFix__private_IsEnabledFallback(
             (unsigned int)Feature_FlipPlaneLayerIndexFix__private_featureState,
             3LL);
}
