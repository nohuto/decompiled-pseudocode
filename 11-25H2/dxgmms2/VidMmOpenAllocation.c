/*
 * XREFs of VidMmOpenAllocation @ 0x1400397A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@IPEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_MULTI_ALLOC@@PEAIPEAE@Z @ 0x1400E7BC4 (-OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@IPEAX_NPEAVDX.c)
 */

__int64 __fastcall VidMmOpenAllocation(
        VIDMM_GLOBAL *a1,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MULTI_GLOBAL_ALLOC *a3,
        unsigned int a4,
        void *a5,
        bool a6,
        struct DXGALLOCATION *a7,
        struct VIDMM_MULTI_ALLOC **a8,
        unsigned int *a9,
        unsigned __int8 *a10)
{
  return VIDMM_GLOBAL::OpenAllocation(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
