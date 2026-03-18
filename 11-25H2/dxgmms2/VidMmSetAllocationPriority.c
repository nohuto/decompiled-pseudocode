/*
 * XREFs of VidMmSetAllocationPriority @ 0x140043620
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x1400E658C (-SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@I@Z.c)
 */

void __fastcall VidMmSetAllocationPriority(VIDMM_GLOBAL *a1, struct VIDMM_MULTI_ALLOC *a2, unsigned int a3)
{
  VIDMM_GLOBAL::SetAllocationPriority(a1, a2, a3);
}
