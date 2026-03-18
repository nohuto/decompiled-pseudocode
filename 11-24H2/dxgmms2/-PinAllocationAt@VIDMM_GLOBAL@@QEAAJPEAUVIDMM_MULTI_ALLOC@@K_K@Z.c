/*
 * XREFs of ?PinAllocationAt@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@K_K@Z @ 0x1400960B8
 * Callers:
 *     VidMmPinAllocationAt @ 0x14004BEC0 (VidMmPinAllocationAt.c)
 * Callees:
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1400DADBC (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@K_KPEA_K@Z.c)
 */

int __fastcall VIDMM_GLOBAL::PinAllocationAt(
        VIDMM_GLOBAL *this,
        struct VIDMM_MULTI_ALLOC *a2,
        unsigned int a3,
        unsigned __int64 a4)
{
  return VIDMM_GLOBAL::PinOneAllocation(this, a2, 0LL, a3, a4, 0LL);
}
