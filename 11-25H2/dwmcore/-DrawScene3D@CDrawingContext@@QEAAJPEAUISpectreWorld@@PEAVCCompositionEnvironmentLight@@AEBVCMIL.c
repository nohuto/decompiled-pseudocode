/*
 * XREFs of ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18027095C
 * Callers:
 *     ?Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802B4C20 (-Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180041094 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1_NHM@Z @ 0x180074398 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_180074398.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E7D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180081FD8 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x180087410 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18009CBD0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800A42B0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800A48A0 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BFD28 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800D65E0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DA620 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800DC130 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800FFDB8 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18010B800 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x180114C70 (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x180115348 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     gsl::final_action__lambda_b778ccec937677c8d794b2b5e6f06977___::_final_action__lambda_b778ccec937677c8d794b2b5e6f06977___ @ 0x180118564 (gsl--final_action__lambda_b778ccec937677c8d794b2b5e6f06977___--_final_action__lambda_b778ccec937.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18012187C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18012B670 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1801612EC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1801AFF50 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x1801EB4FC (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     gsl::final_action__lambda_e470b0f999bb00ee8d8ebdfd9fe2a583___::_final_action__lambda_e470b0f999bb00ee8d8ebdfd9fe2a583___ @ 0x18023B310 (gsl--final_action__lambda_e470b0f999bb00ee8d8ebdfd9fe2a583___--_final_action__lambda_e470b0f999b.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAUISpectreLightNode@@V?$allocator@PEAUISpectreLightNode@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18026FB6C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@PEAUISpectreLightNode@@V-$allocator@PEAUIS.c)
 *     ??1?$com_ptr_t@VCSpectreCallbackRenderer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18026FDBC (--1-$com_ptr_t@VCSpectreCallbackRenderer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     gsl::final_action__lambda_2c23dc335d575e6068a59f43383614b1___::_final_action__lambda_2c23dc335d575e6068a59f43383614b1___ @ 0x18026FDE0 (gsl--final_action__lambda_2c23dc335d575e6068a59f43383614b1___--_final_action__lambda_2c23dc335d5.c)
 *     gsl::final_action__lambda_88cfa773221f8f0f13642871a04a878f___::_final_action__lambda_88cfa773221f8f0f13642871a04a878f___ @ 0x18026FE60 (gsl--final_action__lambda_88cfa773221f8f0f13642871a04a878f___--_final_action__lambda_88cfa773221.c)
 *     ?Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@PEAPEAV1@@Z @ 0x180291114 (-Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@.c)
 *     ?UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z @ 0x18029BF00 (-UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v33; // r8
  int v34; // r9d
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rbx
  int v40; // eax
  CDeviceManager *v41; // rcx
  int ExistingDevice; // eax
  __m128 v43; // xmm0
  struct ID2D1PrivateCompositorRenderer *v44; // rbx
  __m128 v45; // xmm3
  int v46; // ecx
  __m128 v47; // xmm1
  int v48; // eax
  CGlobalDrawingContext *v49; // rbx
  __int64 (__fastcall ***v50)(_QWORD, GUID *, struct D2D_VECTOR_3F *); // rdi
  int v51; // eax
  __int64 v52; // rax
  __int64 (__fastcall *v53)(struct ISpectreRenderer *); // rax
  __int64 v54; // r13
  __int64 v55; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v56; // r8
  char v57; // si
  __int64 v58; // rsi
  __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  size_t v61; // rdi
  __int64 v62; // rsi
  void (__fastcall *v63)(__int64, __int64); // rdi
  __int64 v64; // rax
  void (__fastcall *v65)(__int64, __int64); // rdi
  __int64 v66; // rax
  struct _D3DMATRIX *v67; // rax
  __int64 v68; // r9
  __int64 (__fastcall *v69)(__int64, struct ISpectreWorld *, struct _D3DMATRIX *, __int64, int); // r10
  int v70; // eax
  __int64 v71; // rax
  char *v72; // rdx
  int v73; // eax
  int v74; // eax
  int v76; // [rsp+28h] [rbp-E0h]
  __int64 v77; // [rsp+48h] [rbp-C0h] BYREF
  struct ID2D1PrivateCompositorRenderer *v78; // [rsp+50h] [rbp-B8h] BYREF
  CGlobalDrawingContext *v79; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_VECTOR_3F v80; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v81; // [rsp+70h] [rbp-98h] BYREF
  __int64 v82; // [rsp+80h] [rbp-88h]
  CDrawingContext *v83; // [rsp+88h] [rbp-80h] BYREF
  char v84; // [rsp+90h] [rbp-78h]
  struct _LUID v85; // [rsp+98h] [rbp-70h] BYREF
  struct _D3DMATRIX v86; // [rsp+A8h] [rbp-60h] BYREF
  int v87; // [rsp+E8h] [rbp-20h]
  __int128 v88; // [rsp+F8h] [rbp-10h] BYREF
  char v89; // [rsp+108h] [rbp+0h]
  __int64 v90; // [rsp+110h] [rbp+8h] BYREF
  int v91; // [rsp+118h] [rbp+10h]
  __int64 v92; // [rsp+120h] [rbp+18h] BYREF
  int v93; // [rsp+128h] [rbp+20h]
  float v94; // [rsp+130h] [rbp+28h] BYREF
  float v95; // [rsp+134h] [rbp+2Ch]
  float v96; // [rsp+138h] [rbp+30h]
  __int128 v97; // [rsp+148h] [rbp+40h] BYREF
  __m128 v98; // [rsp+158h] [rbp+50h] BYREF
  int v99; // [rsp+168h] [rbp+60h]
  int v100; // [rsp+16Ch] [rbp+64h]
  struct D2D_VECTOR_3F v101; // [rsp+170h] [rbp+68h] BYREF
  _QWORD v102[2]; // [rsp+180h] [rbp+78h] BYREF
  int v103; // [rsp+190h] [rbp+88h]
  int v104; // [rsp+194h] [rbp+8Ch]
  unsigned int v105; // [rsp+198h] [rbp+90h]
  _QWORD v106[3]; // [rsp+1A0h] [rbp+98h] BYREF
  _QWORD v107[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  int v108; // [rsp+1C8h] [rbp+C0h]
  int v109; // [rsp+1CCh] [rbp+C4h]
  struct _D3DMATRIX v110; // [rsp+1D8h] [rbp+D0h] BYREF
  int v111; // [rsp+218h] [rbp+110h]

  v4 = 0LL;
  v6 = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual(this);
  if ( *((_QWORD *)CurrentVisual + 85) > *(_QWORD *)(*((_QWORD *)CurrentVisual + 3) + 688LL) )
  {
    dword_1804067B4 |= 4u;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 288));
    v12 = *v11;
    v13 = v11[1];
    v87 = *((_DWORD *)v11 + 16);
    *(_OWORD *)&v86._11 = v12;
    v14 = v11[2];
    *(_OWORD *)&v86._21 = v13;
    v15 = v11[3];
    *(_OWORD *)&v86._31 = v14;
    *(_OWORD *)&v86._41 = v15;
    CMILMatrix::Multiply((CMILMatrix *)&v86, TopByReference);
    v106[0] = a3;
    v102[1] = v106;
    v16 = v106;
    v102[0] = v106;
    v103 = 3;
    v104 = 3;
    v105 = 1;
    v17 = 0;
    while ( 1 )
    {
      CCompositionLight::UpdateSceneLightInfo((CCompositionLight *)v16[v17++], this);
      if ( v17 >= v105 )
        break;
      v16 = (_QWORD *)v102[0];
    }
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(*((CSceneResourceManager **)g_pComposition + 85));
    if ( !SpectreRenderer )
      goto LABEL_78;
    v92 = 0LL;
    v93 = 0;
    v90 = 0LL;
    v91 = 0;
    (*(void (__fastcall **)(struct ISpectreWorld *, __int64 *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v92, &v90);
    v99 = 0;
    v100 = 0;
    v107[0] = v92;
    v107[1] = v90;
    v108 = v93;
    v98 = 0LL;
    v109 = v91;
    CMILMatrix::Transform3DBoundsHelper<1>((__int64)&v86, (float *)v107, v98.m128_f32);
    v19 = CDrawingContext::PushGpuClipRectInternal((__int64)this, 0LL, &v98, 1, 0);
    v6 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x42Bu, 0LL);
      goto LABEL_78;
    }
    v83 = this;
    v84 = 1;
    if ( COERCE_FLOAT(LODWORD(v86._44) & _xmm) < 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v86._44 - 1.0) & _xmm) < 0.000081380211 )
    {
      v20 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    }
    else
    {
      v20 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v20.m128_f32[0] = 1.0 / v86._44;
    }
    v95 = v20.m128_f32[0] * v86._42;
    v94 = v20.m128_f32[0] * v86._41;
    v80.x = fmaxf(COERCE_FLOAT(v90 & _xmm), COERCE_FLOAT(v92 & _xmm));
    v80.y = fmaxf(COERCE_FLOAT(HIDWORD(v90) & _xmm), COERCE_FLOAT(HIDWORD(v92) & _xmm));
    v80.z = fmaxf(COERCE_FLOAT(v91 & _xmm), COERCE_FLOAT(v93 & _xmm));
    v21 = CMILMatrix::Transform3DVector((CMILMatrix *)&v86, &v101, &v80);
    v22 = v20;
    v23 = sqrtf_0(
            (float)((float)((float)(v20.m128_f32[0] * v21->y) * (float)(v20.m128_f32[0] * v21->y))
                  + (float)((float)(v20.m128_f32[0] * v21->x) * (float)(v20.m128_f32[0] * v21->x)))
          + (float)((float)(v20.m128_f32[0] * v21->z) * (float)(v20.m128_f32[0] * v21->z)))
        + 1.0;
    v24 = *(void (__fastcall **)(struct ISpectreRenderer *, struct _LUID *))(*(_QWORD *)SpectreRenderer + 24LL);
    v25 = v23 + v23;
    v26 = v23 * 4.0;
    v96 = v25 + (float)(v20.m128_f32[0] * v86._43);
    v24(SpectreRenderer, &v85);
    if ( CCommonRegistryData::Scene::EnableDrawToBackbuffer
      && v85.LowPart == *((_DWORD *)this + 14)
      && v85.HighPart == *((_DWORD *)this + 15)
      && !*((_DWORD *)this + 62) )
    {
      v79 = 0LL;
      v27 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(&v79, this, (__int64)v107, &v86);
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
      LOBYTE(v77) = 0;
      *(_QWORD *)&v88 = &v77;
      *((_QWORD *)&v88 + 1) = this;
      v89 = 1;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v29 - 1.0) & _xmm) >= 0.0000011920929 )
      {
        v97 = 0LL;
        CDrawingContext::GetClipBoundsWorld((__int64)this, (float *)&v97);
        v30 = CDrawingContext::PushD2DLayer(this, 0LL, &v97, 0LL, 0LL, v29, 0, 0);
        v6 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v30, 0x471u, 0LL);
LABEL_30:
          gsl::final_action__lambda_88cfa773221f8f0f13642871a04a878f___::_final_action__lambda_88cfa773221f8f0f13642871a04a878f___((__int64)&v88);
LABEL_31:
          CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v79);
LABEL_69:
          gsl::final_action__lambda_e470b0f999bb00ee8d8ebdfd9fe2a583___::_final_action__lambda_e470b0f999bb00ee8d8ebdfd9fe2a583___((__int64)&v83);
LABEL_78:
          DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v102);
          return v6;
        }
        LOBYTE(v77) = 1;
      }
      v31 = v102[0];
      v78 = 0LL;
      gsl::details::extent_type<-1>::extent_type<-1>(&v81, v105);
      if ( (_QWORD)v81 == -1LL || !v31 && (_QWORD)v81 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      D3DMatrix = (unsigned int)CMILMatrix::GetD3DMatrix(&v86, &v110);
      *(_QWORD *)&v97 = v33;
      *((_QWORD *)&v97 + 1) = v31;
      v35 = CSpectreCallbackRenderer::Create(
              (_DWORD)a2,
              D3DMatrix,
              (unsigned int)&v94,
              v34,
              LODWORD(v26),
              (__int64)&v97,
              (__int64)&v78);
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
          v40 = CD2DContext::DrawCustomCallbackRendererInternal((CD2DContext *)(v39 + 16), v78);
          v6 = v40;
          if ( v40 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v40, 0x47Fu, 0LL);
        }
      }
      wil::com_ptr_t<CSpectreCallbackRenderer,wil::err_returncode_policy>::~com_ptr_t<CSpectreCallbackRenderer,wil::err_returncode_policy>((__int64 *)&v78);
      goto LABEL_30;
    }
    v88 = 0LL;
    CDrawingContext::GetClipBoundsWorld((__int64)this, (float *)&v88);
    v78 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v78);
    ExistingDevice = CDeviceManager::GetExistingDevice(v41, v85, &v78);
    v6 = ExistingDevice;
    if ( ExistingDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ExistingDevice, 0x489u, 0LL);
      goto LABEL_68;
    }
    v43 = (__m128)DWORD2(v88);
    *(_QWORD *)&v97 = 0LL;
    v44 = v78;
    v98.m128_u64[1] = 0xFFFFFFFFLL;
    v99 = 0;
    *((float *)&v97 + 2) = *((float *)&v88 + 2) - *(float *)&v88;
    *((float *)&v97 + 3) = *((float *)&v88 + 3) - *((float *)&v88 + 1);
    v45.m128_f32[0] = (float)(*((float *)&v88 + 3) - *((float *)&v88 + 1)) - 0.0;
    LODWORD(v101.x) = 87;
    *(_QWORD *)&v101.y = 1LL;
    v46 = (int)(float)((float)(*((float *)&v88 + 2) - *(float *)&v88) - 0.0);
    LOBYTE(v100) = 0;
    v79 = 0LL;
    v47.m128_f32[0] = (float)(*((float *)&v88 + 2) - *(float *)&v88) - 0.0;
    v43.m128_f32[0] = (float)v46;
    LODWORD(v80.x) = v46 - _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(v43, v47));
    v22.m128_f32[0] = (float)(int)v45.m128_f32[0];
    v98.m128_u64[0] = *((_QWORD *)v78 + 117);
    LODWORD(v80.y) = (int)v45.m128_f32[0] - _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(v22, v45));
    *(_WORD *)((char *)&v100 + 1) = 0;
    HIBYTE(v100) = 0;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v79);
    DWORD2(v81) = 12;
    *(_QWORD *)&v81 = "DWM DwmScene";
    v48 = CD3DDevice::CreateRenderTargetBitmap(
            (__int64)v44,
            (const struct CResourceTag *)&v81,
            (struct D2D_SIZE_U *)&v80,
            (struct PixelFormatInfo *)&v101,
            (struct RenderTargetInfo *)&v98,
            3,
            &v79);
    v6 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v48, 0x4A5u, 0LL);
      goto LABEL_67;
    }
    v49 = v79;
    *(_QWORD *)&v80.x = 0LL;
    v50 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct D2D_VECTOR_3F *))(*(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v79 + 144LL))(v79);
    if ( *(_QWORD *)&v80.x )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v80.x + 16LL))(*(_QWORD *)&v80.x);
    v51 = (**v50)(v50, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, &v80);
    v6 = v51;
    if ( v51 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, 0x4AAu, 0LL);
LABEL_73:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v80);
LABEL_67:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v79);
LABEL_68:
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v78);
      goto LABEL_69;
    }
    CMILMatrix::Translate((CMILMatrix *)&v86, COERCE_FLOAT(v88 ^ _xmm), COERCE_FLOAT(DWORD1(v88) ^ _xmm));
    v52 = *(_QWORD *)SpectreRenderer;
    v94 = v94 - *(float *)&v88;
    v53 = *(__int64 (__fastcall **)(struct ISpectreRenderer *))(v52 + 40);
    v95 = v95 - *((float *)&v88 + 1);
    v54 = v53(SpectreRenderer);
    v82 = 0LL;
    v81 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 8LL))(v54);
    v98.m128_u64[0] = v54;
    v57 = 1;
    v98.m128_u64[1] = (unsigned __int64)&v81;
    LOBYTE(v99) = 1;
    if ( !v105 || (v110 = v86, v111 = v87, !CMILMatrix::Invert((CMILMatrix *)&v110, v55, v56)) )
    {
LABEL_56:
      (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v54 + 16LL))(v54, &v94);
      v65 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 24LL);
      v66 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v80.x + 120LL))(*(_QWORD *)&v80.x);
      v65(v54, v66);
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v54 + 32LL))(v54, &v97);
      v67 = CMILMatrix::GetD3DMatrix(&v86, &v110);
      LOBYTE(v76) = v57;
      LOBYTE(v68) = 1;
      v70 = v69(v54, a2, v67, v68, v76);
      v6 = v70;
      if ( v70 >= 0 )
      {
        gsl::final_action__lambda_2c23dc335d575e6068a59f43383614b1___::_final_action__lambda_2c23dc335d575e6068a59f43383614b1___(&v98);
        if ( (_QWORD)v81 )
        {
          std::_Deallocate<16,0>((_QWORD *)v81, (v82 - v81) & 0xFFFFFFFFFFFFFFF8uLL);
          v82 = 0LL;
          v81 = 0LL;
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v80);
        if ( g_LockAndReadSceneOffscreenTexture )
        {
          v71 = (*(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v49 + 144LL))(v49);
          v72 = (char *)this + 24;
          if ( !this )
            v72 = 0LL;
          (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v71 + 112LL))(v71, v72);
        }
        v73 = CDrawingContext::PushTransformInternal((const void **)this, 0LL, (__m128 *)&CMILMatrix::Identity, 0, 1);
        v6 = v73;
        if ( v73 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v73, 0x4EAu, 0LL);
        }
        else
        {
          *(_QWORD *)&v101.x = this;
          LOBYTE(v101.z) = 1;
          v74 = CDrawingContext::DrawBitmapRealization(
                  (__int64)this,
                  ((unsigned __int64)v49 + 8) & -(__int64)(v49 != 0LL),
                  (__int64)&v97,
                  (__int64)&v88,
                  0,
                  0,
                  (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue);
          v6 = v74;
          if ( v74 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v74, 0x4F3u, 0LL);
          gsl::final_action__lambda_b778ccec937677c8d794b2b5e6f06977___::_final_action__lambda_b778ccec937677c8d794b2b5e6f06977___((__int64)&v101);
        }
        goto LABEL_67;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v70, 0x4DFu, 0LL);
      gsl::final_action__lambda_2c23dc335d575e6068a59f43383614b1___::_final_action__lambda_2c23dc335d575e6068a59f43383614b1___(&v98);
      if ( (_QWORD)v81 )
      {
        std::_Deallocate<16,0>((_QWORD *)v81, (v82 - v81) & 0xFFFFFFFFFFFFFFF8uLL);
        v82 = 0LL;
        v81 = 0LL;
      }
      goto LABEL_73;
    }
    v58 = *((_QWORD *)&v81 + 1);
    v59 = v81;
    v60 = (__int64)(*((_QWORD *)&v81 + 1) - v81) >> 3;
    if ( v105 < v60 )
    {
      v58 = v81 + 8LL * v105;
LABEL_50:
      *((_QWORD *)&v81 + 1) = v58;
      goto LABEL_51;
    }
    if ( v105 > v60 )
    {
      if ( v105 <= (unsigned __int64)((v82 - (__int64)v81) >> 3) )
      {
        v61 = 8 * (v105 - v60);
        memset_0(*((void **)&v81 + 1), 0, v61);
        v59 = v81;
        v58 += v61;
        goto LABEL_50;
      }
      std::vector<ISpectreLightNode *>::_Resize_reallocate<std::_Value_init_tag>((const void **)&v81, v105);
      v58 = *((_QWORD *)&v81 + 1);
      v59 = v81;
    }
LABEL_51:
    if ( (v58 - v59) >> 3 )
    {
      do
      {
        if ( (*(int (__fastcall **)(_QWORD, struct _D3DMATRIX *, unsigned __int64))(**(_QWORD **)(v102[0]
                                                                                                + 8LL * (unsigned int)v4)
                                                                                  + 288LL))(
               *(_QWORD *)(v102[0] + 8LL * (unsigned int)v4),
               &v110,
               v59 + 8 * v4) >= 0 )
        {
          v62 = *(_QWORD *)(v81 + 8 * v4);
          v63 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v62 + 24LL);
          v64 = (*(__int64 (__fastcall **)(struct ISpectreWorld *))(*(_QWORD *)a2 + 40LL))(a2);
          v63(v62, v64);
        }
        ++v4;
        v59 = v81;
      }
      while ( v4 < (__int64)(*((_QWORD *)&v81 + 1) - v81) >> 3 );
    }
    v57 = 0;
    goto LABEL_56;
  }
  return v6;
}
