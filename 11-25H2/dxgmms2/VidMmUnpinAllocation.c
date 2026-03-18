/*
 * XREFs of VidMmUnpinAllocation @ 0x140045210
 * Callers:
 *     <none>
 * Callees:
 *     ?UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400CE9B8 (-UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@@Z.c)
 */

void __fastcall VidMmUnpinAllocation(VIDMM_GLOBAL *a1, struct VIDMM_MULTI_ALLOC *a2)
{
  VIDMM_GLOBAL::UnpinAllocation(a1, a2);
}
