/*
 * XREFs of VidMmReferencePrimaryAllocationForSubmission @ 0x140039270
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferencePrimaryAllocationForSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400FE440 (-ReferencePrimaryAllocationForSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_AL.c)
 */

__int64 __fastcall VidMmReferencePrimaryAllocationForSubmission(
        struct VIDMM_DEVICE *a1,
        struct VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_ALLOC **a3)
{
  return VIDMM_GLOBAL::ReferencePrimaryAllocationForSubmission(a1, a1, a2, a3);
}
