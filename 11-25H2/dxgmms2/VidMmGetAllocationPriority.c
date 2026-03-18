/*
 * XREFs of VidMmGetAllocationPriority @ 0x14004C610
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x140093E34 (-GetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAI@Z.c)
 */

void __fastcall VidMmGetAllocationPriority(VIDMM_GLOBAL *a1, struct VIDMM_MULTI_ALLOC *a2, unsigned int *a3)
{
  VIDMM_GLOBAL::GetAllocationPriority(a1, a2, a3);
}
