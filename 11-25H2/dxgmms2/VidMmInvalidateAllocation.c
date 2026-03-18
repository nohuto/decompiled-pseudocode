/*
 * XREFs of VidMmInvalidateAllocation @ 0x14004C6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1400955B4 (-InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VidMmInvalidateAllocation(VIDMM_GLOBAL *a1, struct VIDMM_MULTI_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL::InvalidateAllocation(a1, a2);
}
