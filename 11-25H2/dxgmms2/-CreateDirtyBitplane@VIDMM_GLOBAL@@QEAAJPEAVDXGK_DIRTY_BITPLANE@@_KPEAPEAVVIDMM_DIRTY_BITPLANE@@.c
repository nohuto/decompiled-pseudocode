/*
 * XREFs of ?CreateDirtyBitplane@VIDMM_GLOBAL@@QEAAJPEAVDXGK_DIRTY_BITPLANE@@_KPEAPEAVVIDMM_DIRTY_BITPLANE@@@Z @ 0x140092DC4
 * Callers:
 *     VidMmCreateDirtyBitplane @ 0x14004C4A0 (VidMmCreateDirtyBitplane.c)
 * Callees:
 *     ?CreateVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAJPEAVVIDMM_GLOBAL@@PEAVDXGK_DIRTY_BITPLANE@@_KPEAPEAV1@@Z @ 0x14004E8D8 (-CreateVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAJPEAVVIDMM_GLOBAL@@PEAVDXGK_DIRTY_BITPLANE@@_K.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateDirtyBitplane(
        VIDMM_GLOBAL *this,
        struct _RTL_BITMAP *a2,
        unsigned __int64 a3,
        struct VIDMM_DIRTY_BITPLANE **a4)
{
  return VIDMM_DIRTY_BITPLANE::CreateVidMmDirtyBitplane(this, a2, a3, a4);
}
