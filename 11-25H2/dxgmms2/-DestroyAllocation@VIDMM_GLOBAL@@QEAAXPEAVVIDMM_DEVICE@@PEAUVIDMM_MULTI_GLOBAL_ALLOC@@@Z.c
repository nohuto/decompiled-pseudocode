/*
 * XREFs of ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1400B8AD4
 * Callers:
 *     VidMmDestroyAllocation @ 0x140039E10 (VidMmDestroyAllocation.c)
 * Callees:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400B8AEC (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MULTI_GLOBAL_ALLOC *a3)
{
  VIDMM_GLOBAL::DestroyOneAllocation(this, a2, a3, 0);
}
