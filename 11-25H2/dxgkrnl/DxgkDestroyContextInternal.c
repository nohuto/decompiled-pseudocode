/*
 * XREFs of DxgkDestroyContextInternal @ 0x14018A308
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x14002E8E8 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x14005E490 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 *     ??1CAdapter@@IEAA@XZ @ 0x140098F40 (--1CAdapter@@IEAA@XZ.c)
 *     ?FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z @ 0x140099500 (-FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z.c)
 *     ?FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z @ 0x140099588 (-FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z.c)
 * Callees:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1403AE468 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
 */

__int64 __fastcall DxgkDestroyContextInternal(const struct _D3DKMT_DESTROYCONTEXT *a1)
{
  return DxgkDestroyContextImpl(a1, 0);
}
