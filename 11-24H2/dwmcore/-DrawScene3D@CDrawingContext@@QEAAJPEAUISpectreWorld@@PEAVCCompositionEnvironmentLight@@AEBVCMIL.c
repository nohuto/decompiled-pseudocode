/*
 * XREFs of ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18026494C
 * Callers:
 *     ?Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802AB160 (-Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18001F160 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180053B90 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180059724 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1_NHM@Z @ 0x18006D538 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18006E664 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180073030 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x1800A669C (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800AB7C8 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x1800CE690 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     gsl::final_action__lambda_b778ccec937677c8d794b2b5e6f06977___::_final_action__lambda_b778ccec937677c8d794b2b5e6f06977___ @ 0x1800F5C54 (gsl--final_action__lambda_b778ccec937677c8d794b2b5e6f06977___--_final_action__lambda_b778ccec937.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800F7058 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800FB0BC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800FC770 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x1800FDC20 (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800FEB30 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180157638 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18016A440 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x1801E16CC (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     gsl::final_action__lambda_d9647b2e9e0a0cba02120464dc304150___::_final_action__lambda_d9647b2e9e0a0cba02120464dc304150___ @ 0x18022F190 (gsl--final_action__lambda_d9647b2e9e0a0cba02120464dc304150___--_final_action__lambda_d9647b2e9e0.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAUISpectreLightNode@@V?$allocator@PEAUISpectreLightNode@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180263B1C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@PEAUISpectreLightNode@@V-$allocator@PEAUIS.c)
 *     ??1?$com_ptr_t@VCSpectreCallbackRenderer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180263D6C (--1-$com_ptr_t@VCSpectreCallbackRenderer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     gsl::final_action__lambda_2c23dc335d575e6068a59f43383614b1___::_final_action__lambda_2c23dc335d575e6068a59f43383614b1___ @ 0x180263D90 (gsl--final_action__lambda_2c23dc335d575e6068a59f43383614b1___--_final_action__lambda_2c23dc335d5.c)
 *     gsl::final_action__lambda_88cfa773221f8f0f13642871a04a878f___::_final_action__lambda_88cfa773221f8f0f13642871a04a878f___ @ 0x180263E10 (gsl--final_action__lambda_88cfa773221f8f0f13642871a04a878f___--_final_action__lambda_88cfa773221.c)
 *     ?Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@PEAPEAV1@@Z @ 0x180285B74 (-Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@.c)
 *     ?UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z @ 0x18028F7A0 (-UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     sqrtf_0 @ 0x1802DF698 (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawScene3D(
        CDrawingContext *this,
        struct ISpectreWorld *a2,
        struct CCompositionEnvironmentLight *a3,
        const struct CMILMatrix *a4)
{
  unsigned __int64 v4; // r15
  unsigned int v6; // edi
  struct CVisual *CurrentVisual; // rax
  const struct CMILMatrix *TopByReference; // rax
  __int128 *v11; // r9
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _QWORD *v16; // rax
  unsigned int v17; // ebx
  struct ISpectreRenderer *SpectreRenderer; // rsi
  int v19; // eax
  __m128 v20; // xmm7
  struct D2D_VECTOR_3F *v21; // rax
  __m128 v22; // xmm2
  float v23; // xmm10_4
  void (__fastcall *v24)(struct ISpectreRenderer *, struct _LUID *); // rax
  float v25; // xmm0_4
  float v26; // xmm10_4
  int v27; // eax
  int v28; // eax
  float v29; // xmm7_4
  int v30; // eax
  __int64 v31; // rbx
  unsigned int D3DMatrix; // eax
  ULONGLONG v33; // r8
  int v34; // r9d
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rbx
  int v40; // eax
  CDeviceManager *v41; // rcx
  int ExistingDevice; // eax
  __int64 v43; // rdx
  __int64 v44; // r8
  __m128 v45; // xmm0
  struct ID2D1PrivateCompositorRenderer *v46; // rbx
  __m128 v47; // xmm3
  int v48; // ecx
  __m128 v49; // xmm1
  int v50; // eax
  CGlobalDrawingContext *v51; // rbx
  __int64 (__fastcall ***v52)(_QWORD, GUID *, struct D2D_VECTOR_3F *); // rdi
  int v53; // eax
  __int64 v54; // rax
  __int64 (__fastcall *v55)(struct ISpectreRenderer *); // rax
  __int64 v56; // r13
  __int64 v57; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v58; // r8
  char v59; // si
  __int64 v60; // rsi
  __int64 v61; // rdx
  unsigned __int64 v62; // rcx
  size_t v63; // rdi
  __int64 v64; // rsi
  void (__fastcall *v65)(__int64, __int64); // rdi
  __int64 v66; // rax
  void (__fastcall *v67)(__int64, __int64); // rdi
  __int64 v68; // rax
  struct _D3DMATRIX *v69; // rax
  __int64 v70; // r9
  __int64 (__fastcall *v71)(__int64, struct ISpectreWorld *, struct _D3DMATRIX *, __int64, int); // r10
  int v72; // eax
  __int64 v73; // rax
  char *v74; // rdx
  int v75; // eax
  int v76; // eax
  int v78; // [rsp+28h] [rbp-E0h]
  int v79; // [rsp+28h] [rbp-E0h]
  __int64 v80; // [rsp+48h] [rbp-C0h] BYREF
  struct ID2D1PrivateCompositorRenderer *v81; // [rsp+50h] [rbp-B8h] BYREF
  CGlobalDrawingContext *v82; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_VECTOR_3F v83; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v84; // [rsp+70h] [rbp-98h] BYREF
  __int64 v85; // [rsp+80h] [rbp-88h]
  CDrawingContext *v86; // [rsp+88h] [rbp-80h] BYREF
  char v87; // [rsp+90h] [rbp-78h]
  struct _LUID v88; // [rsp+98h] [rbp-70h] BYREF
  struct _D3DMATRIX v89; // [rsp+A8h] [rbp-60h] BYREF
  int v90; // [rsp+E8h] [rbp-20h]
  __int128 v91; // [rsp+F8h] [rbp-10h] BYREF
  char v92; // [rsp+108h] [rbp+0h]
  __int64 v93; // [rsp+110h] [rbp+8h] BYREF
  int v94; // [rsp+118h] [rbp+10h]
  __int64 v95; // [rsp+120h] [rbp+18h] BYREF
  int v96; // [rsp+128h] [rbp+20h]
  float v97; // [rsp+130h] [rbp+28h] BYREF
  float v98; // [rsp+134h] [rbp+2Ch]
  float v99; // [rsp+138h] [rbp+30h]
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+148h] [rbp+40h] BYREF
  __m128 v101; // [rsp+158h] [rbp+50h] BYREF
  int v102; // [rsp+168h] [rbp+60h]
  int v103; // [rsp+16Ch] [rbp+64h]
  struct D2D_VECTOR_3F v104; // [rsp+170h] [rbp+68h] BYREF
  _QWORD v105[2]; // [rsp+180h] [rbp+78h] BYREF
  int v106; // [rsp+190h] [rbp+88h]
  int v107; // [rsp+194h] [rbp+8Ch]
  unsigned int v108; // [rsp+198h] [rbp+90h]
  _QWORD v109[3]; // [rsp+1A0h] [rbp+98h] BYREF
  _QWORD v110[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  int v111; // [rsp+1C8h] [rbp+C0h]
  int v112; // [rsp+1CCh] [rbp+C4h]
  struct _D3DMATRIX v113; // [rsp+1D8h] [rbp+D0h] BYREF
  int v114; // [rsp+218h] [rbp+110h]

  v4 = 0LL;
  v6 = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual(this);
  if ( *((_QWORD *)CurrentVisual + 86) > *(_QWORD *)(*((_QWORD *)CurrentVisual + 3) + 688LL) )
  {
    dword_1803FA754 |= 4u;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 288));
    v12 = *v11;
    v13 = v11[1];
    v90 = *((_DWORD *)v11 + 16);
    *(_OWORD *)&v89._11 = v12;
    v14 = v11[2];
    *(_OWORD *)&v89._21 = v13;
    v15 = v11[3];
    *(_OWORD *)&v89._31 = v14;
    *(_OWORD *)&v89._41 = v15;
    CMILMatrix::Multiply((CMILMatrix *)&v89, TopByReference);
    v109[0] = a3;
    v105[1] = v109;
    v16 = v109;
    v105[0] = v109;
    v106 = 3;
    v107 = 3;
    v108 = 1;
    v17 = 0;
    while ( 1 )
    {
      CCompositionLight::UpdateSceneLightInfo((CCompositionLight *)v16[v17++], this);
      if ( v17 >= v108 )
        break;
      v16 = (_QWORD *)v105[0];
    }
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(*((CSceneResourceManager **)g_pComposition + 85));
    if ( !SpectreRenderer )
      goto LABEL_78;
    v95 = 0LL;
    v96 = 0;
    v93 = 0LL;
    v94 = 0;
    (*(void (__fastcall **)(struct ISpectreWorld *, __int64 *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v95, &v93);
    v102 = 0;
    v103 = 0;
    v110[0] = v95;
    v110[1] = v93;
    v111 = v96;
    v101 = 0LL;
    v112 = v94;
    CMILMatrix::Transform3DBoundsHelper<1>((__int64)&v89, (float *)v110, v101.m128_f32);
    v19 = CDrawingContext::PushGpuClipRectInternal((__int64)this, 0LL, &v101, 1, 0);
    v6 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x42Bu, 0LL);
      goto LABEL_78;
    }
    v86 = this;
    v87 = 1;
    if ( COERCE_FLOAT(LODWORD(v89._44) & _xmm) < 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v89._44 - 1.0) & _xmm) < 0.000081380211 )
    {
      v20 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    }
    else
    {
      v20 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v20.m128_f32[0] = 1.0 / v89._44;
    }
    v98 = v20.m128_f32[0] * v89._42;
    v97 = v20.m128_f32[0] * v89._41;
    v83.x = fmaxf(COERCE_FLOAT(v93 & _xmm), COERCE_FLOAT(v95 & _xmm));
    v83.y = fmaxf(COERCE_FLOAT(HIDWORD(v93) & _xmm), COERCE_FLOAT(HIDWORD(v95) & _xmm));
    v83.z = fmaxf(COERCE_FLOAT(v94 & _xmm), COERCE_FLOAT(v96 & _xmm));
    v21 = CMILMatrix::Transform3DVector((CMILMatrix *)&v89, &v104, &v83);
    v22 = v20;
    v23 = sqrtf_0(
            (float)((float)((float)(v20.m128_f32[0] * v21->y) * (float)(v20.m128_f32[0] * v21->y))
                  + (float)((float)(v20.m128_f32[0] * v21->x) * (float)(v20.m128_f32[0] * v21->x)))
          + (float)((float)(v20.m128_f32[0] * v21->z) * (float)(v20.m128_f32[0] * v21->z)))
        + 1.0;
    v24 = *(void (__fastcall **)(struct ISpectreRenderer *, struct _LUID *))(*(_QWORD *)SpectreRenderer + 24LL);
    v25 = v23 + v23;
    v26 = v23 * 4.0;
    v99 = v25 + (float)(v20.m128_f32[0] * v89._43);
    v24(SpectreRenderer, &v88);
    if ( CCommonRegistryData::Scene::EnableDrawToBackbuffer
      && v88.LowPart == *((_DWORD *)this + 14)
      && v88.HighPart == *((_DWORD *)this + 15)
      && !*((_DWORD *)this + 62) )
    {
      v82 = 0LL;
      v27 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(&v82, (__int64)this, (__int64)v110);
      v6 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x459u, 0LL);
        goto LABEL_31;
      }
      v28 = *((_DWORD *)this + 792);
      if ( v28 )
        v29 = *(float *)(*((_QWORD *)this + 395) + 4LL * (unsigned int)(v28 - 1));
      else
        v29 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      LOBYTE(v80) = 0;
      *(_QWORD *)&v91 = &v80;
      *((_QWORD *)&v91 + 1) = this;
      v92 = 1;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v29 - 1.0) & _xmm) >= 0.0000011920929 )
      {
        v100 = 0LL;
        CDrawingContext::GetClipBoundsWorld((__int64)this, (float *)&v100);
        v30 = CDrawingContext::PushD2DLayer(this, 0LL, &v100, 0LL, 0LL, v29, 0, 0);
        v6 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v30, 0x471u, 0LL);
LABEL_30:
          gsl::final_action__lambda_88cfa773221f8f0f13642871a04a878f___::_final_action__lambda_88cfa773221f8f0f13642871a04a878f___((__int64)&v91);
LABEL_31:
          CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v82);
LABEL_69:
          gsl::final_action__lambda_d9647b2e9e0a0cba02120464dc304150___::_final_action__lambda_d9647b2e9e0a0cba02120464dc304150___((__int64)&v86);
LABEL_78:
          DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v105);
          return v6;
        }
        LOBYTE(v80) = 1;
      }
      v31 = v105[0];
      v81 = 0LL;
      gsl::details::extent_type<-1>::extent_type<-1>(&v84, v108);
      if ( (_QWORD)v84 == -1LL || !v31 && (_QWORD)v84 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      D3DMatrix = (unsigned int)CMILMatrix::GetD3DMatrix(&v89, &v113);
      v100.Ptr = v33;
      *(_QWORD *)&v100.Size = v31;
      v35 = CSpectreCallbackRenderer::Create(
              (_DWORD)a2,
              D3DMatrix,
              (unsigned int)&v97,
              v34,
              LODWORD(v26),
              (__int64)&v100,
              (__int64)&v81);
      v6 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0x47Cu, 0LL);
      }
      else
      {
        v36 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 112LL))((char *)this + 16);
        v6 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0x47Eu, 0LL);
        }
        else
        {
          v39 = *((_QWORD *)this + 5);
          CD2DContext::FlushDrawList((CD2DContext *)(v39 + 16), v37, v38);
          v40 = CD2DContext::DrawCustomCallbackRendererInternal((CD2DContext *)(v39 + 16), v81);
          v6 = v40;
          if ( v40 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v40, 0x47Fu, 0LL);
        }
      }
      wil::com_ptr_t<CSpectreCallbackRenderer,wil::err_returncode_policy>::~com_ptr_t<CSpectreCallbackRenderer,wil::err_returncode_policy>((__int64 *)&v81);
      goto LABEL_30;
    }
    v91 = 0LL;
    CDrawingContext::GetClipBoundsWorld((__int64)this, (float *)&v91);
    v81 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v81);
    ExistingDevice = CDeviceManager::GetExistingDevice(v41, v88, &v81);
    v6 = ExistingDevice;
    if ( ExistingDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ExistingDevice, 0x489u, 0LL);
      goto LABEL_68;
    }
    v45 = (__m128)DWORD2(v91);
    v100.Ptr = 0LL;
    v46 = v81;
    v101.m128_u64[1] = 0xFFFFFFFFLL;
    v102 = 0;
    *(float *)&v100.Size = *((float *)&v91 + 2) - *(float *)&v91;
    *(float *)&v100.Reserved = *((float *)&v91 + 3) - *((float *)&v91 + 1);
    v47.m128_f32[0] = (float)(*((float *)&v91 + 3) - *((float *)&v91 + 1)) - 0.0;
    LODWORD(v104.x) = 87;
    *(_QWORD *)&v104.y = 1LL;
    v48 = (int)(float)((float)(*((float *)&v91 + 2) - *(float *)&v91) - 0.0);
    LOBYTE(v103) = 0;
    v82 = 0LL;
    v49.m128_f32[0] = (float)(*((float *)&v91 + 2) - *(float *)&v91) - 0.0;
    v45.m128_f32[0] = (float)v48;
    LODWORD(v83.x) = v48 - _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(v45, v49));
    v22.m128_f32[0] = (float)(int)v47.m128_f32[0];
    v101.m128_u64[0] = *((_QWORD *)v81 + 117);
    LODWORD(v83.y) = (int)v47.m128_f32[0] - _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(v22, v47));
    *(_WORD *)((char *)&v103 + 1) = 0;
    HIBYTE(v103) = 0;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v82, v43, v44);
    DWORD2(v84) = 12;
    *(_QWORD *)&v84 = "DWM DwmScene";
    v50 = CD3DDevice::CreateRenderTargetBitmap(
            (__int64)v46,
            (const struct CResourceTag *)&v84,
            (const struct D2D_SIZE_U *)&v83,
            (struct PixelFormatInfo *)&v104,
            (struct RenderTargetInfo *)&v101,
            3,
            &v82);
    v6 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v50, 0x4A5u, 0LL);
      goto LABEL_67;
    }
    v51 = v82;
    *(_QWORD *)&v83.x = 0LL;
    v52 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct D2D_VECTOR_3F *))(*(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v82 + 144LL))(v82);
    if ( *(_QWORD *)&v83.x )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v83.x + 16LL))(*(_QWORD *)&v83.x);
    v53 = (**v52)(v52, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, &v83);
    v6 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v53, 0x4AAu, 0LL);
LABEL_73:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v83);
LABEL_67:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v82);
LABEL_68:
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v81);
      goto LABEL_69;
    }
    CMILMatrix::Translate((CMILMatrix *)&v89, COERCE_FLOAT(v91 ^ _xmm), COERCE_FLOAT(DWORD1(v91) ^ _xmm));
    v54 = *(_QWORD *)SpectreRenderer;
    v97 = v97 - *(float *)&v91;
    v55 = *(__int64 (__fastcall **)(struct ISpectreRenderer *))(v54 + 40);
    v98 = v98 - *((float *)&v91 + 1);
    v56 = v55(SpectreRenderer);
    v85 = 0LL;
    v84 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 8LL))(v56);
    v101.m128_u64[0] = v56;
    v59 = 1;
    v101.m128_u64[1] = (unsigned __int64)&v84;
    LOBYTE(v102) = 1;
    if ( !v108 || (v113 = v89, v114 = v90, !CMILMatrix::Invert((CMILMatrix *)&v113, v57, v58)) )
    {
LABEL_56:
      (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v56 + 16LL))(v56, &v97);
      v67 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 24LL);
      v68 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v83.x + 120LL))(*(_QWORD *)&v83.x);
      v67(v56, v68);
      (*(void (__fastcall **)(__int64, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)v56 + 32LL))(v56, &v100);
      v69 = CMILMatrix::GetD3DMatrix(&v89, &v113);
      LOBYTE(v78) = v59;
      LOBYTE(v70) = 1;
      v72 = v71(v56, a2, v69, v70, v78);
      v6 = v72;
      if ( v72 >= 0 )
      {
        gsl::final_action__lambda_2c23dc335d575e6068a59f43383614b1___::_final_action__lambda_2c23dc335d575e6068a59f43383614b1___(&v101);
        if ( (_QWORD)v84 )
        {
          std::_Deallocate<16,0>((_QWORD *)v84, (v85 - v84) & 0xFFFFFFFFFFFFFFF8uLL);
          v85 = 0LL;
          v84 = 0LL;
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v83);
        if ( g_LockAndReadSceneOffscreenTexture )
        {
          v73 = (*(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v51 + 144LL))(v51);
          v74 = (char *)this + 24;
          if ( !this )
            v74 = 0LL;
          (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v73 + 112LL))(v73, v74);
        }
        v75 = CDrawingContext::PushTransformInternal((const void **)this, 0LL, (__m128 *)&CMILMatrix::Identity, 0, 1);
        v6 = v75;
        if ( v75 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v75, 0x4EAu, 0LL);
        }
        else
        {
          *(_QWORD *)&v104.x = this;
          LOBYTE(v104.z) = 1;
          v76 = CDrawingContext::DrawBitmapRealization(
                  (__int64)this,
                  ((unsigned __int64)v51 + 8) & -(__int64)(v51 != 0LL),
                  (__int64)&v100,
                  (__int64)&v91,
                  v79,
                  0,
                  (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue);
          v6 = v76;
          if ( v76 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v76, 0x4F3u, 0LL);
          gsl::final_action__lambda_b778ccec937677c8d794b2b5e6f06977___::_final_action__lambda_b778ccec937677c8d794b2b5e6f06977___((__int64)&v104);
        }
        goto LABEL_67;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v72, 0x4DFu, 0LL);
      gsl::final_action__lambda_2c23dc335d575e6068a59f43383614b1___::_final_action__lambda_2c23dc335d575e6068a59f43383614b1___(&v101);
      if ( (_QWORD)v84 )
      {
        std::_Deallocate<16,0>((_QWORD *)v84, (v85 - v84) & 0xFFFFFFFFFFFFFFF8uLL);
        v85 = 0LL;
        v84 = 0LL;
      }
      goto LABEL_73;
    }
    v60 = *((_QWORD *)&v84 + 1);
    v61 = v84;
    v62 = (__int64)(*((_QWORD *)&v84 + 1) - v84) >> 3;
    if ( v108 < v62 )
    {
      v60 = v84 + 8LL * v108;
LABEL_50:
      *((_QWORD *)&v84 + 1) = v60;
      goto LABEL_51;
    }
    if ( v108 > v62 )
    {
      if ( v108 <= (unsigned __int64)((v85 - (__int64)v84) >> 3) )
      {
        v63 = 8 * (v108 - v62);
        memset_0(*((void **)&v84 + 1), 0, v63);
        v61 = v84;
        v60 += v63;
        goto LABEL_50;
      }
      std::vector<ISpectreLightNode *>::_Resize_reallocate<std::_Value_init_tag>((const void **)&v84, v108);
      v60 = *((_QWORD *)&v84 + 1);
      v61 = v84;
    }
LABEL_51:
    if ( (v60 - v61) >> 3 )
    {
      do
      {
        if ( (*(int (__fastcall **)(_QWORD, struct _D3DMATRIX *, unsigned __int64))(**(_QWORD **)(v105[0]
                                                                                                + 8LL * (unsigned int)v4)
                                                                                  + 288LL))(
               *(_QWORD *)(v105[0] + 8LL * (unsigned int)v4),
               &v113,
               v61 + 8 * v4) >= 0 )
        {
          v64 = *(_QWORD *)(v84 + 8 * v4);
          v65 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v64 + 24LL);
          v66 = (*(__int64 (__fastcall **)(struct ISpectreWorld *))(*(_QWORD *)a2 + 40LL))(a2);
          v65(v64, v66);
        }
        ++v4;
        v61 = v84;
      }
      while ( v4 < (__int64)(*((_QWORD *)&v84 + 1) - v84) >> 3 );
    }
    v59 = 0;
    goto LABEL_56;
  }
  return v6;
}
