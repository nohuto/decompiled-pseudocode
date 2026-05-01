/*
 * XREFs of ?DrawBitmap@ID2D1RenderTarget@@QEAAXPEAUID2D1Bitmap@@AEBUD2D_RECT_F@@MW4D2D1_BITMAP_INTERPOLATION_MODE@@PEBU3@@Z @ 0x1804C1B4C
 * Callers:
 *     ?_RenderIcon@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1804C2C64 (-_RenderIcon@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z.c)
 *     ?CreateVisualFromBitmap@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1Bitmap1@@AEBUtagSIZE@@PEAPEAUIDCompositionVisual@@@Z @ 0x18067A4D0 (-CreateVisualFromBitmap@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1Bitmap1@@AEBUtagSIZE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ID2D1RenderTarget::DrawBitmap(
        ID2D1RenderTarget *this,
        struct ID2D1Bitmap *a2,
        const struct D2D_RECT_F *a3,
        float a4)
{
  (*(void (__fastcall **)(ID2D1RenderTarget *, struct ID2D1Bitmap *, const struct D2D_RECT_F *))(*(_QWORD *)this + 208LL))(
    this,
    a2,
    a3);
}
