/*
 * XREFs of gsl::final_action__lambda_b778ccec937677c8d794b2b5e6f06977___::_final_action__lambda_b778ccec937677c8d794b2b5e6f06977___ @ 0x1800F5C54
 * Callers:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006CC40 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180137450 (-Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18026494C (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 * Callees:
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5C80 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

void __fastcall gsl::final_action__lambda_b778ccec937677c8d794b2b5e6f06977___::_final_action__lambda_b778ccec937677c8d794b2b5e6f06977___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    CDrawingContext::PopTransformInternal(*(CDrawingContext **)a1, 1);
}
