/*
 * XREFs of VidMmWaitOnAllocationDmaReferences @ 0x14003FF50
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@IK@Z @ 0x1400ACDBC (-WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@IK@Z.c)
 */

__int64 __fastcall VidMmWaitOnAllocationDmaReferences(
        VIDMM_GLOBAL *a1,
        struct VIDMM_MULTI_ALLOC *a2,
        unsigned int a3,
        unsigned int a4)
{
  return VIDMM_GLOBAL::WaitOnAllocationDmaReferences(a1, a2, a3, a4);
}
