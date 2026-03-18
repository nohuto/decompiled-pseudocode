/*
 * XREFs of ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x14033D4F0
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x14002E8E8 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ??1CAdapter@@IEAA@XZ @ 0x140098F40 (--1CAdapter@@IEAA@XZ.c)
 *     ?FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z @ 0x140099500 (-FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z.c)
 *     ??1CFlipAwayFence@@QEAA@XZ @ 0x140099E98 (--1CFlipAwayFence@@QEAA@XZ.c)
 * Callees:
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x14033D52C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkCddDestroySynchronizationObject(const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1)
{
  return DxgkDestroySynchronizationObjectImpl(a1, 0);
}
