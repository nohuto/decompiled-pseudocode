/*
 * XREFs of VidMmEvictAllocation @ 0x14004BC80
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1400968B0 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PE.c)
 */

void __fastcall VidMmEvictAllocation(
        VIDMM_GLOBAL *a1,
        struct VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_MULTI_GLOBAL_ALLOC *a3,
        struct _D3DKMT_EVICTION_CRITERIA *a4)
{
  VIDMM_GLOBAL::VidMmEvictAllocation(a1, a2, a3, a4);
}
