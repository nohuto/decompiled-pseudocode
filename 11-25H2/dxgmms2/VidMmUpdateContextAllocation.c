/*
 * XREFs of VidMmUpdateContextAllocation @ 0x14004C990
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x140112398 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 */

__int64 __fastcall VidMmUpdateContextAllocation(VIDMM_GLOBAL *a1, const struct _DXGKARGCB_UPDATECONTEXTALLOCATION *a2)
{
  return VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(a1, a2, 0);
}
