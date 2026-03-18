/*
 * XREFs of VidMmTrimDmaPoolToMinimum @ 0x140097CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmTrimDmaPool@@YAXPEAUVIDMM_DMA_POOL@@_N@Z @ 0x140097668 (-VidMmTrimDmaPool@@YAXPEAUVIDMM_DMA_POOL@@_N@Z.c)
 */

void __fastcall VidMmTrimDmaPoolToMinimum(struct VIDMM_DMA_POOL *a1)
{
  VidMmTrimDmaPool(a1, 1);
}
