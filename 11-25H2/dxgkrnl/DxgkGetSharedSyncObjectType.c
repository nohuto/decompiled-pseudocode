/*
 * XREFs of DxgkGetSharedSyncObjectType @ 0x1403EA6D0
 * Callers:
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z @ 0x1400091E8 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z.c)
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x14002E8E8 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ?Initialize@CFlipManager@@IEAAJPEAX@Z @ 0x14005B880 (-Initialize@CFlipManager@@IEAAJPEAX@Z.c)
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x140099200 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 *     ?Initialize@CFlipAwayFence@@AEAAJAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z @ 0x140099FB8 (-Initialize@CFlipAwayFence@@AEAAJAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z.c)
 * Callees:
 *     <none>
 */

POBJECT_TYPE DxgkGetSharedSyncObjectType()
{
  return g_pDxgkSharedSyncObjectType;
}
