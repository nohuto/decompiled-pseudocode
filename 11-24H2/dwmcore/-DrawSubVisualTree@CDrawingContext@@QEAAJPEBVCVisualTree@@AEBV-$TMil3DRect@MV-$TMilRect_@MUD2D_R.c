/*
 * XREFs of ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800F6564
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Draw@CRedirectedVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800F4D50 (-Draw@CRedirectedVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800F60E0 (-Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180167898 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180168E10 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180072B00 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ @ 0x18009CB00 (-GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     ??1CSubDrawingContext@@QEAA@XZ @ 0x1800F6768 (--1CSubDrawingContext@@QEAA@XZ.c)
 *     ?DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEBVCOcclusionContext@@@Z @ 0x1800F6810 (-DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 *     ??R?$default_delete@VCOcclusionContext@@@std@@QEBAXPEAVCOcclusionContext@@@Z @ 0x1800F7584 (--R-$default_delete@VCOcclusionContext@@@std@@QEBAXPEAVCOcclusionContext@@@Z.c)
 *     ?CalcOcclusion@CVisualTree@@UEBAJAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x1800F7870 (-CalcOcclusion@CVisualTree@@UEBAJAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ??0COcclusionContext@@QEAA@XZ @ 0x1800F8168 (--0COcclusionContext@@QEAA@XZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18016A440 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?IsRectInOcclusionRegion@COcclusionContext@@QEBA_NAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801CDE90 (-IsRectInOcclusionRegion@COcclusionContext@@QEBA_NAEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawSubVisualTree(
        __int64 a1,
        struct CVisualTree *a2,
        unsigned int *a3,
        CMILMatrix *a4)
{
  double v4; // xmm2_8
  CMILMatrix *TopByReference; // r12
  __int64 v9; // rdi
  COcclusionContext *v10; // rbx
  COcclusionContext *v11; // rax
  __int64 v12; // rax
  __int64 (__fastcall *v13)(struct CVisualTree *); // rax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rcx
  const struct COcclusionContext *SharedOcclusionContext; // r14
  _QWORD v20[2]; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v21[4]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v22; // [rsp+68h] [rbp-9h]
  __int64 v23; // [rsp+78h] [rbp+7h]
  __int64 v24; // [rsp+80h] [rbp+Fh]
  __int64 v25; // [rsp+88h] [rbp+17h]
  __int64 v26; // [rsp+90h] [rbp+1Fh]
  int v27; // [rsp+98h] [rbp+27h]
  char v28; // [rsp+A0h] [rbp+2Fh]

  TopByReference = a4;
  v9 = 0LL;
  v10 = 0LL;
  if ( !a4 )
    TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 288));
  if ( CMILMatrix::Is2DAxisAlignedPreserving(TopByReference) )
  {
    if ( !*(_QWORD *)(a1 + 200)
      && (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2)
      && (SharedOcclusionContext = CDesktopTree::GetSharedOcclusionContext(a2)) != 0LL
      && (PixelAlign((int *)v20, a3, v4),
          (unsigned __int8)COcclusionContext::IsRectInOcclusionRegion(SharedOcclusionContext, v20)) )
    {
      v9 = (__int64)SharedOcclusionContext;
    }
    else
    {
      v11 = (COcclusionContext *)operator new(0x730uLL);
      if ( v11 )
        v10 = COcclusionContext::COcclusionContext(v11);
      else
        v10 = 0LL;
      v12 = *(_QWORD *)(a1 + 200);
      if ( v12 )
        *((_QWORD *)v10 + 194) = v12;
      v20[0] = 1LL;
      v20[1] = a3;
      if ( !a3 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v13 = *(__int64 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)a2 + 200LL);
      if ( v13 == CVisualTree::CalcOcclusion )
        v14 = CVisualTree::CalcOcclusion(a2);
      else
        v14 = ((__int64 (__fastcall *)(struct CVisualTree *, _QWORD *, COcclusionContext *))v13)(a2, v20, v10);
      if ( v14 >= 0 )
        v9 = (__int64)v10;
    }
  }
  v23 = 0LL;
  v21[0] = a1;
  v22 = 0LL;
  memset(&v21[1], 0, 24);
  v24 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v27 = 16843008;
  v28 = 0;
  v15 = CSubDrawingContext::DrawVisualTree((CSubDrawingContext *)v21, a2, v9);
  v16 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xBE0u, 0LL);
  CSubDrawingContext::~CSubDrawingContext((CSubDrawingContext *)v21);
  if ( v10 )
    std::default_delete<COcclusionContext>::operator()(v17, v10);
  return v16;
}
