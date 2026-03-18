/*
 * XREFs of VidMmEvictionTest @ 0x14004BCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?EvictionTest@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x140093BA0 (-EvictionTest@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL.c)
 */

__int64 __fastcall VidMmEvictionTest(
        VIDMM_GLOBAL *a1,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MULTI_ALLOC *a3,
        struct VIDMM_MULTI_GLOBAL_ALLOC *a4)
{
  return VIDMM_GLOBAL::EvictionTest(a1, a2, a3, a4);
}
