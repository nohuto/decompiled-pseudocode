/*
 * XREFs of ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180051E30
 * Callers:
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z @ 0x180018AE4 (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x180051250 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800516E0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006B114 (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18013D1F0 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801D4370 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800214B0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180052D80 (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180053590 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180072B00 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180073030 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C6560 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x1800F7354 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x1800F74F8 (--0CCpuClip@@QEAA@XZ.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x1800F7560 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F94F0 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_R.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800FA030 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x1800FC750 (-ApplyRenderState@CDrawingContext@@UEAAJXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800FC770 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x1800FDC20 (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     ?pop_back@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800FDC70 (-pop_back@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippingScopeSta.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x1800FDDF0 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Pop@CBaseClipStack@@QEAAXXZ @ 0x1800FDFC0 (-Pop@CBaseClipStack@@QEAAXXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18014FA14 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18016A440 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntialiasSinkContext@@@Z @ 0x1801ADBC0 (-Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntia.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1801DE5AC (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??1CComplexShape@@UEAA@XZ @ 0x180259230 (--1CComplexShape@@UEAA@XZ.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1802592A0 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ceilf_0 @ 0x1802DF5CC (ceilf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListCache::Render(__int64 a1, CDrawingContext *a2, CMILMatrix *a3, float a4)
{
  float v4; // xmm1_4
  __int64 v5; // rsi
  __m128 v6; // xmm2
  __int64 v7; // rax
  CDrawingContext *v8; // r12
  unsigned int v10; // r15d
  struct ID2D1Geometry *v11; // r13
  bool v12; // zf
  CDrawingContext *v13; // rdi
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r12
  CMILMatrix *v23; // r9
  char v24; // cl
  CMILMatrix *v25; // rax
  int v26; // eax
  __int64 v28; // rcx
  float *v29; // rax
  int v30; // edx
  __m128 v31; // xmm6
  float v32; // xmm0_4
  int v33; // eax
  float v34; // xmm0_4
  int v35; // eax
  float v36; // xmm0_4
  int v37; // eax
  float v38; // xmm6_4
  float v39; // xmm14_4
  unsigned int v40; // eax
  __m128i v41; // xmm13
  float v42; // xmm13_4
  float v43; // xmm5_4
  float v44; // xmm9_4
  float v45; // xmm10_4
  float v46; // xmm11_4
  CMILMatrix *v47; // rax
  float v48; // xmm3_4
  float x; // xmm5_4
  float y; // xmm6_4
  float v51; // xmm3_4
  float v52; // xmm4_4
  int v53; // eax
  float v54; // xmm15_4
  float v55; // xmm0_4
  __m128i v56; // xmm4
  __m128i v57; // xmm3
  int v58; // ecx
  float v59; // xmm5_4
  int v60; // ecx
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  float v63; // xmm5_4
  char v64; // cl
  unsigned __int64 v65; // rcx
  float v66; // xmm1_4
  float v67; // xmm0_4
  FLOAT v68; // xmm0_4
  const struct CMILMatrix *v69; // rdx
  int v70; // eax
  __int64 v71; // rax
  CDrawingContext *v73; // rcx
  __int64 (__fastcall *v74)(CDrawingContext *__hidden); // rax
  int v75; // eax
  float v76; // xmm0_4
  const struct CMILMatrix *v77; // rcx
  const struct CShape *v78; // rdx
  char v79; // bl
  const struct CMILMatrix *TopByReference; // rax
  int v81; // r9d
  int v82; // ebx
  __m128 v83; // rt1
  unsigned int v84; // eax
  int v85; // eax
  struct ID2D1Geometry *v86; // rax
  int D2DGeometry; // eax
  int v88; // eax
  char v89; // [rsp+48h] [rbp-C0h]
  float v90; // [rsp+4Ch] [rbp-BCh]
  float v91; // [rsp+4Ch] [rbp-BCh]
  float v92; // [rsp+4Ch] [rbp-BCh]
  CDrawingContext *v94; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v95; // [rsp+60h] [rbp-A8h]
  CMILMatrix *v96; // [rsp+68h] [rbp-A0h]
  struct ID2D1Geometry *v97; // [rsp+70h] [rbp-98h] BYREF
  struct ID2D1Geometry *v98[2]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v99; // [rsp+88h] [rbp-80h]
  __int128 v100; // [rsp+98h] [rbp-70h]
  __int128 v101; // [rsp+A8h] [rbp-60h]
  int v102; // [rsp+B8h] [rbp-50h]
  CMILMatrix *v103; // [rsp+C8h] [rbp-40h]
  float *v104; // [rsp+D0h] [rbp-38h]
  struct ID2D1Geometry *v105; // [rsp+D8h] [rbp-30h]
  __int64 v106; // [rsp+E0h] [rbp-28h]
  _BYTE v107[32]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v108[64]; // [rsp+108h] [rbp+0h] BYREF
  int v109; // [rsp+148h] [rbp+40h]
  _BYTE v110[16]; // [rsp+158h] [rbp+50h] BYREF
  char v111[96]; // [rsp+168h] [rbp+60h] BYREF
  __int128 v112; // [rsp+1C8h] [rbp+C0h] BYREF
  __int128 v113; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v114; // [rsp+1E8h] [rbp+E0h]
  struct D2D_RECT_F v115; // [rsp+1F0h] [rbp+E8h] BYREF
  __int64 v116; // [rsp+200h] [rbp+F8h]
  __m128 v117; // [rsp+208h] [rbp+100h] BYREF
  struct D2D_POINT_2F v118[4]; // [rsp+218h] [rbp+110h] BYREF
  void *retaddr; // [rsp+330h] [rbp+228h]

  v4 = *(float *)(a1 + 56);
  v5 = 0LL;
  v6 = (__m128)*(unsigned int *)(a1 + 48);
  v7 = *((_QWORD *)a2 + 5);
  v8 = a2;
  v103 = a3;
  v10 = 0;
  v106 = v7;
  v11 = 0LL;
  v105 = 0LL;
  v97 = 0LL;
  v89 = 0;
  if ( v4 <= v6.m128_f32[0] || *(float *)(a1 + 60) <= *(float *)(a1 + 52) || a4 <= 0.0 )
  {
LABEL_20:
    if ( g_pComposition )
      v5 = *((_QWORD *)g_pComposition + 111);
    *(_QWORD *)(a1 + 16) = v5;
LABEL_23:
    if ( v89 )
LABEL_154:
      CDrawingContext::PopLayer(v8);
    goto LABEL_24;
  }
  v12 = (*(_BYTE *)(a1 + 76) & 4) == 0;
  v13 = 0LL;
  v94 = 0LL;
  v102 = 0;
  if ( !v12 )
  {
    v14 = CDrawingContext::ApplyRenderStateInternal(a2, 1);
    v10 = v14;
    if ( v14 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xE5u, 0LL);
    goto LABEL_24;
  }
  v68 = *(float *)(a1 + 52);
  v69 = a3;
  v115.right = v4;
  v115.bottom = *(FLOAT *)(a1 + 60);
  LODWORD(v115.left) = v6.m128_i32[0];
  v115.top = v68;
  v116 = 0LL;
  if ( !a3 )
  {
    v70 = *((_DWORD *)v8 + 74);
    if ( v70 )
      v69 = (const struct CMILMatrix *)(*((_QWORD *)v8 + 36) + 68LL * (unsigned int)(v70 - 1));
    else
      v69 = (const struct CMILMatrix *)&CMILMatrix::Identity;
  }
  v71 = *((_QWORD *)v8 + 94);
  if ( v71 != *((_QWORD *)v8 + 93) && *(_QWORD *)(v71 - 176) )
  {
    v77 = (const struct CMILMatrix *)(*((_QWORD *)v8 + 94) - 84LL);
    v109 = 0;
    if ( CCpuClippingData::CalcScopeTransformFromWorld(v77, v69, (struct CMILMatrix *)v108) )
    {
      v112 = 0LL;
      if ( *((float *)&v116 + 1) == 0.0 && *(float *)&v116 == 0.0 )
      {
        CMILMatrix::Transform2DBoundsHelper<0>(v108, &v115, &v112);
      }
      else
      {
        v114 = 0LL;
        v113 = 0LL;
        CMILMatrix::Transform3DBoundsHelper<0>((__int64)v108, &v115.left, (float *)&v113);
        v112 = v113;
      }
      CCpuClip::CCpuClip((CCpuClip *)v110);
      v78 = CScopedClipStack::HasCpuClipsInScope((CDrawingContext *)((char *)v8 + 744))
          ? *(const struct CShape **)(*((_QWORD *)v8 + 337) - 40LL)
          : 0LL;
      CCpuClip::Initialize((CCpuClip *)v110, v78, 0LL, D2D1_ANTIALIAS_MODE_ALIASED, 0, 0LL);
      v79 = CCpuClip::FullyContains(v110, &v112, 0LL);
      CShapePtr::~CShapePtr((CShapePtr *)v111);
      if ( v79 )
      {
        v113 = 0LL;
        TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)v8 + 288));
        LOBYTE(v81) = 1;
        v82 = CDrawingContext::PushClippingScope((_DWORD)v8, 0, 1, v81, (__int64)TopByReference, (__int64)&v113);
        v10 = v82;
        if ( v82 < 0 )
        {
          v84 = 6726;
        }
        else
        {
          v82 = CDrawingContext::PushGpuClipRectInternal((_DWORD)v8, 0, (unsigned int)&v113, 0, 1);
          v10 = v82;
          if ( v82 >= 0 )
          {
            v13 = v8;
            v94 = v8;
            goto LABEL_106;
          }
          CDrawingContext::PopClippingScope(v8, 0);
          v84 = 6739;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v84, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v82, 0xEEu, 0LL);
        CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v94);
        goto LABEL_24;
      }
    }
  }
LABEL_106:
  v73 = (CDrawingContext *)((char *)v8 + 16);
  v74 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(*((_QWORD *)v8 + 2) + 112LL);
  if ( v74 == CDrawingContext::ApplyRenderState )
    v75 = CDrawingContext::ApplyRenderState(v73);
  else
    v75 = v74(v73);
  v10 = v75;
  if ( v75 >= 0 )
  {
LABEL_6:
    v16 = *(_QWORD *)(a1 + 40);
    v17 = a1 + 40;
    v18 = v16 & 3;
    if ( v18 == 1 )
    {
      v17 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
      v19 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
      v20 = *(_QWORD *)((v16 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
LABEL_8:
      v21 = v19 + 8 * v20;
      *(_QWORD *)&v112 = v21;
      while ( 1 )
      {
        if ( v17 == v21 )
        {
          if ( v13 )
          {
            v53 = *((_DWORD *)v13 + 780);
            if ( v53 )
              *((_DWORD *)v13 + 780) = v53 - 1;
            --*(_QWORD *)(*((_QWORD *)v13 + 94) - 184LL);
            *((_BYTE *)v13 + 8065) = 1;
            detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::pop_back((char *)v13 + 744);
          }
          v8 = a2;
          goto LABEL_20;
        }
        v22 = *(_QWORD *)v17;
        v23 = v103;
        if ( (*(_DWORD *)(*(_QWORD *)v17 + 64LL) & 0x100) == 0 || !CMILMatrix::Is2DAxisAlignedPreserving(v103) )
        {
          v24 = 0;
          goto LABEL_12;
        }
        v57 = (__m128i)*(unsigned int *)(v22 + 68);
        v56 = (__m128i)*(unsigned int *)(v22 + 72);
        *(float *)v56.m128i_i32 = (float)((float)(*(float *)v56.m128i_i32 * *((float *)v23 + 4))
                                        + (float)(*(float *)(v22 + 68) * *(float *)v23))
                                + *((float *)v23 + 12);
        *(float *)v57.m128i_i32 = (float)((float)(*(float *)v57.m128i_i32 * *((float *)v23 + 1))
                                        + (float)(*(float *)(v22 + 72) * *((float *)v23 + 5)))
                                + *((float *)v23 + 13);
        if ( (_mm_cvtsi128_si32(v56) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v6.m128_f32[0] = (float)(int)*(float *)v56.m128i_i32 - *(float *)v56.m128i_i32;
          v6 = _mm_cmple_ss(v6, (__m128)LODWORD(FLOAT_N0_5));
          v58 = (int)*(float *)v56.m128i_i32 - _mm_cvtsi128_si32((__m128i)v6);
        }
        else
        {
          v91 = *(float *)v56.m128i_i32 + 6291456.25;
          v58 = (int)(LODWORD(v91) << 10) >> 11;
        }
        v59 = (float)v58;
        if ( (_mm_cvtsi128_si32(v57) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v6.m128_f32[0] = (float)(int)*(float *)v57.m128i_i32 - *(float *)v57.m128i_i32;
          v83.m128_f32[0] = FLOAT_N0_5;
          v60 = (int)*(float *)v57.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v6, v83));
        }
        else
        {
          v92 = *(float *)v57.m128i_i32 + 6291456.25;
          v60 = (int)(LODWORD(v92) << 10) >> 11;
        }
        v61 = *(_OWORD *)v23;
        v62 = *((_OWORD *)v23 + 1);
        v102 = *((_DWORD *)v23 + 16);
        v63 = v59 - *(float *)v56.m128i_i32;
        *(_OWORD *)v98 = v61;
        v100 = *((_OWORD *)v23 + 2);
        v6 = (__m128)COERCE_UNSIGNED_INT((float)v60);
        v99 = v62;
        v6.m128_f32[0] = v6.m128_f32[0] - *(float *)v57.m128i_i32;
        v101 = *((_OWORD *)v23 + 3);
        if ( COERCE_FLOAT(LODWORD(v63) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(v6.m128_i32[0] & _xmm) >= 0.000081380211
          || 0.000081380211 <= 0.0 )
        {
          break;
        }
LABEL_116:
        v24 = 1;
LABEL_12:
        v25 = (CMILMatrix *)v98;
        if ( !v24 )
          v25 = v23;
        v96 = v25;
        if ( (*(unsigned int (__fastcall **)(__int64, unsigned __int64, __int64, CMILMatrix *))(*(_QWORD *)v22 + 32LL))(
               v22,
               v19,
               v15,
               v23) != 2 )
        {
          v15 = v106;
          v28 = 0LL;
          v29 = (float *)(*(_QWORD *)(v22 + 16) + 56LL);
          v104 = v29;
          v30 = *(_DWORD *)(v106 + 368);
          if ( v30 )
          {
            v28 = *(_QWORD *)(*(_QWORD *)(v106 + 344) + 8LL * (unsigned int)(v30 - 1));
            v29 = v104;
          }
          v12 = *(_DWORD *)(v28 + 68) == 1;
          v31 = *(__m128 *)(v28 + 52);
          v117 = v31;
          if ( v12 )
          {
            v32 = _mm_shuffle_ps(v31, v31, 255).m128_f32[0] - 0.5;
            if ( v32 < -2147483600.0 )
            {
              v33 = 0x80000000;
            }
            else if ( v32 >= 2147483600.0 )
            {
              v33 = 0x7FFFFFFF;
            }
            else
            {
              v33 = (int)ceilf_0(v32);
            }
            v34 = _mm_shuffle_ps(v31, v31, 170).m128_f32[0] - 0.5;
            v90 = (float)v33;
            if ( v34 < -2147483600.0 )
            {
              v35 = 0x80000000;
            }
            else if ( v34 >= 2147483600.0 )
            {
              v35 = 0x7FFFFFFF;
            }
            else
            {
              v35 = (int)ceilf_0(v34);
            }
            *(float *)&v95 = (float)v35;
            v36 = _mm_shuffle_ps(v31, v31, 85).m128_f32[0] - 0.5;
            if ( v36 < -2147483600.0 )
            {
              v37 = 0x80000000;
            }
            else if ( v36 >= 2147483600.0 )
            {
              v37 = 0x7FFFFFFF;
            }
            else
            {
              v37 = (int)ceilf_0(v36);
            }
            v38 = v31.m128_f32[0] - 0.5;
            v39 = (float)v37;
            if ( v38 < -2147483600.0 )
            {
              v40 = 0x80000000;
            }
            else if ( v38 >= 2147483600.0 )
            {
              v40 = 0x7FFFFFFF;
            }
            else
            {
              v40 = (int)ceilf_0(v38);
            }
            v41 = _mm_cvtsi32_si128(v40);
            v29 = v104;
            LODWORD(v42) = _mm_cvtepi32_ps(v41).m128_u32[0];
          }
          else
          {
            v39 = v117.m128_f32[1];
            v42 = v117.m128_f32[0];
            v90 = v117.m128_f32[3];
            LODWORD(v95) = v117.m128_i32[2];
          }
          v43 = *v29;
          v44 = v29[1];
          v45 = v29[2];
          v46 = v29[3];
          v47 = v96;
          v115.left = v43;
          v115.top = v44;
          v115.right = v45;
          v19 = *((unsigned __int8 *)v96 + 64);
          v115.bottom = v46;
          if ( (char)(4 * v19) >> 6 != 1 )
          {
            if ( (char)(4 * v19) >> 6 < 0 )
              goto LABEL_46;
            v12 = (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v96) == 0;
            v47 = v96;
            if ( !v12 )
            {
              v6 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v96 - 1.0) & _xmm) < 0.000081380211
                && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v96 + 5) - 1.0) & _xmm) < 0.000081380211 )
              {
                *((_BYTE *)v96 + 64) |= 0x30u;
LABEL_46:
                v48 = *((float *)v47 + 12);
                x = v43 + v48;
                y = *((float *)v47 + 13) + v44;
                v51 = v48 + v45;
                v52 = *((float *)v47 + 13) + v46;
LABEL_47:
                if ( *(float *)&v95 <= x || v90 <= y || v51 <= v42 || v52 <= v39 )
                  goto LABEL_17;
                goto LABEL_15;
              }
            }
            v19 = *((unsigned __int8 *)v96 + 64);
            LOBYTE(v19) = v19 & 0xCF | 0x10;
            *((_BYTE *)v96 + 64) = v19;
          }
          if ( (char)v19 >> 6 != 1 )
          {
            if ( (char)v19 >> 6 < 0 )
            {
LABEL_65:
              v6 = (__m128)*(unsigned int *)v47;
              v54 = *((float *)v47 + 5);
              v51 = (float)(*(float *)v47 * v45) + *((float *)v47 + 12);
              y = (float)(v54 * v44) + *((float *)v47 + 13);
              v52 = (float)(v54 * v46) + *((float *)v47 + 13);
              x = (float)(v43 * v6.m128_f32[0]) + *((float *)v47 + 12);
              if ( v6.m128_f32[0] <= 0.0 || v54 <= 0.0 )
              {
                if ( x > v51 )
                {
                  v55 = x;
                  x = (float)(*(float *)v47 * v45) + *((float *)v47 + 12);
                  v51 = v55;
                }
                if ( y > v52 )
                {
                  y = (float)(*((float *)v47 + 5) * v46) + *((float *)v47 + 13);
                  v52 = (float)(v54 * v44) + *((float *)v47 + 13);
                }
              }
              goto LABEL_47;
            }
            v15 = *((unsigned __int8 *)v47 + 65);
            if ( (char)(4 * v15) >> 6 != 1 )
            {
              if ( (char)(4 * v15) >> 6 < 0 )
                goto LABEL_94;
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v47 + 7) & _xmm) * 61440.0)
                                                + (float)(COERCE_FLOAT(*((_DWORD *)v47 + 3) & _xmm) * 61440.0))
                                        + COERCE_FLOAT(*((_DWORD *)v47 + 15) & _xmm))
                                - 1.0) & _xmm) >= 0.000081380211 )
              {
                *((_BYTE *)v47 + 65) = v15 & 0xCF | 0x10;
              }
              else
              {
                LOBYTE(v15) = v15 | 0x30;
                *((_BYTE *)v47 + 65) = v15;
LABEL_94:
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v47 + 1) - 0.0) & _xmm) < 0.000081380211
                  && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v47 + 4) - 0.0) & _xmm) < 0.000081380211 )
                {
                  LOBYTE(v19) = v19 | 0xC0;
                  *((_BYTE *)v47 + 64) = v19;
                  goto LABEL_65;
                }
              }
            }
            *((_BYTE *)v47 + 64) = v19 & 0x3F | 0x40;
          }
          CMILMatrix::Transform2DRectToPerspective(v47, &v115, v118);
          x = v118[0].x;
          v65 = 1LL;
          y = v118[0].y;
          v51 = v118[0].x;
          v52 = v118[0].y;
          do
          {
            v66 = v118[v65].x;
            v67 = v118[v65].y;
            x = fminf(x, v66);
            ++v65;
            y = fminf(y, v67);
            v51 = fmaxf(v51, v66);
            v52 = fmaxf(v52, v67);
          }
          while ( v65 < 4 );
          goto LABEL_47;
        }
LABEL_15:
        if ( v105 != *(struct ID2D1Geometry **)(v22 + 32) )
        {
          if ( v89 )
          {
            v85 = CDrawingContext::PopLayer(a2);
            v10 = v85;
            if ( v85 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v85, 0x10Du, 0LL);
              CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v94);
              v8 = a2;
              goto LABEL_154;
            }
            v89 = 0;
            ReleaseInterface<ID2D1Geometry>(&v97);
            v11 = v97;
          }
          v86 = *(struct ID2D1Geometry **)(v22 + 32);
          v105 = v86;
          if ( v86 )
          {
            CComplexShape::CComplexShape((CComplexShape *)v107, v86);
            D2DGeometry = CComplexShape::GetD2DGeometry((CComplexShape *)v107, v96, &v97);
            v10 = D2DGeometry;
            if ( D2DGeometry < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x11Du, 0LL);
              CComplexShape::~CComplexShape((CComplexShape *)v107);
              CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v94);
              v11 = v97;
              v8 = a2;
              goto LABEL_23;
            }
            v117 = 0LL;
            v113 = *(_OWORD *)(a1 + 48);
            CMILMatrix::Transform2DBoundsHelper<0>(v96, &v113, &v117);
            v11 = v97;
            v88 = CDrawingContext::PushD2DLayer(
                    a2,
                    0LL,
                    (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue,
                    0,
                    0);
            v10 = v88;
            if ( v88 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v88, 0x123u, 0LL);
              CComplexShape::~CComplexShape((CComplexShape *)v107);
              CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v94);
              v8 = a2;
              goto LABEL_23;
            }
            v89 = 1;
            CComplexShape::~CComplexShape((CComplexShape *)v107);
          }
        }
        v26 = CDrawListEntry::Render(v22, a2, v96);
        v10 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x128u, 0LL);
          CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v94);
          v8 = a2;
          goto LABEL_23;
        }
LABEL_17:
        v21 = v112;
        v17 += 8LL;
      }
      v64 = BYTE1(v102);
      if ( (char)(4 * BYTE1(v102)) >> 6 == 1 )
        goto LABEL_112;
      if ( (char)(4 * BYTE1(v102)) >> 6 < 0 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(HIDWORD(v100) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
          goto LABEL_112;
LABEL_114:
        *(float *)&v101 = *(float *)&v101 + v63;
        v76 = *((float *)&v101 + 2) + 0.0;
        *((float *)&v101 + 1) = *((float *)&v101 + 1) + v6.m128_f32[0];
        goto LABEL_115;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(HIDWORD(v99) & _xmm) * 61440.0)
                                        + (float)(COERCE_FLOAT(HIDWORD(v98[1]) & _xmm) * 61440.0))
                                + COERCE_FLOAT(HIDWORD(v101) & _xmm))
                        - 1.0) & _xmm) >= 0.000081380211 )
      {
        v64 = BYTE1(v102) & 0xCF | 0x10;
      }
      else
      {
        v64 = BYTE1(v102) | 0x30;
        BYTE1(v102) |= 0x30u;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(HIDWORD(v100) & _xmm) * 61440.0) - 0.0) & _xmm) < 0.000081380211 )
          goto LABEL_114;
      }
LABEL_112:
      BYTE1(v102) = v64 & 0xF3;
      *(float *)v98 = *(float *)v98 + (float)(v63 * *((float *)&v98[1] + 1));
      *((float *)v98 + 1) = *((float *)v98 + 1) + (float)(v6.m128_f32[0] * *((float *)&v98[1] + 1));
      *(float *)&v98[1] = *(float *)&v98[1] + (float)(*((float *)&v98[1] + 1) * 0.0);
      *(float *)&v99 = *(float *)&v99 + (float)(v63 * *((float *)&v99 + 3));
      *((float *)&v99 + 1) = *((float *)&v99 + 1) + (float)(v6.m128_f32[0] * *((float *)&v99 + 3));
      *((float *)&v99 + 2) = *((float *)&v99 + 2) + (float)(*((float *)&v99 + 3) * 0.0);
      *(float *)&v100 = *(float *)&v100 + (float)(v63 * *((float *)&v100 + 3));
      *((float *)&v100 + 1) = *((float *)&v100 + 1) + (float)(v6.m128_f32[0] * *((float *)&v100 + 3));
      *((float *)&v100 + 2) = *((float *)&v100 + 2) + (float)(*((float *)&v100 + 3) * 0.0);
      *(float *)&v101 = *(float *)&v101 + (float)(v63 * *((float *)&v101 + 3));
      *((float *)&v101 + 1) = *((float *)&v101 + 1) + (float)(v6.m128_f32[0] * *((float *)&v101 + 3));
      v76 = *((float *)&v101 + 2) + (float)(*((float *)&v101 + 3) * 0.0);
LABEL_115:
      LOBYTE(v102) = v102 & 0xFC;
      *((float *)&v101 + 2) = v76;
      goto LABEL_116;
    }
    if ( v18 == 2 )
    {
      v17 = 0LL;
      v19 = 0LL;
    }
    else
    {
      v19 = a1 + 40;
      if ( (v16 & 3) == 0 )
      {
        v20 = 1LL;
        goto LABEL_8;
      }
      if ( (unsigned __int64)(v18 - 2) >= 2 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v20 = 0LL;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v75, 0xF0u, 0LL);
  if ( v13 )
  {
    CBaseClipStack::Pop((CDrawingContext *)((char *)v13 + 3112));
    --*(_QWORD *)(*((_QWORD *)v13 + 94) - 184LL);
    *((_BYTE *)v13 + 8065) = 1;
    CDrawingContext::PopClippingScope(v13, 0);
  }
LABEL_24:
  if ( v11 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v11 + 16LL))(v11);
  return v10;
}
