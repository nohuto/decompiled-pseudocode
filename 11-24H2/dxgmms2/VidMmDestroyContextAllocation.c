/*
 * XREFs of VidMmDestroyContextAllocation @ 0x1400417A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400A9994 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CONTEXT_ALLOC@@@Z.c)
 */

int __fastcall VidMmDestroyContextAllocation(VIDMM_GLOBAL *a1, struct VIDMM_CONTEXT_ALLOC *a2)
{
  return VIDMM_GLOBAL::DestroyContextAllocation(a1, a2);
}
