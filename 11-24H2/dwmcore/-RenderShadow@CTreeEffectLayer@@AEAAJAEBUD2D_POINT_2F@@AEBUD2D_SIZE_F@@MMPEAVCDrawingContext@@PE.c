/*
 * XREFs of ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x1800A75F0
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800A8D00 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B728 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUD2D_RECT_F@@$0-0@gsl@@AEBU_D.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeShadowEffect@CTreeEffectLayer@@AEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800A6494 (-InitializeShadowEffect@CTreeEffectLayer@@AEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1800A65E4 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?GetID2DEffect@CD2DEffect@@QEAAJPEAPEAUID2D1Effect@@@Z @ 0x1800A6660 (-GetID2DEffect@CD2DEffect@@QEAAJPEAPEAUID2D1Effect@@@Z.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x1800A669C (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800A7F50 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800AA280 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x1800F5B08 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800FB0F0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800FC770 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?Pop@CBaseClipStack@@QEAAXXZ @ 0x1800FDFC0 (-Pop@CBaseClipStack@@QEAAXXZ.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18014E920 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x18014EB58 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x18020B92C (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderShadow(
        CTreeEffectLayer *this,
        const struct D2D_POINT_2F *a2,
        const struct D2D_SIZE_F *a3,
        float a4,
        float a5,
        struct CDrawingContext *a6,
        struct CDropShadow *a7,
        struct IRenderTargetBitmap *a8)
{
  ID2D1Effect *v9; // rbx
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm7_4
  struct ID2D1Effect *v13; // rdi
  __m128 v14; // xmm6
  ID2D1Effect *v15; // rsi
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  int v24; // eax
  unsigned int v25; // r14d
  int v26; // eax
  __int64 v27; // r15
  float Radius; // xmm0_4
  struct Windows::Foundation::Numerics::float4x4 *v29; // r8
  bool v30; // al
  int ID2DEffect; // eax
  CTreeEffectLayer *v32; // rcx
  float v33; // xmm6_4
  float v34; // xmm9_4
  __int64 (__fastcall *v35)(__int64, GUID *, CD2DEffect **); // r14
  int v36; // eax
  __int128 v37; // xmm0
  int v38; // eax
  int v39; // eax
  __int64 v40; // xmm0_8
  __int64 v41; // rax
  struct D2D_VECTOR_3F *v42; // rax
  __int64 v43; // xmm0_8
  float y; // xmm10_4
  float x; // xmm11_4
  float v46; // xmm14_4
  float v47; // xmm13_4
  float v48; // xmm1_4
  struct ID2D1Effect *v49; // r8
  __int64 (__fastcall *v50)(__int64, GUID *, CD2DEffect **); // r14
  int v51; // eax
  CTreeEffectLayer *v52; // rcx
  __int64 v53; // rcx
  CD2DEffect *v54; // rcx
  __int64 v56; // rax
  __int64 (__fastcall *v57)(__int64, __int64, ID2D1Effect **); // rax
  CTreeEffectLayer *v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 TopByReference; // rax
  unsigned int v63; // [rsp+28h] [rbp-E0h]
  ID2D1Effect *v64; // [rsp+38h] [rbp-D0h] BYREF
  CD2DEffect *v65; // [rsp+40h] [rbp-C8h] BYREF
  float v66[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v67; // [rsp+50h] [rbp-B8h] BYREF
  CDropShadow *v68; // [rsp+58h] [rbp-B0h]
  struct ID2D1Effect *v69; // [rsp+60h] [rbp-A8h] BYREF
  ID2D1Effect *v70[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v71; // [rsp+78h] [rbp-90h]
  __int128 v72; // [rsp+88h] [rbp-80h]
  __int128 v73; // [rsp+98h] [rbp-70h]
  int v74; // [rsp+A8h] [rbp-60h]
  _OWORD v75[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v76; // [rsp+F8h] [rbp-10h]
  struct D2D_VECTOR_3F v77; // [rsp+108h] [rbp+0h] BYREF
  float v78; // [rsp+114h] [rbp+Ch]
  float v79; // [rsp+118h] [rbp+10h] BYREF
  float v80; // [rsp+11Ch] [rbp+14h]
  float v81; // [rsp+120h] [rbp+18h]
  float v82; // [rsp+124h] [rbp+1Ch]
  struct D2D_MATRIX_3X2_F v83; // [rsp+128h] [rbp+20h] BYREF
  struct D2D_MATRIX_3X2_F v84; // [rsp+140h] [rbp+38h] BYREF
  __int128 v85; // [rsp+158h] [rbp+50h] BYREF

  v68 = a7;
  if ( !a8 )
    return 0LL;
  if ( g_LockAndReadLayer )
  {
    v59 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, const struct D2D_POINT_2F *, const struct D2D_SIZE_F *))(*(_QWORD *)a8 + 144LL))(
            a8,
            a2,
            a3);
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v59 + 112LL))(
      v59,
      ((unsigned __int64)a6 + 24) & -(__int64)(a6 != 0LL));
  }
  v9 = 0LL;
  v10 = *((float *)this + 70);
  v11 = *((float *)this + 58);
  v12 = *(float *)&_xmm;
  v13 = 0LL;
  v14 = (__m128)_xmm;
  v15 = 0LL;
  *(_QWORD *)&v83.m[2][0] = 0LL;
  *(_OWORD *)&v83.m11 = _xmm;
  v74 = 0;
  v72 = _xmm;
  v73 = *(__int128 *)&_xmm.r;
  v16 = *((float *)this + 57);
  v85 = 0LL;
  v65 = 0LL;
  v17 = (float)*((int *)this + 5);
  *(_QWORD *)&v84.m11 = 0LL;
  *(_QWORD *)&v77.x = 0LL;
  v69 = 0LL;
  LOBYTE(v74) = -86;
  *(_OWORD *)v70 = _xmm;
  v18 = v11 - v17;
  v71 = _xmm;
  v19 = (float)*((int *)this + 4);
  *(_WORD *)((char *)&v74 + 1) = 41;
  v67 = 0LL;
  v80 = v18;
  v20 = v16 - v19;
  v21 = (float)*((int *)this + 6);
  v79 = v20;
  v22 = (float)(v21 / v10) + v20;
  v23 = (float)*((int *)this + 7);
  v81 = v22;
  v82 = (float)(v23 / v10) + v18;
  v24 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a6, 0, (int)this + 264, 1, 0);
  v25 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x381u, 0LL);
    goto LABEL_34;
  }
  v26 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, __int64 *, _QWORD))(*(_QWORD *)a8 + 152LL))(
          a8,
          &v67,
          0LL);
  v25 = v26;
  if ( v26 < 0 )
  {
    v63 = 900;
    goto LABEL_32;
  }
  v27 = (*((_QWORD *)a6 + 5) + 16LL) & -(__int64)(*((_QWORD *)a6 + 5) != 0LL);
  Radius = CDropShadow::GetRadius(v68);
  if ( !*(_BYTE *)(*((_QWORD *)this + 32) + 705LL) )
  {
    LODWORD(v64) = 0;
    v66[0] = 0.0;
    CMILMatrix::Get2DScaleDimensions((CTreeEffectLayer *)((char *)this + 128), (float *)&v64, v66);
    CMILMatrix::Scale((CMILMatrix *)v70, *(float *)&v64, v66[0], 1.0);
    v12 = *(float *)v70;
    v14 = (__m128)v71;
    v75[2] = v72;
    v75[3] = v73;
    v75[0] = *(_OWORD *)v70;
    v75[1] = v71;
    v76 = v74;
    v30 = Windows::Foundation::Numerics::invert(
            (Windows::Foundation::Numerics *)v75,
            (const struct Windows::Foundation::Numerics::float4x4 *)v75,
            v29);
    LOWORD(v76) = v76 & 0xC003;
    if ( v30 )
      CMILMatrix::Multiply((CMILMatrix *)v75, (CTreeEffectLayer *)((char *)this + 128));
  }
  v26 = (*(__int64 (__fastcall **)(__int64, GUID *, CD2DEffect **))(*(_QWORD *)v27 + 216LL))(
          v27,
          &CLSID_D2D12DAffineTransform,
          &v65);
  v25 = v26;
  if ( v26 < 0 )
  {
    v63 = 926;
    goto LABEL_32;
  }
  ID2DEffect = CD2DEffect::GetID2DEffect(v65, (struct ID2D1Effect **)&v77);
  v25 = ID2DEffect;
  if ( ID2DEffect < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ID2DEffect, 0x39Fu, 0LL);
    v13 = *(struct ID2D1Effect **)&v77.x;
    goto LABEL_33;
  }
  v33 = _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
  if ( v12 > v33 )
  {
    v34 = Radius * v33;
    v83.m11 = v33 / v12;
    v83.dx = 0.0 - (float)((float)(v33 / v12) * 0.0);
  }
  else
  {
    v83.m22 = v12 / v33;
    v34 = v12 * Radius;
    v83.dy = 0.0 - (float)((float)(v12 / v33) * 0.0);
  }
  v13 = *(struct ID2D1Effect **)&v77.x;
  v26 = CTreeEffectLayer::InitializeShadowEffect(v32, *(struct ID2D1Effect **)&v77.x, &v83);
  v25 = v26;
  if ( v26 < 0 )
  {
    v63 = 941;
    goto LABEL_32;
  }
  (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v13 + 112LL))(v13, 0LL, v67, 1LL);
  v35 = *(__int64 (__fastcall **)(__int64, GUID *, CD2DEffect **))(*(_QWORD *)v27 + 216LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v65);
  v26 = v35(v27, &CLSID_D2D1Shadow, &v65);
  v25 = v26;
  if ( v26 < 0 )
  {
    v63 = 945;
    goto LABEL_32;
  }
  v36 = CD2DEffect::GetID2DEffect(v65, (struct ID2D1Effect **)&v84);
  v25 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0x3B2u, 0LL);
    v9 = *(ID2D1Effect **)&v84.m11;
    goto LABEL_33;
  }
  v9 = *(ID2D1Effect **)&v84.m11;
  v37 = *(_OWORD *)((char *)v68 + 72);
  *(float *)&v64 = v34 / 3.0;
  v85 = v37;
  v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, ID2D1Effect **, int))(**(_QWORD **)&v84.m11 + 72LL))(
          *(_QWORD *)&v84.m11,
          0LL,
          0LL,
          &v64,
          4);
  v25 = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v38, 0x3B7u, 0LL);
    goto LABEL_33;
  }
  v39 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v9 + 72LL))(
          v9,
          1LL,
          0LL,
          &v85,
          16);
  v25 = v39;
  if ( v39 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v39, 0x3BAu, 0LL);
    goto LABEL_33;
  }
  LODWORD(v64) = 0;
  v26 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, ID2D1Effect **, int))(*(_QWORD *)v9 + 72LL))(
          v9,
          2LL,
          0LL,
          &v64,
          4);
  v25 = v26;
  if ( v26 < 0 )
  {
    v63 = 957;
    goto LABEL_32;
  }
  v40 = *((_QWORD *)v68 + 12);
  v77.z = *((FLOAT *)v68 + 26);
  v41 = *((_QWORD *)this + 32);
  *(_QWORD *)&v77.x = v40;
  if ( !*(_BYTE *)(v41 + 705) )
  {
    v42 = CMILMatrix::Transform3DVector((CTreeEffectLayer *)((char *)this + 128), (struct D2D_VECTOR_3F *)&v84, &v77);
    v43 = *(_QWORD *)&v42->x;
    *(FLOAT *)&v42 = v42->z;
    *(_QWORD *)&v77.x = v43;
    LODWORD(v77.z) = (_DWORD)v42;
  }
  y = v77.y;
  x = v77.x;
  v46 = (float)*((int *)this + 5);
  v47 = (float)*((int *)this + 4);
  v77.y = (float)((float)(v77.y + v80) - v34) + v46;
  v77.x = (float)((float)(v77.x + v79) - v34) + v47;
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v79);
  if ( *((_DWORD *)g_pComposition + 1570) )
  {
    if ( *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference((char *)g_pComposition + 6272) != 1 )
      goto LABEL_33;
    if ( (*(_BYTE *)(CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v60) + 20) & 9) == 0 )
      goto LABEL_33;
    v77.y = (float)(y + v80) + v46;
    v77.x = (float)(x + v79) + v47;
    v78 = (float)(v82 - v80) + v77.y;
    v77.z = (float)(v81 - v79) + v77.x;
    TopByReference = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v61);
    *(_QWORD *)&v84.m11 = 1LL;
    *(_QWORD *)&v84.m[1][0] = &v77;
    v26 = CDrawingContext::FillRectanglesWithSolidColor(a6, (__int64)&v84, TopByReference + 4);
    v25 = v26;
    if ( v26 >= 0 )
      goto LABEL_33;
    v63 = 994;
    goto LABEL_32;
  }
  v48 = *((float *)this + 70);
  if ( v48 < 0.99999881 )
  {
    v56 = *(_QWORD *)v27;
    v64 = 0LL;
    *(_QWORD *)&v84.m[0][1] = 0LL;
    v57 = *(__int64 (__fastcall **)(__int64, __int64, ID2D1Effect **))(v56 + 200);
    *(_QWORD *)&v84.m[2][0] = 0LL;
    v84.m11 = 1.0 / v48;
    v84.m22 = 1.0 / v48;
    v26 = v57(v27, 7LL, &v64);
    v25 = v26;
    if ( v26 < 0 )
    {
      v63 = 1011;
      goto LABEL_32;
    }
    v26 = CTreeEffectLayer::InitializeShadowEffect(v58, v64, &v84);
    v25 = v26;
    if ( v26 < 0 )
    {
      v63 = 1013;
      goto LABEL_32;
    }
    ID2D1Effect::SetInputEffect(v64, 0, v13);
    v49 = v64;
  }
  else
  {
    v49 = v13;
  }
  ID2D1Effect::SetInputEffect(v9, 0, v49);
  *(_QWORD *)&v83.m[0][1] = 0LL;
  if ( v12 > v33 )
  {
    v83.dy = 0.0;
    v83.m22 = 1.0;
    v83.m11 = v12 / v33;
    v83.dx = 0.0 - (float)((float)(v12 / v33) * 0.0);
  }
  else
  {
    v83.dx = 0.0;
    v83.m11 = 1.0;
    v83.m22 = v33 / v12;
    v83.dy = 0.0 - (float)((float)(v33 / v12) * 0.0);
  }
  v50 = *(__int64 (__fastcall **)(__int64, GUID *, CD2DEffect **))(*(_QWORD *)v27 + 216LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v65);
  v26 = v50(v27, &CLSID_D2D12DAffineTransform, &v65);
  v25 = v26;
  if ( v26 < 0 )
  {
    v63 = 1035;
    goto LABEL_32;
  }
  v51 = CD2DEffect::GetID2DEffect(v65, &v69);
  v25 = v51;
  if ( v51 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, 0x40Cu, 0LL);
    v15 = v69;
    goto LABEL_33;
  }
  v15 = v69;
  v26 = CTreeEffectLayer::InitializeShadowEffect(v52, v69, &v83);
  v25 = v26;
  if ( v26 < 0 )
  {
    v63 = 1038;
    goto LABEL_32;
  }
  ID2D1Effect::SetInputEffect(v15, 0, v9);
  v26 = CDrawingContext::FillEffect(a6, 0);
  v25 = v26;
  if ( v26 < 0 )
  {
    v63 = 1047;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, v63, 0LL);
  }
LABEL_33:
  CBaseClipStack::Pop((struct CDrawingContext *)((char *)a6 + 3112));
  --*(_QWORD *)(*((_QWORD *)a6 + 94) - 184LL);
  *((_BYTE *)a6 + 8065) = 1;
LABEL_34:
  v53 = v67;
  if ( v67 )
  {
    v67 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  }
  if ( v15 )
    (*(void (__fastcall **)(ID2D1Effect *))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v13 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v9 )
    (*(void (__fastcall **)(ID2D1Effect *))(*(_QWORD *)v9 + 16LL))(v9);
  v54 = v65;
  if ( v65 )
  {
    v65 = 0LL;
    (*(void (__fastcall **)(CD2DEffect *))(*(_QWORD *)v54 + 16LL))(v54);
  }
  return v25;
}
