/*
 * XREFs of ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1800DD364
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180013240 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18007BB8C (-GetWidenedBounds@CShape@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180081FD8 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180089900 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800A45E0 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x1800DBF10 (-ApplyRenderState@CDrawingContext@@UEAAJXZ.c)
 *     ?HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ @ 0x1800DD5F8 (-HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ.c)
 *     ?DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800DD620 (-DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x1800DD91C (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x180114E40 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Pop@CBaseClipStack@@QEAAXXZ @ 0x1801178F0 (-Pop@CBaseClipStack@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::StrokeShapeWithBrush(
        __m128 *this,
        const struct CShape *a2,
        struct ID2D1Brush *a3,
        float a4,
        struct ID2D1StrokeStyle1 *a5)
{
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 (__fastcall *v10)(const struct CShape *, _QWORD, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  unsigned int v13; // edi
  __int64 v14; // r8
  __int64 (*v15)(void); // rax
  int v16; // eax
  enum D2D1_PRIMITIVE_BLEND v17; // eax
  __int64 v18; // r11
  int v19; // eax
  int WidenedBounds; // eax
  int v22; // eax
  unsigned int v23; // [rsp+28h] [rbp-51h]
  struct ID2D1Geometry *v24; // [rsp+48h] [rbp-31h] BYREF
  __int64 v25; // [rsp+50h] [rbp-29h] BYREF
  __int128 v26; // [rsp+58h] [rbp-21h] BYREF
  __int128 v27; // [rsp+68h] [rbp-11h] BYREF
  int v28; // [rsp+78h] [rbp-1h]
  int v29; // [rsp+7Ch] [rbp+3h]

  v6 = *(_QWORD *)a2;
  v7 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v10 = *(__int64 (__fastcall **)(const struct CShape *, _QWORD, struct ID2D1Geometry **))(v6 + 24);
  if ( (char *)v10 == (char *)CPathSegmentsShape::GetD2DGeometry )
  {
    D2DGeometry = CPathSegmentsShape::GetD2DGeometry(a2, 0LL, &v24);
  }
  else if ( (char *)v10 == (char *)CRoundedRectangleShape::GetD2DGeometry )
  {
    D2DGeometry = CRoundedRectangleShape::GetD2DGeometry(a2, 0LL, &v24, v5);
  }
  else
  {
    D2DGeometry = v10(a2, 0LL, &v24);
  }
  v13 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    v23 = 2674;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v23, 0LL);
    goto LABEL_10;
  }
  if ( !CScopedClipStack::HasDeferredD2DLayers((CScopedClipStack *)&this[46].m128_u16[4]) )
  {
LABEL_5:
    v15 = *(__int64 (**)(void))(this[1].m128_u64[0] + 112);
    if ( (char *)v15 == (char *)CDrawingContext::ApplyRenderState )
      v16 = CDrawingContext::ApplyRenderState(this + 1);
    else
      v16 = v15();
    v13 = v16;
    if ( v16 >= 0 )
    {
      v17 = (unsigned int)D2DPrimitiveBlendFromMilCompositingMode(this[15].m128_u32[2]);
      v19 = CD2DContext::DrawShape(
              (CD2DContext *)(v18 + 16),
              (const struct ID2DContextOwner *)((unsigned __int64)&this[1].m128_u64[1] & -(__int64)(this != 0LL)),
              v24,
              a3,
              a4,
              a5,
              (enum D2D1_ANTIALIAS_MODE)(this[15].m128_i32[1] != 0),
              v17);
      v13 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xA86u, 0LL);
      goto LABEL_10;
    }
    v23 = 2686;
    goto LABEL_23;
  }
  v26 = 0LL;
  WidenedBounds = CShape::GetWidenedBounds(a2, (__int64)&v26, v14, (__int64)a5);
  v13 = WidenedBounds;
  if ( WidenedBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WidenedBounds, 0xA79u, 0LL);
    goto LABEL_12;
  }
  v28 = 0;
  v29 = 0;
  v27 = v26;
  v22 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(&v25, this, (__int64)&v27, 0LL);
  v13 = v22;
  if ( v22 >= 0 )
  {
    v7 = v25;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xA7Bu, 0LL);
  v7 = v25;
LABEL_10:
  if ( v7 )
  {
    CBaseClipStack::Pop((CBaseClipStack *)(v7 + 3112));
    --*(_QWORD *)(*(_QWORD *)(v7 + 752) - 184LL);
    *(_BYTE *)(v7 + 8065) = 1;
    CDrawingContext::PopClippingScope((CDrawingContext *)v7, 0);
  }
LABEL_12:
  if ( v24 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v24 + 16LL))(v24);
  return v13;
}
