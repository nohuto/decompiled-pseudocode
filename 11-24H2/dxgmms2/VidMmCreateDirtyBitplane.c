/*
 * XREFs of VidMmCreateDirtyBitplane @ 0x14004BBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateDirtyBitplane@VIDMM_GLOBAL@@QEAAJPEAVDXGK_DIRTY_BITPLANE@@_KPEAPEAVVIDMM_DIRTY_BITPLANE@@@Z @ 0x140092ED4 (-CreateDirtyBitplane@VIDMM_GLOBAL@@QEAAJPEAVDXGK_DIRTY_BITPLANE@@_KPEAPEAVVIDMM_DIRTY_BITPLANE@@.c)
 */

__int64 __fastcall VidMmCreateDirtyBitplane(
        VIDMM_GLOBAL *a1,
        struct DXGK_DIRTY_BITPLANE *a2,
        unsigned __int64 a3,
        struct VIDMM_DIRTY_BITPLANE **a4)
{
  return VIDMM_GLOBAL::CreateDirtyBitplane(a1, a2, a3, a4);
}
