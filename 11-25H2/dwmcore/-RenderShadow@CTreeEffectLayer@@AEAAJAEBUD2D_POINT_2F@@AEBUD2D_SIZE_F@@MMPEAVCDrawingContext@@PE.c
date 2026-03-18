/*
 * XREFs of ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x180115728
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800298B0 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18002C060 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18007466C (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUD2D_RECT_F@@$0-0@gsl@@AEBU_D.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800DC130 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeShadowEffect@CTreeEffectLayer@@AEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180115140 (-InitializeShadowEffect@CTreeEffectLayer@@AEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x180115290 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?GetID2DEffect@CD2DEffect@@QEAAJPEAPEAUID2D1Effect@@@Z @ 0x18011530C (-GetID2DEffect@CD2DEffect@@QEAAJPEAPEAUID2D1Effect@@@Z.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x180115348 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180115540 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Pop@CBaseClipStack@@QEAAXXZ @ 0x1801178F0 (-Pop@CBaseClipStack@@QEAAXXZ.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180118418 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180119D40 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x180119F78 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x180217A3C (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  FLOAT v18; // xmm3_4
  float v19; // xmm0_4
  FLOAT v20; // xmm1_4
  float v21; // xmm0_4
  FLOAT v22; // xmm0_4
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
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // xmm0_8
  __int64 v44; // rax
  struct D2D_VECTOR_3F *v45; // rax
  __int64 v46; // xmm0_8
  float y; // xmm10_4
  float x; // xmm11_4
  float v49; // xmm14_4
  float v50; // xmm13_4
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  float v54; // xmm1_4
  struct ID2D1Effect *v55; // r8
  __int64 (__fastcall *v56)(__int64, GUID *, CD2DEffect **); // r14
  int v57; // eax
  CTreeEffectLayer *v58; // rcx
  __int64 v59; // rcx
  CD2DEffect *v60; // rcx
  __int64 v62; // rax
  __int64 (__fastcall *v63)(__int64, __int64, ID2D1Effect **); // rax
  CTreeEffectLayer *v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 TopByReference; // rax
  unsigned int v75; // [rsp+28h] [rbp-E0h]
  ID2D1Effect *v76; // [rsp+38h] [rbp-D0h] BYREF
  CD2DEffect *v77; // [rsp+40h] [rbp-C8h] BYREF
  float v78[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v79; // [rsp+50h] [rbp-B8h] BYREF
  CDropShadow *v80; // [rsp+58h] [rbp-B0h]
  struct ID2D1Effect *v81; // [rsp+60h] [rbp-A8h] BYREF
  ID2D1Effect *v82[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v83; // [rsp+78h] [rbp-90h]
  __int128 v84; // [rsp+88h] [rbp-80h]
  __int128 v85; // [rsp+98h] [rbp-70h]
  int v86; // [rsp+A8h] [rbp-60h]
  _OWORD v87[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v88; // [rsp+F8h] [rbp-10h]
  struct D2D_VECTOR_3F v89; // [rsp+108h] [rbp+0h] BYREF
  float v90; // [rsp+114h] [rbp+Ch]
  struct D2D_RECT_F v91; // [rsp+118h] [rbp+10h] BYREF
  struct D2D_MATRIX_3X2_F v92; // [rsp+128h] [rbp+20h] BYREF
  struct D2D_MATRIX_3X2_F v93; // [rsp+140h] [rbp+38h] BYREF
  __int128 v94; // [rsp+158h] [rbp+50h] BYREF

  v80 = a7;
  if ( !a8 )
    return 0LL;
  if ( g_LockAndReadLayer )
  {
    v65 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, const struct D2D_POINT_2F *, const struct D2D_SIZE_F *))(*(_QWORD *)a8 + 144LL))(
            a8,
            a2,
            a3);
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v65 + 112LL))(
      v65,
      ((unsigned __int64)a6 + 24) & -(__int64)(a6 != 0LL));
  }
  v9 = 0LL;
  v10 = *((float *)this + 70);
  v11 = *((float *)this + 58);
  v12 = *(float *)&_xmm;
  v13 = 0LL;
  v14 = (__m128)_xmm;
  v15 = 0LL;
  *(_QWORD *)&v92.m[2][0] = 0LL;
  *(_OWORD *)&v92.m11 = _xmm;
  v86 = 0;
  v84 = _xmm;
  v85 = *(__int128 *)&_xmm.r;
  v16 = *((float *)this + 57);
  v94 = 0LL;
  v77 = 0LL;
  v17 = (float)*((int *)this + 5);
  *(_QWORD *)&v93.m11 = 0LL;
  *(_QWORD *)&v89.x = 0LL;
  v81 = 0LL;
  LOBYTE(v86) = -86;
  *(_OWORD *)v82 = _xmm;
  v18 = v11 - v17;
  v83 = _xmm;
  v19 = (float)*((int *)this + 4);
  *(_WORD *)((char *)&v86 + 1) = 41;
  v79 = 0LL;
  v91.top = v18;
  v20 = v16 - v19;
  v21 = (float)*((int *)this + 6);
  v91.left = v20;
  v22 = (float)(v21 / v10) + v20;
  v23 = (float)*((int *)this + 7);
  v91.right = v22;
  v91.bottom = (float)(v23 / v10) + v18;
  v24 = CDrawingContext::PushGpuClipRectInternal((__int64)a6, 0LL, (__m128 *)((char *)this + 264), 1, 0);
  v25 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x381u, 0LL);
    goto LABEL_34;
  }
  v26 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, __int64 *, _QWORD))(*(_QWORD *)a8 + 152LL))(
          a8,
          &v79,
          0LL);
  v25 = v26;
  if ( v26 < 0 )
  {
    v75 = 900;
    goto LABEL_32;
  }
  v27 = (*((_QWORD *)a6 + 5) + 16LL) & -(__int64)(*((_QWORD *)a6 + 5) != 0LL);
  Radius = CDropShadow::GetRadius(v80);
  if ( !*(_BYTE *)(*((_QWORD *)this + 32) + 697LL) )
  {
    LODWORD(v76) = 0;
    v78[0] = 0.0;
    CMILMatrix::Get2DScaleDimensions((CTreeEffectLayer *)((char *)this + 128), (float *)&v76, v78);
    CMILMatrix::Scale((CMILMatrix *)v82, *(float *)&v76, v78[0], 1.0);
    v12 = *(float *)v82;
    v14 = (__m128)v83;
    v87[2] = v84;
    v87[3] = v85;
    v87[0] = *(_OWORD *)v82;
    v87[1] = v83;
    v88 = v86;
    v30 = Windows::Foundation::Numerics::invert(
            (Windows::Foundation::Numerics *)v87,
            (const struct Windows::Foundation::Numerics::float4x4 *)v87,
            v29);
    LOWORD(v88) = v88 & 0xC003;
    if ( v30 )
      CMILMatrix::Multiply((CMILMatrix *)v87, (CTreeEffectLayer *)((char *)this + 128));
  }
  v26 = (*(__int64 (__fastcall **)(__int64, GUID *, CD2DEffect **))(*(_QWORD *)v27 + 216LL))(
          v27,
          &CLSID_D2D12DAffineTransform,
          &v77);
  v25 = v26;
  if ( v26 < 0 )
  {
    v75 = 926;
    goto LABEL_32;
  }
  ID2DEffect = CD2DEffect::GetID2DEffect(v77, (struct ID2D1Effect **)&v89);
  v25 = ID2DEffect;
  if ( ID2DEffect < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ID2DEffect, 0x39Fu, 0LL);
    v13 = *(struct ID2D1Effect **)&v89.x;
    goto LABEL_33;
  }
  v33 = _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
  if ( v12 > v33 )
  {
    v34 = Radius * v33;
    v92.m11 = v33 / v12;
    v92.dx = 0.0 - (float)((float)(v33 / v12) * 0.0);
  }
  else
  {
    v92.m22 = v12 / v33;
    v34 = v12 * Radius;
    v92.dy = 0.0 - (float)((float)(v12 / v33) * 0.0);
  }
  v13 = *(struct ID2D1Effect **)&v89.x;
  v26 = CTreeEffectLayer::InitializeShadowEffect(v32, *(struct ID2D1Effect **)&v89.x, &v92);
  v25 = v26;
  if ( v26 < 0 )
  {
    v75 = 941;
    goto LABEL_32;
  }
  (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v13 + 112LL))(v13, 0LL, v79, 1LL);
  v35 = *(__int64 (__fastcall **)(__int64, GUID *, CD2DEffect **))(*(_QWORD *)v27 + 216LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v77);
  v26 = v35(v27, &CLSID_D2D1Shadow, &v77);
  v25 = v26;
  if ( v26 < 0 )
  {
    v75 = 945;
    goto LABEL_32;
  }
  v36 = CD2DEffect::GetID2DEffect(v77, (struct ID2D1Effect **)&v93);
  v25 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0x3B2u, 0LL);
    v9 = *(ID2D1Effect **)&v93.m11;
    goto LABEL_33;
  }
  v9 = *(ID2D1Effect **)&v93.m11;
  v37 = *(_OWORD *)((char *)v80 + 72);
  *(float *)&v76 = v34 / 3.0;
  v94 = v37;
  v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, ID2D1Effect **, int))(**(_QWORD **)&v93.m11 + 72LL))(
          *(_QWORD *)&v93.m11,
          0LL,
          0LL,
          &v76,
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
          &v94,
          16);
  v25 = v39;
  if ( v39 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v39, 0x3BAu, 0LL);
    goto LABEL_33;
  }
  LODWORD(v76) = 0;
  v26 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, ID2D1Effect **, int))(*(_QWORD *)v9 + 72LL))(
          v9,
          2LL,
          0LL,
          &v76,
          4);
  v25 = v26;
  if ( v26 < 0 )
  {
    v75 = 957;
    goto LABEL_32;
  }
  v43 = *((_QWORD *)v80 + 12);
  v89.z = *((FLOAT *)v80 + 26);
  v44 = *((_QWORD *)this + 32);
  *(_QWORD *)&v89.x = v43;
  if ( !*(_BYTE *)(v44 + 697) )
  {
    v45 = CMILMatrix::Transform3DVector((CTreeEffectLayer *)((char *)this + 128), (struct D2D_VECTOR_3F *)&v93, &v89);
    v46 = *(_QWORD *)&v45->x;
    *(FLOAT *)&v45 = v45->z;
    *(_QWORD *)&v89.x = v46;
    LODWORD(v89.z) = (_DWORD)v45;
  }
  y = v89.y;
  x = v89.x;
  v49 = (float)*((int *)this + 5);
  v50 = (float)*((int *)this + 4);
  v89.y = (float)((float)(v89.y + v91.top) - v34) + v49;
  v89.x = (float)((float)(v89.x + v91.left) - v34) + v50;
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v91, v40, v41, v42);
  if ( *((_DWORD *)g_pComposition + 1576) )
  {
    if ( *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(
                      (char *)g_pComposition + 6296,
                      v51,
                      v52,
                      v53) != 1 )
      goto LABEL_33;
    if ( (*(_BYTE *)(CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v67, v66, v68, v69) + 20) & 9) == 0 )
      goto LABEL_33;
    v89.y = (float)(y + v91.top) + v49;
    v89.x = (float)(x + v91.left) + v50;
    v90 = (float)(v91.bottom - v91.top) + v89.y;
    v89.z = (float)(v91.right - v91.left) + v89.x;
    TopByReference = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v71, v70, v72, v73);
    *(_QWORD *)&v93.m11 = 1LL;
    *(_QWORD *)&v93.m[1][0] = &v89;
    v26 = CDrawingContext::FillRectanglesWithSolidColor(a6, (__int64)&v93, TopByReference + 4);
    v25 = v26;
    if ( v26 >= 0 )
      goto LABEL_33;
    v75 = 994;
    goto LABEL_32;
  }
  v54 = *((float *)this + 70);
  if ( v54 < 0.99999881 )
  {
    v62 = *(_QWORD *)v27;
    v76 = 0LL;
    *(_QWORD *)&v93.m[0][1] = 0LL;
    v63 = *(__int64 (__fastcall **)(__int64, __int64, ID2D1Effect **))(v62 + 200);
    *(_QWORD *)&v93.m[2][0] = 0LL;
    v93.m11 = 1.0 / v54;
    v93.m22 = 1.0 / v54;
    v26 = v63(v27, 7LL, &v76);
    v25 = v26;
    if ( v26 < 0 )
    {
      v75 = 1011;
      goto LABEL_32;
    }
    v26 = CTreeEffectLayer::InitializeShadowEffect(v64, v76, &v93);
    v25 = v26;
    if ( v26 < 0 )
    {
      v75 = 1013;
      goto LABEL_32;
    }
    ID2D1Effect::SetInputEffect(v76, 0, v13);
    v55 = v76;
  }
  else
  {
    v55 = v13;
  }
  ID2D1Effect::SetInputEffect(v9, 0, v55);
  *(_QWORD *)&v92.m[0][1] = 0LL;
  if ( v12 > v33 )
  {
    v92.dy = 0.0;
    v92.m22 = 1.0;
    v92.m11 = v12 / v33;
    v92.dx = 0.0 - (float)((float)(v12 / v33) * 0.0);
  }
  else
  {
    v92.dx = 0.0;
    v92.m11 = 1.0;
    v92.m22 = v33 / v12;
    v92.dy = 0.0 - (float)((float)(v33 / v12) * 0.0);
  }
  v56 = *(__int64 (__fastcall **)(__int64, GUID *, CD2DEffect **))(*(_QWORD *)v27 + 216LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v77);
  v26 = v56(v27, &CLSID_D2D12DAffineTransform, &v77);
  v25 = v26;
  if ( v26 < 0 )
  {
    v75 = 1035;
    goto LABEL_32;
  }
  v57 = CD2DEffect::GetID2DEffect(v77, &v81);
  v25 = v57;
  if ( v57 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v57, 0x40Cu, 0LL);
    v15 = v81;
    goto LABEL_33;
  }
  v15 = v81;
  v26 = CTreeEffectLayer::InitializeShadowEffect(v58, v81, &v92);
  v25 = v26;
  if ( v26 < 0 )
  {
    v75 = 1038;
    goto LABEL_32;
  }
  ID2D1Effect::SetInputEffect(v15, 0, v9);
  v26 = CDrawingContext::FillEffect(a6, v9, &v91, (struct D2D_POINT_2F *)&v89, 0);
  v25 = v26;
  if ( v26 < 0 )
  {
    v75 = 1047;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, v75, 0LL);
  }
LABEL_33:
  CBaseClipStack::Pop((struct CDrawingContext *)((char *)a6 + 3112));
  --*(_QWORD *)(*((_QWORD *)a6 + 94) - 184LL);
  *((_BYTE *)a6 + 8065) = 1;
LABEL_34:
  v59 = v79;
  if ( v79 )
  {
    v79 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
  }
  if ( v15 )
    (*(void (__fastcall **)(ID2D1Effect *))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v13 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v9 )
    (*(void (__fastcall **)(ID2D1Effect *))(*(_QWORD *)v9 + 16LL))(v9);
  v60 = v77;
  if ( v77 )
  {
    v77 = 0LL;
    (*(void (__fastcall **)(CD2DEffect *))(*(_QWORD *)v60 + 16LL))(v60);
  }
  return v25;
}
