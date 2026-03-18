/*
 * XREFs of ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1800FD464
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18013F440 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180072D70 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800D0D60 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800F7058 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x1800FC750 (-ApplyRenderState@CDrawingContext@@UEAAJXZ.c)
 *     ?HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ @ 0x1800FD6F8 (-HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ.c)
 *     ?DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800FD720 (-DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x1800FDA1C (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x1800FDDF0 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Pop@CBaseClipStack@@QEAAXXZ @ 0x1800FDFC0 (-Pop@CBaseClipStack@@QEAAXXZ.c)
 *     ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18014CC9C (-GetWidenedBounds@CShape@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::StrokeShapeWithBrush(
        __m128 *this,
        const struct CShape *a2,
        struct ID2D1Brush *a3,
        float a4,
        struct ID2D1StrokeStyle1 *a5)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 (__fastcall *v9)(CRoundedRectangleShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  unsigned int v12; // edi
  __int64 (*v13)(void); // rax
  int v14; // eax
  enum D2D1_PRIMITIVE_BLEND v15; // eax
  __int64 v16; // r11
  int v17; // eax
  int WidenedBounds; // eax
  int v20; // eax
  unsigned int v21; // [rsp+28h] [rbp-51h]
  struct ID2D1Geometry *v22; // [rsp+48h] [rbp-31h] BYREF
  __int64 v23; // [rsp+50h] [rbp-29h] BYREF
  __int128 v24; // [rsp+58h] [rbp-21h]
  __int128 v25; // [rsp+68h] [rbp-11h] BYREF
  int v26; // [rsp+78h] [rbp-1h]
  int v27; // [rsp+7Ch] [rbp+3h]

  v5 = *(_QWORD *)a2;
  v6 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v9 = *(__int64 (__fastcall **)(CRoundedRectangleShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(v5 + 24);
  if ( v9 == CPathSegmentsShape::GetD2DGeometry )
  {
    D2DGeometry = CPathSegmentsShape::GetD2DGeometry(a2, 0LL, &v22);
  }
  else if ( v9 == CRoundedRectangleShape::GetD2DGeometry )
  {
    D2DGeometry = CRoundedRectangleShape::GetD2DGeometry(a2, 0LL, &v22);
  }
  else
  {
    D2DGeometry = v9(a2, 0LL, &v22);
  }
  v12 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    v21 = 2674;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v21, 0LL);
    goto LABEL_10;
  }
  if ( !CScopedClipStack::HasDeferredD2DLayers((CScopedClipStack *)&this[46].m128_u16[4]) )
  {
LABEL_5:
    v13 = *(__int64 (**)(void))(this[1].m128_u64[0] + 112);
    if ( (char *)v13 == (char *)CDrawingContext::ApplyRenderState )
      v14 = CDrawingContext::ApplyRenderState(this + 1);
    else
      v14 = v13();
    v12 = v14;
    if ( v14 >= 0 )
    {
      v15 = (unsigned int)D2DPrimitiveBlendFromMilCompositingMode(this[15].m128_u32[2]);
      v17 = CD2DContext::DrawShape(
              (CD2DContext *)(v16 + 16),
              (const struct ID2DContextOwner *)((unsigned __int64)&this[1].m128_u64[1] & -(__int64)(this != 0LL)),
              v22,
              a3,
              a4,
              a5,
              (enum D2D1_ANTIALIAS_MODE)(this[15].m128_i32[1] != 0),
              v15);
      v12 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0xA86u, 0LL);
      goto LABEL_10;
    }
    v21 = 2686;
    goto LABEL_23;
  }
  v24 = 0LL;
  WidenedBounds = CShape::GetWidenedBounds(a2);
  v12 = WidenedBounds;
  if ( WidenedBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, WidenedBounds, 0xA79u, 0LL);
    goto LABEL_12;
  }
  v26 = 0;
  v27 = 0;
  v25 = v24;
  v20 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(&v23, (__int64)this, (__int64)&v25);
  v12 = v20;
  if ( v20 >= 0 )
  {
    v6 = v23;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0xA7Bu, 0LL);
  v6 = v23;
LABEL_10:
  if ( v6 )
  {
    CBaseClipStack::Pop((CBaseClipStack *)(v6 + 3112));
    --*(_QWORD *)(*(_QWORD *)(v6 + 752) - 184LL);
    *(_BYTE *)(v6 + 8065) = 1;
    CDrawingContext::PopClippingScope((CDrawingContext *)v6, 0);
  }
LABEL_12:
  if ( v22 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v22 + 16LL))(v22);
  return v12;
}
