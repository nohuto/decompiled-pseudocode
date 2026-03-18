/*
 * XREFs of ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800D4530
 * Callers:
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180057F90 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1802844F0 (-RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x18003A2A8 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x180055E00 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180056180 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800607B0 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x180098DF4 (-PresentNeeded@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z @ 0x18009F0C0 (-GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800D1D50 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x1800D3E10 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x1800D3E60 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D3EB0 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetTransform@CMonitorTransform@@QEBAAEBVCMILMatrix@@_N@Z @ 0x1800D44F0 (-GetTransform@CMonitorTransform@@QEBAAEBVCMILMatrix@@_N@Z.c)
 *     ?UseSuperSample@CLegacyRenderTarget@@UEBA_NXZ @ 0x1800D4510 (-UseSuperSample@CLegacyRenderTarget@@UEBA_NXZ.c)
 *     ?GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ @ 0x1800D50B0 (-GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D5570 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800D5FC8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800FC770 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?Pop@CBaseClipStack@@QEAAXXZ @ 0x1800FDFC0 (-Pop@CBaseClipStack@@QEAAXXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1284 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ @ 0x18022369C (-SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ.c)
 *     ?GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z @ 0x180226FB4 (-GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x180241D00 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::RenderDirtyRegion(
        CLegacyRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3)
{
  __m128 v3; // xmm2
  unsigned int v5; // r13d
  CDrawingContext *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r14
  struct CVisualTree *v9; // rcx
  CDrawingContext **v10; // xmm1_8
  CDirectFlipInfo *v11; // rcx
  __int64 (__fastcall *v12)(CLegacyRenderTarget *); // rax
  CDirectFlipInfo *v13; // rcx
  int v14; // ebx
  bool (__fastcall *v15)(CLegacyRenderTarget *); // rax
  CLegacyRenderTarget *v16; // rcx
  char v17; // al
  __int64 v18; // r8
  float *v19; // rdi
  float *v20; // r14
  float *v21; // rbx
  float v22; // xmm1_4
  float v23; // xmm0_4
  unsigned int v24; // xmm1_4
  struct CVisualTree *v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  const struct CMILMatrix *(__fastcall *v28)(CLegacyRenderTarget *); // rax
  const struct CMILMatrix *Transform; // rax
  __int64 v30; // r9
  float *v31; // r9
  float v32; // xmm0_4
  __m128i v33; // xmm6
  __m128i v34; // xmm3
  __m128i v35; // xmm7
  __m128i v36; // xmm8
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  int v39; // ecx
  __m128 v40; // xmm2
  __m128 v41; // xmm2
  int v42; // ecx
  __m128 v43; // xmm2
  __m128 v44; // xmm2
  int v45; // ecx
  __m128 v46; // xmm2
  __m128 v47; // xmm2
  int v48; // ecx
  __m128 v49; // xmm2
  __int64 v50; // rcx
  CDrawingContext *v51; // rax
  int v53; // eax
  float v54; // xmm1_4
  int v55; // eax
  int v56; // xmm0_4
  float v57; // xmm1_4
  int v58; // xmm0_4
  float v59; // xmm1_4
  int v60; // eax
  __m128 v61; // rt1
  int v62; // ebx
  int v63; // ebx
  int v64; // ebx
  CDirectFlipInfo *v65; // r13
  CVisual *v66; // rdi
  unsigned int v67; // ebx
  const struct CVisualTree *v68; // rax
  int v69; // eax
  int DeviceTarget; // eax
  int v71; // eax
  __int64 v72; // rax
  char v73; // [rsp+40h] [rbp-C0h]
  char v74; // [rsp+41h] [rbp-BFh]
  int v75; // [rsp+48h] [rbp-B8h] BYREF
  int v76; // [rsp+50h] [rbp-B0h] BYREF
  CDrawingContext *v77; // [rsp+58h] [rbp-A8h]
  int v78; // [rsp+60h] [rbp-A0h] BYREF
  float v79; // [rsp+68h] [rbp-98h] BYREF
  int v80; // [rsp+70h] [rbp-90h] BYREF
  float v81; // [rsp+78h] [rbp-88h] BYREF
  const struct COcclusionContext *OcclusionContext; // [rsp+80h] [rbp-80h]
  CDrawingContext *v83; // [rsp+88h] [rbp-78h] BYREF
  __int128 v84; // [rsp+90h] [rbp-70h]
  struct IDeviceTarget *v85[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v86; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v87; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+D0h] [rbp-30h] BYREF
  CDrawingContext **v89; // [rsp+E0h] [rbp-20h]
  __int64 v90; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+F0h] [rbp-10h] BYREF
  struct IDeviceTarget **v92; // [rsp+100h] [rbp+0h]
  __int64 v93; // [rsp+108h] [rbp+8h]
  int *v94; // [rsp+110h] [rbp+10h]
  __int64 v95; // [rsp+118h] [rbp+18h]
  float *v96; // [rsp+120h] [rbp+20h]
  __int64 v97; // [rsp+128h] [rbp+28h]
  int *v98; // [rsp+130h] [rbp+30h]
  __int64 v99; // [rsp+138h] [rbp+38h]
  float *v100; // [rsp+140h] [rbp+40h]
  __int64 v101; // [rsp+148h] [rbp+48h]
  struct IDeviceTarget **v102; // [rsp+150h] [rbp+50h]
  __int64 v103; // [rsp+158h] [rbp+58h]

  v83 = a3;
  v5 = 0;
  v77 = a2;
  v74 = 0;
  v6 = a2;
  OcclusionContext = CMonitorDirty::GetOcclusionContext((CLegacyRenderTarget *)((char *)this + 30768));
  *((_DWORD *)OcclusionContext + 390) = 0x7FFFFFFF;
  if ( !*((_BYTE *)this + 31224) )
    CMergedRectBase<8>::Optimize((char *)this + 30784);
  v8 = *((unsigned int *)this + 7696);
  if ( this == (CLegacyRenderTarget *)-30788LL && MEMORY[0xFFFFFFFFFFFFFFFC] )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v76 = *((_DWORD *)this + 7696);
    v75 = 0;
    v92 = v85;
    v85[0] = v6;
    v94 = &v75;
    v93 = 8LL;
    v96 = (float *)&v76;
    v95 = 4LL;
    v97 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      (const EVENT_DESCRIPTOR *)";",
      v7,
      4u,
      &v91);
  }
  v9 = (struct CVisualTree *)*((_QWORD *)this + 23);
  v10 = (CDrawingContext **)*((_QWORD *)this + 4140);
  v88 = (struct _EVENT_DATA_DESCRIPTOR)*((_OWORD *)this + 2069);
  v89 = v10;
  CDesktopTree::UpdateCVIRenderTargets(v9);
  v11 = (CDirectFlipInfo *)*((_QWORD *)this + 2466);
  if ( !v11 )
    goto LABEL_7;
  v62 = *((_DWORD *)v11 + 13);
  if ( v62 == 4 && !CDirectFlipInfo::RenderingRealizationChanged(v11) )
    goto LABEL_88;
  v63 = v62 - 1;
  if ( !v63 )
  {
    if ( !CDirectFlipInfo::PresentNeeded(*((CDirectFlipInfo **)this + 2466)) )
      return v5;
LABEL_7:
    if ( *((_BYTE *)this + 19305) || !*((_BYTE *)this + 30761) )
    {
LABEL_9:
      v12 = *(__int64 (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)this + 208LL);
      if ( (char *)v12 == (char *)&CLegacyRenderTarget::GetClearMode )
      {
        v13 = (CDirectFlipInfo *)*((_QWORD *)this + 2466);
        v14 = 0;
        if ( v13 )
        {
          v14 = *((_DWORD *)v13 + 13);
          if ( v14 == 4 && !CDirectFlipInfo::RenderingRealizationChanged(v13) )
            v14 = 2;
        }
        v75 = v14 < 3;
      }
      else
      {
        v75 = v12(this);
      }
      v15 = *(bool (__fastcall **)(CLegacyRenderTarget *))(*((_QWORD *)this + 11) + 40LL);
      v16 = (CLegacyRenderTarget *)((char *)this + 88);
      if ( v15 == CLegacyRenderTarget::UseSuperSample )
        v17 = CLegacyRenderTarget::UseSuperSample(v16);
      else
        v17 = v15(v16);
      v19 = (float *)((char *)this + 30796);
      v20 = (float *)((char *)this + 16 * v8 + 30788);
      v73 = v17;
      while ( 1 )
      {
        v21 = v19 - 2;
        if ( v19 - 2 == v20 )
          break;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v56 = *((_DWORD *)v19 + 1);
          v57 = *v19;
          v92 = (struct IDeviceTarget **)&v76;
          LODWORD(v85[0]) = v56;
          v58 = *((_DWORD *)v19 - 1);
          v94 = &v78;
          v96 = &v79;
          v81 = v57;
          v59 = *v21;
          v98 = &v80;
          v100 = &v81;
          v102 = v85;
          v78 = 0;
          v76 = 0;
          v80 = v58;
          v79 = v59;
          v93 = 4LL;
          v95 = 4LL;
          v97 = 4LL;
          v99 = 4LL;
          v101 = 4LL;
          v103 = 4LL;
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_ETWGUID_DIRTYREGIONEVENT,
            v18,
            7u,
            &v91);
        }
        v22 = *v19 - *v21;
        v23 = v19[1] - *(v19 - 1);
        v87 = 0LL;
        dword_1803FA768 += (int)(float)(v22 * v23);
        v24 = *((_DWORD *)v19 - 1);
        v25 = (struct CVisualTree *)*((_QWORD *)this + 14);
        *(float *)&v86 = *v21;
        *(_QWORD *)((char *)&v86 + 4) = __PAIR64__(*(_DWORD *)v19, v24);
        *((float *)&v86 + 3) = v19[1];
        v26 = CDrawingContext::DrawVisualTree(v77, v25, v75, v73, 0LL);
        v5 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x2EFu, 0LL);
          goto LABEL_47;
        }
        v27 = *((_QWORD *)this + 11);
        *(_OWORD *)v85 = 0LL;
        v86 = 0LL;
        v28 = *(const struct CMILMatrix *(__fastcall **)(CLegacyRenderTarget *))(v27 + 64);
        if ( v28 == CLegacyRenderTarget::GetDeviceTransform )
          Transform = CMonitorTransform::GetTransform(
                        (CLegacyRenderTarget *)((char *)this + 30504),
                        *((_BYTE *)this + 19305));
        else
          Transform = v28((CLegacyRenderTarget *)((char *)this + 88));
        if ( CMILMatrix::IsTranslateIgnoreZ<1>((__int64)Transform) )
        {
          v35 = (__m128i)*(unsigned int *)(v30 + 48);
          v36 = (__m128i)*(unsigned int *)(v30 + 52);
          v34 = v35;
          *(float *)v34.m128i_i32 = *(float *)v35.m128i_i32 + *(v19 - 2);
          *(float *)v35.m128i_i32 = *(float *)v35.m128i_i32 + *v19;
          v33 = v36;
          *(float *)v33.m128i_i32 = *(float *)v36.m128i_i32 + *(v19 - 1);
          *(float *)v36.m128i_i32 = *(float *)v36.m128i_i32 + v19[1];
        }
        else if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v30) )
        {
          v3 = (__m128)*(unsigned int *)v31;
          v34 = (__m128i)v3;
          v32 = v31[13];
          v33 = (__m128i)*((unsigned int *)v31 + 5);
          v35 = (__m128i)v3;
          v36 = v33;
          *(float *)v33.m128i_i32 = (float)(*(float *)v33.m128i_i32 * *(v19 - 1)) + v32;
          *(float *)v34.m128i_i32 = (float)(v3.m128_f32[0] * *(v19 - 2)) + v31[12];
          *(float *)v35.m128i_i32 = (float)(v3.m128_f32[0] * *v19) + v31[12];
          *(float *)v36.m128i_i32 = (float)(*(float *)v36.m128i_i32 * v19[1]) + v32;
          if ( v3.m128_f32[0] <= 0.0 || v31[5] <= 0.0 )
          {
            if ( *(float *)v34.m128i_i32 > *(float *)v35.m128i_i32 )
            {
              v37 = v34;
              v34 = v35;
              v35 = v37;
            }
            if ( *(float *)v33.m128i_i32 > *(float *)v36.m128i_i32 )
            {
              v38 = v33;
              v33 = v36;
              v36 = v38;
            }
          }
        }
        else
        {
          CMILMatrix::Transform2DRectToPerspective(
            (CMILMatrix *)v31,
            (const struct D2D_RECT_F *)(v19 - 2),
            (struct D2D_POINT_2F *const)&v91);
          v88.Ptr = 4LL;
          *(_QWORD *)&v88.Size = &v91;
          TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
            (float *)&v86,
            &v88.Ptr);
          v34 = (__m128i)(unsigned int)v86;
          v36 = (__m128i)HIDWORD(v86);
          v35 = (__m128i)DWORD2(v86);
          v33 = (__m128i)DWORD1(v86);
        }
        if ( (_mm_cvtsi128_si32(v34) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v3.m128_f32[0] = (float)(int)*(float *)v34.m128i_i32 - *(float *)v34.m128i_i32;
          v39 = (int)*(float *)v34.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v3, (__m128)LODWORD(FLOAT_N0_5)));
        }
        else
        {
          *(float *)v85 = *(float *)v34.m128i_i32 + 6291456.25;
          v39 = (int)(LODWORD(v85[0]) << 10) >> 11;
        }
        v40 = (__m128)v34;
        v40.m128_f32[0] = *(float *)v34.m128i_i32 - (float)v39;
        v41 = _mm_and_ps(v40, (__m128)(unsigned int)_xmm);
        if ( v41.m128_f32[0] > 0.00390625 )
          v39 = CFloatFPU::FloorSat(*(float *)v34.m128i_i32);
        LODWORD(v84) = v39;
        if ( (_mm_cvtsi128_si32(v33) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v41.m128_f32[0] = (float)(int)*(float *)v33.m128i_i32 - *(float *)v33.m128i_i32;
          v42 = (int)*(float *)v33.m128i_i32
              - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v41, (__m128)LODWORD(FLOAT_N0_5)));
        }
        else
        {
          *(float *)v85 = *(float *)v33.m128i_i32 + 6291456.25;
          v42 = (int)(LODWORD(v85[0]) << 10) >> 11;
        }
        v43 = (__m128)v33;
        v43.m128_f32[0] = *(float *)v33.m128i_i32 - (float)v42;
        v44 = _mm_and_ps(v43, (__m128)(unsigned int)_xmm);
        if ( v44.m128_f32[0] > 0.00390625 )
          v42 = CFloatFPU::FloorSat(*(float *)v33.m128i_i32);
        DWORD1(v84) = v42;
        if ( (_mm_cvtsi128_si32(v35) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v44.m128_f32[0] = (float)(int)*(float *)v35.m128i_i32 - *(float *)v35.m128i_i32;
          v45 = (int)*(float *)v35.m128i_i32
              - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v44, (__m128)LODWORD(FLOAT_N0_5)));
        }
        else
        {
          *(float *)v85 = *(float *)v35.m128i_i32 + 6291456.25;
          v45 = (int)(LODWORD(v85[0]) << 10) >> 11;
        }
        v46 = (__m128)v35;
        v46.m128_f32[0] = *(float *)v35.m128i_i32 - (float)v45;
        v47 = _mm_and_ps(v46, (__m128)(unsigned int)_xmm);
        if ( v47.m128_f32[0] > 0.00390625 )
          v45 = CFloatFPU::CeilingSat(*(float *)v35.m128i_i32);
        DWORD2(v84) = v45;
        if ( (_mm_cvtsi128_si32(v36) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v47.m128_f32[0] = (float)(int)*(float *)v36.m128i_i32 - *(float *)v36.m128i_i32;
          v61.m128_f32[0] = FLOAT_N0_5;
          v48 = (int)*(float *)v36.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v47, v61));
        }
        else
        {
          *(float *)v85 = *(float *)v36.m128i_i32 + 6291456.25;
          v48 = (int)(LODWORD(v85[0]) << 10) >> 11;
        }
        v49 = (__m128)v36;
        v49.m128_f32[0] = *(float *)v36.m128i_i32 - (float)v48;
        v3 = _mm_and_ps(v49, (__m128)(unsigned int)_xmm);
        if ( v3.m128_f32[0] > 0.00390625 )
          v48 = CFloatFPU::CeilingSat(*(float *)v36.m128i_i32);
        HIDWORD(v84) = v48;
        v50 = *((_QWORD *)this + 25) + 24LL;
        *(_OWORD *)v85 = v84;
        (*(void (__fastcall **)(__int64, struct IDeviceTarget **))(*(_QWORD *)v50 + 112LL))(v50, v85);
        v51 = v83;
        *((_BYTE *)this + 33512) = 1;
        if ( v51 )
        {
          v60 = CComposeTop::SubtractOverdraw(v51, v19 - 2);
          v5 = v60;
          if ( v60 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v60, 0x2F7u, 0LL);
            goto LABEL_47;
          }
        }
        v19 += 4;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
      {
LABEL_47:
        v6 = v77;
        goto LABEL_48;
      }
      v6 = v77;
      v89 = &v83;
      v83 = v77;
      v90 = 8LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop,
        v18,
        2u,
        &v88);
      goto LABEL_48;
    }
    v53 = *((_DWORD *)this + 30);
    v88 = *(struct _EVENT_DATA_DESCRIPTOR *)&_xmm.r;
    *(_QWORD *)&v86 = 0LL;
    v54 = (float)*((int *)this + 31);
    *((float *)&v86 + 2) = (float)v53;
    *((float *)&v86 + 3) = v54;
    v55 = CDrawingContext::PushGpuClipRectInternal((_DWORD)v6, 0, (unsigned int)&v86, 1, 1);
    v5 = v55;
    if ( v55 >= 0 )
    {
      v5 = (**((__int64 (__fastcall ***)(__int64, struct _EVENT_DATA_DESCRIPTOR *))v6 + 2))((__int64)v6 + 16, &v88);
      CBaseClipStack::Pop((CDrawingContext *)((char *)v6 + 3112));
      --*(_QWORD *)(*((_QWORD *)v6 + 94) - 184LL);
      *((_BYTE *)v6 + 8065) = 1;
      if ( (v5 & 0x80000000) == 0 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 25) + 24LL) + 112LL))(
          *((_QWORD *)this + 25) + 24LL,
          0LL);
        *((_BYTE *)this + 33512) = 1;
        CMonitorDirty::SetFullTightDirtyRegion((CLegacyRenderTarget *)((char *)this + 30768));
        *((_BYTE *)this + 30761) = 0;
        goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x2D1u, 0LL);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v55, 0x2C9u, 0LL);
    }
LABEL_48:
    if ( v74 )
      CDrawingContext::PopRenderTargetInternal(v6, 0LL, v18);
    return v5;
  }
  v64 = v63 - 1;
  if ( !v64 )
  {
LABEL_88:
    dword_1803FA754 |= 2u;
    return v5;
  }
  if ( (unsigned int)(v64 - 1) > 1 )
    goto LABEL_7;
  v65 = (CDirectFlipInfo *)*((_QWORD *)this + 2466);
  if ( *((int *)v65 + 13) < 3 )
  {
    v69 = 0x7FFFFFFF;
  }
  else
  {
    v66 = (CVisual *)*((_QWORD *)v65 + 1);
    v67 = *((_DWORD *)OcclusionContext + 384);
    v68 = (const struct CVisualTree *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v65 + 56LL))(*(_QWORD *)v65);
    v69 = CVisual::GetZ(v66, v68, v67);
    v6 = v77;
  }
  v85[0] = 0LL;
  *((_DWORD *)OcclusionContext + 390) = v69;
  DeviceTarget = CDirectFlipInfo::GetDeviceTarget(v65, v85);
  v5 = DeviceTarget;
  if ( DeviceTarget < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DeviceTarget, 0x2ACu, 0LL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v85);
    return v5;
  }
  if ( *((float *)this + 8280) != 0.0 )
  {
    v72 = (*(__int64 (__fastcall **)(char *, __int128 *))(*((_QWORD *)v85[0] + 1) + 24LL))((char *)v85[0] + 8, &v86);
    if ( IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v72 + 8)) )
      (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)v85[0] + 160LL))(v85[0]);
  }
  v71 = CDrawingContext::PushRenderTarget(v6, v85[0]);
  v5 = v71;
  if ( v71 >= 0 )
  {
    v74 = 1;
    if ( v85[0] )
      (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)v85[0] + 16LL))(v85[0]);
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v71, 0x2B4u, 0LL);
  if ( v85[0] )
    (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)v85[0] + 16LL))(v85[0]);
  return v5;
}
