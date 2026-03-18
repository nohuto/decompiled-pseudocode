/*
 * XREFs of VidMmWaitOnAllocationPresentQueue @ 0x14004C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x1400CEA28 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z.c)
 */

__int64 __fastcall VidMmWaitOnAllocationPresentQueue(VIDMM_GLOBAL *a1, struct VIDMM_MULTI_ALLOC *a2, unsigned int a3)
{
  return VIDMM_GLOBAL::WaitOnAllocationPresentQueue(a1, a2, a3);
}
