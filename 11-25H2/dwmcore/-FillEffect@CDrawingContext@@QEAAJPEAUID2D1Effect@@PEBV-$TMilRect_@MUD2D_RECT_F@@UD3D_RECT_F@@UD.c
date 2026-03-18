/*
 * XREFs of ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180118418
 * Callers:
 *     ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x180115728 (-RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180117910 (-RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180224CC0 (-RenderLayer@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x1802BB74C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E7D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180080A10 (-FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@QEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x1800E09BC (-GetD2DInterpolationMode@CDrawingContext@@QEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118590 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::FillEffect(
        const void **this,
        struct ID2D1Effect *a2,
        struct D2D_RECT_F *a3,
        struct D2D_POINT_2F *a4,
        char a5)
{
  char v9; // si
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  enum D2D1_INTERPOLATION_MODE D2DInterpolationMode; // eax
  __int64 v14; // r10
  enum D2D1_COMPOSITE_MODE v15; // r9d
  int v16; // eax

  v9 = 0;
  if ( a5 )
  {
    v10 = CDrawingContext::PushTransformInternal(this, 0LL, (__m128 *)&CMILMatrix::Identity, 0, 1);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xA0Eu, 0LL);
      return v11;
    }
    v9 = 1;
  }
  v12 = (*((__int64 (__fastcall **)(char *))this[2] + 14))((char *)this + 16);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xA17u, 0LL);
  }
  else
  {
    D2DInterpolationMode = (unsigned int)CDrawingContext::GetD2DInterpolationMode((CDrawingContext *)this);
    v15 = D2D1_COMPOSITE_MODE_MASK_INVERT;
    if ( *((_DWORD *)this + 62) != 2 )
      v15 = D2D1_COMPOSITE_MODE_SOURCE_OVER;
    v16 = CD2DContext::FillEffect(
            (ID2D1DeviceContext **)(v14 + 16),
            (const struct ID2DContextOwner *)((unsigned __int64)(this + 3) & -(__int64)(this != 0LL)),
            a2,
            a3,
            a4,
            D2DInterpolationMode,
            v15);
    v11 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0xA1Eu, 0LL);
  }
  if ( v9 )
    CDrawingContext::PopTransformInternal((CDrawingContext *)this, 1);
  return v11;
}
