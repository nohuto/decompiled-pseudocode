/*
 * XREFs of ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x180039AC0
 * Callers:
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000A138 (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18003941C (--1CVisual@@MEAA@XZ.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x1800399A0 (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180039A04 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800F60E0 (-Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetVisualTree@CBackdropVisualImage@@EEBAPEAVCVisualTree@@XZ @ 0x1800F7850 (-GetVisualTree@CBackdropVisualImage@@EEBAPEAVCVisualTree@@XZ.c)
 *     ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x180168D04 (-Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z.c)
 *     ?AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ @ 0x1802360E4 (-AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802364E0 (-RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
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
