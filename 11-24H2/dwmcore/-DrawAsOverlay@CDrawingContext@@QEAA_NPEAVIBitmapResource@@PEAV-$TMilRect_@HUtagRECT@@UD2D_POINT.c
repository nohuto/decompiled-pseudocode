/*
 * XREFs of ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180242F58
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180236DE0 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1802379C0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18023E7F0 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009360 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x18002D580 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18003DE60 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18004CE50 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18005EBA0 (-IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800615A0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180063EA4 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?reserve_region@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x18006A4F0 (-reserve_region@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B728 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUD2D_RECT_F@@$0-0@gsl@@AEBU_D.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D3950 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPE.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5C80 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180139F24 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18016A440 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ @ 0x1801C9680 (-IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ.c)
 *     ?FindOverlayPlaneIndex@COverlayContext@@AEBAHPEBVCVisual@@U_LUID@@@Z @ 0x1801EE648 (-FindOverlayPlaneIndex@COverlayContext@@AEBAHPEBVCVisual@@U_LUID@@@Z.c)
 *     ?GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1801F3254 (-GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetSwapChainOverlayColor@CDrawingContext@@AEBA?AU_D3DCOLORVALUE@@PEAVISwapChainRealization@@PEBVIBitmapResource@@@Z @ 0x1801FC6B8 (-GetSwapChainOverlayColor@CDrawingContext@@AEBA-AU_D3DCOLORVALUE@@PEAVISwapChainRealization@@PEB.c)
 *     ??1CSetOverlayColorRenderStateScope@CDrawingContext@@QEAA@XZ @ 0x1802137F4 (--1CSetOverlayColorRenderStateScope@CDrawingContext@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDrawingContext::DrawAsOverlay(COverlayContext **this, CCompositionSurfaceBitmap *a2, _QWORD *a3)
{
  char v6; // r14
  __int64 (__fastcall *v7)(CCompositionSurfaceBitmap *, struct IBitmapRealization **); // rax
  int v8; // eax
  __int64 (__fastcall *v9)(CGDISectionBitmapRealization *, const struct _GUID *, void **); // rax
  int v10; // eax
  bool IsNormalDesktopRender; // r12
  COverlayContext *v12; // rdi
  __m128i v13; // xmm7
  __m128i v14; // xmm6
  const struct CVisual *CurrentVisual; // rax
  struct _LUID v16; // r8
  int OverlayPlaneIndex; // eax
  __int64 v18; // rcx
  __int128 v19; // xmm0
  char v20; // bl
  void (__fastcall *v21)(CCompositionSurfaceBitmap *, __int64, __int64, const struct CMILMatrix *, int, unsigned __int64); // rdi
  const struct CMILMatrix *TopByReference; // rax
  __int64 v23; // rdx
  int v24; // r8d
  COverlayContext *v25; // rcx
  int v26; // eax
  D3DVALUE v27; // r10d
  int v28; // r12d
  int v29; // eax
  int v30; // r13d
  bool v31; // cc
  D3DVALUE v32; // r8d
  D3DVALUE v33; // eax
  int v34; // edi
  int v35; // ebx
  int v36; // ecx
  D3DVALUE v37; // eax
  int v38; // eax
  __int64 i; // rax
  struct _D3DCOLORVALUE *SwapChainOverlayColor; // rax
  const struct D2D_MATRIX_3X2_F *v41; // r9
  int v42; // eax
  struct ISwapChainRealization *v43; // rdi
  _BYTE *v44; // rbx
  __int64 v45; // rdx
  __int64 j; // rax
  struct D2D_RECT_F *v47; // rax
  FastRegion::Internal::CRgnData *v48; // rcx
  __int64 v49; // rbx
  int v50; // eax
  __int64 (*v51)(void); // rax
  char IsOverlayRequired; // al
  char *v54; // [rsp+48h] [rbp-C0h] BYREF
  struct ISwapChainRealization *v55[2]; // [rsp+50h] [rbp-B8h] BYREF
  struct IBitmapRealization *v56; // [rsp+60h] [rbp-A8h] BYREF
  int v57; // [rsp+68h] [rbp-A0h]
  __m128 v58; // [rsp+78h] [rbp-90h] BYREF
  _DWORD *v59; // [rsp+88h] [rbp-80h]
  __int64 v60; // [rsp+90h] [rbp-78h]
  int v61; // [rsp+98h] [rbp-70h]
  int v62; // [rsp+B8h] [rbp-50h]
  struct _D3DCOLORVALUE v63; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v64[2]; // [rsp+D8h] [rbp-30h] BYREF
  struct D2D_RECT_F v65; // [rsp+E8h] [rbp-20h] BYREF
  struct ISwapChainRealization *v66; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE *v67; // [rsp+100h] [rbp-8h]
  char *v68; // [rsp+108h] [rbp+0h]
  _BYTE v69[64]; // [rsp+110h] [rbp+8h] BYREF
  char v70; // [rsp+150h] [rbp+48h] BYREF
  char *v71; // [rsp+158h] [rbp+50h] BYREF
  char v72; // [rsp+160h] [rbp+58h] BYREF
  FastRegion::CRegion *v73; // [rsp+1A8h] [rbp+A0h] BYREF
  char v74; // [rsp+1B0h] [rbp+A8h] BYREF

  a3[1] = 0LL;
  *a3 = 0LL;
  v6 = 0;
  v56 = 0LL;
  v54 = 0LL;
  if ( this[6] )
  {
    v7 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, struct IBitmapRealization **))(*(_QWORD *)a2 + 64LL);
    v8 = v7 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization
       ? CCompositionSurfaceBitmap::GetCurrentRenderingRealization(a2, &v56)
       : v7(a2, &v56);
    if ( v8 >= 0 )
    {
      v9 = **(__int64 (__fastcall ***)(CGDISectionBitmapRealization *, const struct _GUID *, void **))v56;
      v10 = v9 == CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface
          ? CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface(
              v56,
              &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c,
              (void **)&v54)
          : v9(v56, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, (void **)&v54);
      if ( v10 >= 0 )
      {
        IsNormalDesktopRender = CDrawingContext::IsNormalDesktopRender((CDrawingContext *)this);
        if ( IsNormalDesktopRender
          && (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v54 + 144LL))(v54)
          && ((*(unsigned __int8 (__fastcall **)(COverlayContext *))(*(_QWORD *)this[4] + 128LL))(this[4])
           || (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v54 + 152LL))(v54)) )
        {
          v12 = this[6];
          v13 = 0LL;
          v14 = 0LL;
          *(_OWORD *)v55 = 0LL;
          (*(void (__fastcall **)(char *, _QWORD *))(*((_QWORD *)v54 + 2) + 24LL))(v54 + 16, v64);
          CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)this);
          OverlayPlaneIndex = COverlayContext::FindOverlayPlaneIndex(v12, CurrentVisual, v16);
          if ( OverlayPlaneIndex != -1 )
          {
            v6 = 1;
            v18 = *((_QWORD *)v12 + 1585) + 392LL * OverlayPlaneIndex;
            v13 = *(__m128i *)(v18 + 68);
            v19 = *(_OWORD *)(v18 + 244);
            v14 = *(__m128i *)(v18 + 52);
            *(__m128i *)v55 = v13;
            *(_OWORD *)a3 = v19;
          }
          if ( v6 )
          {
            v20 = *((_BYTE *)this + 192);
            v21 = *(void (__fastcall **)(CCompositionSurfaceBitmap *, __int64, __int64, const struct CMILMatrix *, int, unsigned __int64))(*(_QWORD *)a2 + 48LL);
            (*(void (__fastcall **)(__int64, _QWORD *))(*((_QWORD *)this[4] + 1) + 24LL))((__int64)this[4] + 8, v64);
            TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 36));
            LOBYTE(v23) = IsNormalDesktopRender;
            v21(a2, v23, 1LL, TopByReference, v24, ((unsigned __int64)this + 164) & -(__int64)(v20 != 0));
            ++*((_DWORD *)this + 163);
            v25 = this[6];
            v64[0] = this;
            v62 = 0;
            COverlayContext::GetInverseDesktopMPOTransform(v25, (struct CMILMatrix *)&v58);
            v26 = CDrawingContext::PushTransformInternal((const void **)this, 0LL, &v58, 0, 1);
            if ( v26 >= 0 )
            {
              *(struct _D3DCOLORVALUE *)&v63.r = (struct _D3DCOLORVALUE)v14;
              v27 = *(float *)&v14.m128i_i32[1];
              v28 = _mm_cvtsi128_si32(v13);
              v29 = _mm_cvtsi128_si32(v14);
              v30 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 4));
              v31 = v28 <= v29;
              v57 = v29;
              v32 = *(float *)&v29;
              v33 = *(float *)&v14.m128i_i32[2];
              v34 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
              if ( !v31 )
                v32 = *(float *)&v28;
              v35 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 12));
              v36 = v34;
              v63.r = v32;
              if ( v30 > v14.m128i_i32[1] )
                v27 = *(float *)&v30;
              v63.g = v27;
              if ( v34 >= v14.m128i_i32[2] )
                v36 = v14.m128i_i32[2];
              else
                v33 = *(float *)&v34;
              v63.b = v33;
              v37 = *(float *)&v14.m128i_i32[3];
              if ( v35 < v14.m128i_i32[3] )
                v37 = *(float *)&v35;
              v63.a = v37;
              if ( v36 <= SLODWORD(v32) )
                goto LABEL_31;
              v38 = v35;
              if ( v35 >= v14.m128i_i32[3] )
                v38 = v14.m128i_i32[3];
              if ( v38 <= SLODWORD(v27) )
              {
LABEL_31:
                v63.a = 0.0;
                v63.b = 0.0;
                v63.g = 0.0;
                v63.r = 0.0;
              }
              for ( i = 0LL; i < 16; i += 4LL )
                *(float *)((char *)&v65.left + i) = (float)*(int *)((char *)&v63.r + i);
              SwapChainOverlayColor = CDrawingContext::GetSwapChainOverlayColor(
                                        (CDrawingContext *)this,
                                        &v63,
                                        (int (__fastcall ***)(struct ISwapChainRealization *, GUID *, __int64 *))v54,
                                        a2);
              v42 = CDrawingContext::RenderOverlayColor(
                      (struct CDrawingContext *)this,
                      SwapChainOverlayColor,
                      &v65,
                      v41);
              if ( v42 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v42, 0x8Bu, 0LL);
              }
              else
              {
                v73 = (FastRegion::CRegion *)&v74;
                FastRegion::CRegion::SetRectangle(
                  (FastRegion::CRegion *)&v73,
                  v57,
                  _mm_cvtsi128_si32(_mm_srli_si128(v14, 4)),
                  _mm_cvtsi128_si32(_mm_srli_si128(v14, 8)),
                  _mm_cvtsi128_si32(_mm_srli_si128(v14, 12)));
                v71 = &v72;
                FastRegion::CRegion::SetRectangle((FastRegion::CRegion *)&v71, v28, v30, v34, v35);
                CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)&v71, &v73);
                v43 = (struct ISwapChainRealization *)v69;
                v68 = &v70;
                v44 = v69;
                v66 = (struct ISwapChainRealization *)v69;
                v67 = v69;
                FastRegion::CRegion::BeginIterator((int **)&v71, (__int64)&v58);
                while ( (unsigned __int64)v59 < v58.m128_u64[1] )
                {
                  HIDWORD(v55[0]) = *v59;
                  HIDWORD(v55[1]) = v59[2];
                  v45 = 2 * v61;
                  LODWORD(v55[0]) = *(_DWORD *)(v60 + 4 * v45);
                  LODWORD(v55[1]) = *(_DWORD *)(v60 + 4 * v45 + 4);
                  for ( j = 0LL; j < 16; j += 4LL )
                    *(float *)((char *)&v65.left + j) = (float)*(int *)((char *)v55 + j);
                  v47 = (struct D2D_RECT_F *)detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::reserve_region(
                                               (__int64)&v66,
                                               (v44 - (_BYTE *)v43) >> 4,
                                               1uLL);
                  *v47 = v65;
                  FastRegion::Internal::CRgnData::StepIterator(v48, (struct FastRegion::CRegion::Iterator *)&v58);
                  v44 = v67;
                  v43 = v66;
                }
                v49 = (v44 - (_BYTE *)v43) >> 4;
                if ( v49 )
                {
                  gsl::details::extent_type<-1>::extent_type<-1>(v55, v49);
                  v55[1] = v43;
                  if ( v55[0] == (struct ISwapChainRealization *)-1LL || !v43 && v55[0] )
                  {
                    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
                    __debugbreak();
                  }
                  v50 = CDrawingContext::FillRectanglesWithSolidColor(
                          (struct CDrawingContext *)this,
                          (__int64)v55,
                          (__int64)&_xmm);
                  if ( v50 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v50, 0xA6u, 0LL);
                    detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)&v66);
                    FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&v71);
                    FastRegion::CRegion::FreeMemory(&v73);
                    CDrawingContext::PopTransformInternal((CDrawingContext *)this, 1);
LABEL_51:
                    CDrawingContext::CSetOverlayColorRenderStateScope::~CSetOverlayColorRenderStateScope((CDrawingContext::CSetOverlayColorRenderStateScope *)v64);
                    goto LABEL_56;
                  }
                }
                detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)&v66);
                FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&v71);
                FastRegion::CRegion::FreeMemory(&v73);
              }
              CDrawingContext::PopTransformInternal((CDrawingContext *)this, 1);
              --*((_DWORD *)this + 163);
              goto LABEL_56;
            }
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x82u, 0LL);
            goto LABEL_51;
          }
        }
        v51 = *(__int64 (**)(void))(*(_QWORD *)v54 + 152LL);
        if ( (char *)v51 == (char *)CDxHandleBitmapRealization::IsOverlayRequired )
          IsOverlayRequired = CDxHandleBitmapRealization::IsOverlayRequired((CDxHandleBitmapRealization *)v54);
        else
          IsOverlayRequired = v51();
        v6 = IsOverlayRequired;
      }
    }
  }
LABEL_56:
  if ( v54 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v54 + 16LL))(v54);
  if ( v56 )
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v56 + 16LL))(v56);
  return v6;
}
