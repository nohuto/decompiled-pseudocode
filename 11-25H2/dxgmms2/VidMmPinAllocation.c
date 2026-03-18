/*
 * XREFs of VidMmPinAllocation @ 0x140042520
 * Callers:
 *     <none>
 * Callees:
 *     ?PinAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400E6878 (-PinAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_.c)
 */

__int64 __fastcall VidMmPinAllocation(
        VIDMM_GLOBAL *a1,
        struct VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        unsigned int *a4,
        union _LARGE_INTEGER *a5,
        unsigned __int64 *a6)
{
  return VIDMM_GLOBAL::PinAllocation(a1, a2, a3, a4, a5, a6);
}
