/*
 * XREFs of DxgkCreateContextVirtualInternal @ 0x1401B6950
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x14002E8E8 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x140099200 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 *     ?GetSyncContextForFlipManager@CAdapter@@IEAAJPEAUFlipManagerObject@@PEAPEAUFlipManagerSyncContext@1@@Z @ 0x1400995EC (-GetSyncContextForFlipManager@CAdapter@@IEAAJPEAUFlipManagerObject@@PEAPEAUFlipManagerSyncContex.c)
 * Callees:
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x140338218 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 */

__int64 __fastcall DxgkCreateContextVirtualInternal(struct _D3DKMT_CREATECONTEXTVIRTUAL *a1)
{
  return DxgkCreateContextVirtualImpl(a1, 0);
}
