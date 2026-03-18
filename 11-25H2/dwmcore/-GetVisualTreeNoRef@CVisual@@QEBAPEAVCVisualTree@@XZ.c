/*
 * XREFs of ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1801095D0
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18000A124 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000C068 (-UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800811C0 (-Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetVisualTree@CBackdropVisualImage@@EEBAPEAVCVisualTree@@XZ @ 0x180082880 (-GetVisualTree@CBackdropVisualImage@@EEBAPEAVCVisualTree@@XZ.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18009BA30 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180108F2C (--1CVisual@@MEAA@XZ.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x1801094B0 (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180109514 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x18010AADC (-Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z.c)
 *     ?AddCursorInvalidRects_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAXXZ @ 0x18028D2AC (-AddCursorInvalidRects_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?AddCursorInvalidRects_Feature_FixCaptureMagnifierCursors_On@CCaptureRenderTarget@@IEAAXXZ @ 0x18028D3B4 (-AddCursorInvalidRects_Feature_FixCaptureMagnifierCursors_On@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028DA5C (-RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingCon.c)
 *     ?RenderCursors_Feature_FixCaptureMagnifierCursors_On@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028DE74 (-RenderCursors_Feature_FixCaptureMagnifierCursors_On@CCaptureRenderTarget@@IEAAJPEAVCDrawingCont.c)
 * Callees:
 *     <none>
 */

struct CVisualTree *__fastcall CVisual::GetVisualTreeNoRef(CVisual *this)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx
  _BYTE *v3; // r8
  __int64 v4; // rcx
  unsigned int i; // r9d

  v1 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v1 & 0x8000000) == 0 )
    return 0LL;
  v2 = (unsigned int)v1[1];
  v3 = v1 + 2;
  v4 = 0LL;
  for ( i = 0; i < (unsigned int)v2; ++v3 )
  {
    if ( *v3 == 5 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v2 )
    v4 = (__int64)v1 + 8LL * i - (((_BYTE)v2 + 15) & 7) + v2 + 15;
  return *(struct CVisualTree **)v4;
}
