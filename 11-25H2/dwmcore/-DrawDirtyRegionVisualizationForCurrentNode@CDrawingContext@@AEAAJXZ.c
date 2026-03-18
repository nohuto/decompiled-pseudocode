/*
 * XREFs of ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180270324
 * Callers:
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E7AF0 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18007466C (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUD2D_RECT_F@@$0-0@gsl@@AEBU_D.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E7D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118590 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18012B670 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1801612EC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??$?0UD2D_RECT_F@@$0?0$0?0$0A@@?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@QEAA@AEBV?$span@UD2D_RECT_F@@$0?0@1@@Z @ 0x1801E7D68 (--$-0UD2D_RECT_F@@$0-0$0-0$0A@@-$span@$$CBUD2D_RECT_F@@$0-0@gsl@@QEAA@AEBV-$span@UD2D_RECT_F@@$0.c)
 *     ?_Tidy@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@AEAAXXZ @ 0x18021041C (-_Tidy@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x1802658FC (-CurrentRedrawRegionColor@CComposition@@QEAA-AU_D3DCOLORVALUE@@XZ.c)
 *     ??$?0$0?0V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@$0A@@?$span@UD2D_RECT_F@@$0?0@gsl@@QEAA@AEAV?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@Z @ 0x18026FAC4 (--$-0$0-0V-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@$0A@@-$span@UD2D_RECT_F@@$.c)
 *     ??0?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18026FD08 (--0-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@QEAA@XZ @ 0x18026FEB0 (--1-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$com_ptr_t@VCCo.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18027007C (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@XZ @ 0x180271674 (-GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimat.c)
 *     ?GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x1802728B4 (-GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV-$DynA.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180296AA8 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 *     ceilf_0 @ 0x1802E886C (ceilf_0.c)
 *     floorf_0 @ 0x1802E88A8 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawDirtyRegionVisualizationForCurrentNode(__m128 *this)
{
  unsigned int v2; // ebx
  CComposition *v3; // rcx
  unsigned __int64 v4; // rdi
  struct CVisual *CurrentVisual; // rsi
  __int64 v6; // rcx
  __m128 v7; // xmm0
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  __m128 v10; // xmm1
  __int64 v11; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v12; // r8
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  _QWORD *DirtyRegionVisualizationData; // rdi
  __int64 v22; // rcx
  _QWORD *v24; // rdi
  unsigned int i; // esi
  __int64 v26; // rdx
  __int64 *v27; // rax
  int v28; // eax
  struct D2D_RECT_F v30; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v31; // [rsp+48h] [rbp-C0h] BYREF
  int v32; // [rsp+58h] [rbp-B0h]
  int v33; // [rsp+5Ch] [rbp-ACh]
  _QWORD v34[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v35[4]; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v36[4]; // [rsp+98h] [rbp-70h] BYREF
  __int32 v37; // [rsp+D8h] [rbp-30h]
  __int128 X; // [rsp+E8h] [rbp-20h] BYREF

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(*(_QWORD *)this[496].m128_u64[1] + 184LL))(this[496].m128_u64[1]) )
  {
    v4 = this[496].m128_u64[1];
    CComposition::CurrentRedrawRegionColor(v3, (struct _D3DCOLORVALUE *)&v34[1]);
    v32 = 0;
    v33 = 0;
    LODWORD(v34[0]) = 0;
    v31 = 0LL;
    v30 = 0LL;
    X = 0LL;
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)this);
    CDrawingContext::CalcClippedNodeWorldSpaceBounds(v6, (__int64)CurrentVisual, &v30);
    v7 = this[6];
    v8 = this[7];
    v37 = this[10].m128_i32[0];
    v36[0] = v7;
    v9 = this[8];
    v36[1] = v8;
    v10 = this[9];
    v36[2] = v9;
    v36[3] = v10;
    CMILMatrix::Invert((CMILMatrix *)v36, v11, v12);
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v36, &v30, (float *)&X);
    v13 = *(float *)&X;
    if ( COERCE_FLOAT(X & _xmm) < 8388608.0 )
      v13 = (float)(int)floorf_0(*(float *)&X);
    *(float *)&X = v13;
    v14 = *((float *)&X + 1);
    if ( COERCE_FLOAT(DWORD1(X) & _xmm) < 8388608.0 )
      v14 = (float)(int)floorf_0(*((float *)&X + 1));
    v15 = *((float *)&X + 2);
    *((float *)&X + 1) = v14;
    if ( COERCE_FLOAT(DWORD2(X) & _xmm) < 8388608.0 )
      v15 = (float)(int)ceilf_0(*((float *)&X + 2));
    v16 = *((float *)&X + 3);
    *((float *)&X + 2) = v15;
    if ( COERCE_FLOAT(HIDWORD(X) & _xmm) < 8388608.0 )
      v16 = (float)(int)ceilf_0(*((float *)&X + 3));
    *((float *)&X + 3) = v16;
    v17 = CDrawingContext::PushTransformInternal((const void **)this, 0LL, this + 6, 0, 0);
    v2 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x1902u, 0LL);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v31);
    }
    else
    {
      LOBYTE(v18) = (*((_BYTE *)CurrentVisual + 105) & 2) != 0;
      CTreeDirty::GetIntersectingRedrawRects(v4 + 112, v4 + 2648, &X, v18, &v31);
      if ( (*((_BYTE *)CurrentVisual + 105) & 2) != 0 )
      {
        if ( (**((_DWORD **)CurrentVisual + 29) & 0x100000) != 0 )
        {
          DirtyRegionVisualizationData = (_QWORD *)CVisual::GetDirtyRegionVisualizationData(CurrentVisual, v19);
          while ( DirtyRegionVisualizationData[4] )
          {
            v22 = *(_QWORD *)(DirtyRegionVisualizationData[1]
                            + 8 * (DirtyRegionVisualizationData[3] & (DirtyRegionVisualizationData[2] - 1LL)));
            if ( (*(_BYTE *)(*(_QWORD *)(v22 + 32) + 536LL) & 1) != 0 )
              break;
            std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>::~tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>(v22);
            if ( DirtyRegionVisualizationData[4]-- == 1LL )
              DirtyRegionVisualizationData[3] = 0LL;
            else
              ++DirtyRegionVisualizationData[3];
          }
        }
        if ( LODWORD(v34[0]) )
          CVisual::AppendDirtyRegionVisualizationRects(CurrentVisual, &v31);
        if ( (**((_DWORD **)CurrentVisual + 29) & 0x100000) != 0 )
        {
          v24 = (_QWORD *)CVisual::GetDirtyRegionVisualizationData(CurrentVisual, v19);
          if ( v24[4] )
          {
            for ( i = 0; (unsigned __int64)i < v24[4]; ++i )
            {
              v26 = *(_QWORD *)(v24[1] + 8 * ((v24[2] - 1LL) & (i + v24[3])));
              *(__m128i *)&v34[1] = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v26 + 24) + 104LL));
              if ( _mm_shuffle_ps(*(__m128 *)&v34[1], *(__m128 *)&v34[1], 255).m128_f32[0] > 0.0 )
              {
                std::vector<D2D_RECT_F>::vector<D2D_RECT_F>(v35, v26);
                v27 = gsl::span<D2D_RECT_F,-1>::span<D2D_RECT_F,-1>(&X, v35);
                gsl::span<D2D_RECT_F const,-1>::span<D2D_RECT_F const,-1>(&v30, v27);
                v28 = CDrawingContext::FillRectanglesWithSolidColor(
                        (struct CDrawingContext *)this,
                        (__int64)&v30,
                        (__int64)&v34[1]);
                v2 = v28;
                if ( v28 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x1937u, 0LL);
                  std::vector<D2D_RECT_F>::_Tidy((__int64)v35);
                  goto LABEL_37;
                }
                std::vector<D2D_RECT_F>::_Tidy((__int64)v35);
              }
            }
            *((_BYTE *)g_pComposition + 6493) = 1;
          }
        }
      }
      else
      {
        gsl::details::extent_type<-1>::extent_type<-1>(&X, LODWORD(v34[0]));
        *((_QWORD *)&X + 1) = v31;
        if ( (_QWORD)X == -1LL || !(_QWORD)v31 && (_QWORD)X )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        gsl::span<D2D_RECT_F const,-1>::span<D2D_RECT_F const,-1>(&v30, (__int64 *)&X);
        v20 = CDrawingContext::FillRectanglesWithSolidColor(
                (struct CDrawingContext *)this,
                (__int64)&v30,
                (__int64)&v34[1]);
        v2 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x190Eu, 0LL);
      }
LABEL_37:
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v31);
      CDrawingContext::PopTransformInternal((CDrawingContext *)this, 0);
    }
  }
  return v2;
}
