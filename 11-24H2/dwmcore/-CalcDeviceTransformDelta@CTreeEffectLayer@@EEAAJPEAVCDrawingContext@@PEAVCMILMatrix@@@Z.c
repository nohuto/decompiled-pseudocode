/*
 * XREFs of ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800A9D10
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000A2C0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x18001BF70 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006FAC0 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800A5F44 (-CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A9BF0 (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800AA280 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800AB7C8 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801B3B30 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1801E25D0 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 */

__int64 __fastcall CTreeEffectLayer::CalcDeviceTransformDelta(
        CTreeEffectLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  char *v3; // r15
  unsigned int v7; // r14d
  __int64 v8; // rcx
  int ShadowBounds; // eax
  char *v10; // r8
  __int64 v11; // r11
  FLOAT v12; // xmm0_4
  FLOAT v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm6_4
  float v16; // xmm0_4
  int v17; // eax
  __int128 v18; // xmm1
  int v19; // eax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  unsigned int v23; // eax
  __m128i v24; // xmm2
  int v25; // eax
  const struct CVisual *v26; // r11
  int v27; // eax
  char v28; // al
  struct D2D_RECT_F v29; // [rsp+38h] [rbp-39h] BYREF
  __int128 v30; // [rsp+48h] [rbp-29h] BYREF
  __int128 v31; // [rsp+58h] [rbp-19h]
  __int128 v32; // [rsp+68h] [rbp-9h]
  __int128 v33; // [rsp+78h] [rbp+7h]
  int v34; // [rsp+88h] [rbp+17h]
  FLOAT v35; // [rsp+D8h] [rbp+67h] BYREF
  FLOAT v36; // [rsp+E0h] [rbp+6Fh] BYREF

  v3 = (char *)this + 128;
  v35 = 0.0;
  v36 = 0.0;
  v7 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 288), (CTreeEffectLayer *)((char *)this + 128));
  v8 = *((_QWORD *)this + 32);
  if ( v8 )
  {
    v29 = 0LL;
    ShadowBounds = CLayerVisual::GetShadowBounds(v8, &v29);
    v7 = ShadowBounds;
    if ( ShadowBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShadowBounds, 0x24Eu, 0LL);
      return v7;
    }
    if ( v29.right <= v29.left || v29.bottom <= v29.top )
    {
      *(_OWORD *)((char *)this + 212) = DirectX::g_XMZero;
    }
    else
    {
      v10 = (char *)this + 212;
      if ( *(_BYTE *)(*((_QWORD *)this + 32) + 705LL) )
        CDrawingContext::CalcLocalSpaceClippedBounds((__int64)a2, &v29, (__int64)v10);
      else
        CDrawingContext::CalcWorldSpaceClippedBounds(a2, &v29, v10);
    }
  }
  if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(*((CLayerVisual **)this + 32)) )
  {
    v34 = 10496;
    v31 = _xmm;
    v23 = -*((_DWORD *)this + 5);
    v33 = *(__int128 *)&_xmm.r;
    v30 = _xmm;
    v32 = _xmm;
    v24 = _mm_cvtsi32_si128(v23);
    v25 = -*((_DWORD *)this + 4);
    LOBYTE(v34) = -86;
    CMILMatrix::Translate((CMILMatrix *)&v30, (float)v25, _mm_cvtepi32_ps(v24).m128_f32[0]);
    CMILMatrix::Scale((CMILMatrix *)&v30, *((float *)this + 70), *((float *)this + 70), 1.0);
    v27 = CDrawingContext::PushTransformInternal(a2, v26, (const struct CMILMatrix *)&v30, 0, 1);
    v7 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x275u, 0LL);
    }
    else
    {
      CVisual::GetEffectiveSize(*((CVisual **)this + 32), &v35, &v36);
      *(_QWORD *)&v29.left = 0LL;
      v29.bottom = v36;
      v29.right = v35;
      CMILMatrix::Transform2DBoundsHelper<1>((__int64)&v30, &v29, (float *)this + 49);
      *(_QWORD *)((char *)a3 + 60) = 1065353216LL;
      *(_QWORD *)a3 = 1065353216LL;
      *((_QWORD *)a3 + 1) = 0LL;
      *((_DWORD *)a3 + 4) = 0;
      *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
      *(_QWORD *)((char *)a3 + 28) = 0LL;
      *((_DWORD *)a3 + 9) = 0;
      *((_QWORD *)a3 + 5) = 1065353216LL;
      *((_QWORD *)a3 + 6) = 0LL;
      *((_DWORD *)a3 + 14) = 0;
      v28 = *((_BYTE *)a3 + 65) & 0xE9;
      *((_BYTE *)a3 + 64) = -86;
      *((_BYTE *)a3 + 65) = v28 | 0x29;
    }
  }
  else
  {
    v12 = *(float *)(v11 + 144);
    v13 = *(float *)(v11 + 148);
    *(_QWORD *)&v29.left = 0LL;
    v29.right = v12;
    v29.bottom = v13;
    CMILMatrix::Transform2DBoundsHelper<1>((__int64)v3, &v29, (float *)this + 49);
    v14 = *((float *)this + 51) - *((float *)this + 49);
    v15 = *((float *)this + 70);
    v34 = 10666;
    *((float *)this + 51) = (float)(v14 * v15) + *((float *)this + 49);
    v16 = (float)((float)(*((float *)this + 52) - *((float *)this + 50)) * v15) + *((float *)this + 50);
    v31 = _xmm;
    v33 = *(__int128 *)&_xmm.r;
    *((float *)this + 52) = v16;
    v17 = -*((_DWORD *)this + 5);
    v30 = _xmm;
    v32 = _xmm;
    CMILMatrix::Translate((CMILMatrix *)&v30, (float)-*((_DWORD *)this + 4), (float)v17);
    CMILMatrix::Scale((CMILMatrix *)&v30, v15, v15, 1.0);
    v18 = v31;
    v19 = v34;
    *(_OWORD *)a3 = v30;
    v20 = v32;
    *((_OWORD *)a3 + 1) = v18;
    v21 = v33;
    *((_OWORD *)a3 + 2) = v20;
    *((_OWORD *)a3 + 3) = v21;
    *((_DWORD *)a3 + 16) = v19;
  }
  return v7;
}
