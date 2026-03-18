/*
 * XREFs of VidMmIsAllocationInPresentQueue @ 0x140045ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x140103830 (-IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_MULTI_ALLOC@@PEAI@Z.c)
 */

unsigned __int8 __fastcall VidMmIsAllocationInPresentQueue(
        VIDMM_GLOBAL *a1,
        struct VIDMM_MULTI_ALLOC *a2,
        unsigned int *a3)
{
  return VIDMM_GLOBAL::IsAllocationInPresentQueue(a1, a2, a3);
}
