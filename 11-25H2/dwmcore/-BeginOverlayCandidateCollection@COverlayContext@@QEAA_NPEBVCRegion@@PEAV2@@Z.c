/*
 * XREFs of ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x18023C6A8
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800829B0 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     ?GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18002C578 (-GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x18002D9D0 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18002DC40 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x180043E30 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180091460 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18009DC10 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800C6230 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18018959C (-IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     McTemplateU0dd_EventWriteTransfer @ 0x180202934 (McTemplateU0dd_EventWriteTransfer.c)
 *     ?GetCursorShapeBounds@CCursorVisual@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCDesktopTree@@@Z @ 0x180239480 (-GetCursorShapeBounds@CCursorVisual@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     ?HasRevokablePlanes@COverlayContext@@QEBA_NXZ @ 0x18023D270 (-HasRevokablePlanes@COverlayContext@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@QEAA_NXZ @ 0x180247DA4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?IsRevokable@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18027729C (-IsRevokable@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int8 __fastcall COverlayContext::BeginOverlayCandidateCollection(
        COverlayContext *this,
        const struct FastRegion::Internal::CRgnData **a2,
        const struct FastRegion::Internal::CRgnData **a3)
{
  double v3; // xmm2_8
  bool v5; // si
  unsigned __int8 v6; // r15
  const struct CMonitorTransform *MonitorTransform; // r14
  __int64 v9; // rcx
  CGlobalComposition *CurrentFrameId; // r12
  CGlobalComposition *v11; // r13
  const struct tagRECT *v12; // rax
  bool HasRevokablePlanes; // al
  __int64 v14; // r8
  __int64 v15; // rbx
  const struct tagRECT *v16; // rax
  int *v17; // rcx
  const struct tagRECT *v18; // rax
  const struct FastRegion::Internal::CRgnData **v19; // rbx
  COverlayContext::OverlayPlaneInfo *v20; // rbx
  char IsRevokable; // al
  char v22; // r14
  const struct tagRECT *v23; // rax
  const struct CVisualTree *v24; // rax
  const struct tagRECT *v25; // rax
  char v27; // [rsp+20h] [rbp-89h]
  char v28; // [rsp+21h] [rbp-88h]
  __int64 v30; // [rsp+30h] [rbp-79h]
  __int64 v31; // [rsp+30h] [rbp-79h]
  int v32[4]; // [rsp+38h] [rbp-71h] BYREF
  struct D2D_RECT_F v33; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v34[6]; // [rsp+58h] [rbp-51h] BYREF
  struct FastRegion::Internal::CRgnData *v35[10]; // [rsp+70h] [rbp-39h] BYREF

  v5 = 0;
  v6 = 0;
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 11);
  *(_WORD *)((char *)this + 19779) = 0;
  *((_QWORD *)this + 2453) = 0LL;
  *((_QWORD *)this + 2452) = 0LL;
  MonitorTransform = COverlayContext::GetMonitorTransform(this);
  if ( !CMILMatrix::Is2DAxisAlignedPreserving((const struct CMonitorTransform *)((char *)MonitorTransform + 52))
    || !(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 280LL))(*(_QWORD *)this) )
  {
    goto LABEL_53;
  }
  v6 = 1;
  CurrentFrameId = GetCurrentFrameId();
  v11 = (CGlobalComposition *)*((_QWORD *)this + 2470);
  v28 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 48LL))(*(_QWORD *)this);
  if ( v28
    || !(*(unsigned __int8 (__fastcall **)(_QWORD, const struct FastRegion::Internal::CRgnData **))(**(_QWORD **)this
                                                                                                  + 288LL))(
          *(_QWORD *)this,
          a3) )
  {
    if ( a2 )
    {
      v12 = (const struct tagRECT *)PixelAlign((int *)v34, (unsigned int *)MonitorTransform + 2, v3);
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v35, v12);
      if ( *(_DWORD *)*a2 && *(_DWORD *)v35[0] )
        v5 = FastRegion::Internal::CRgnData::Intersects(*a2, v35[0]) != 0;
      FastRegion::CRegion::FreeMemory(v35);
    }
  }
  else
  {
    v5 = 1;
  }
  v27 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SoftwareXORCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SoftwareXORCursor>::GetImpl'::`2'::impl) )
  {
    HasRevokablePlanes = COverlayContext::HasRevokablePlanes(this);
    v27 = HasRevokablePlanes;
    if ( !v28 )
    {
      v14 = *((_QWORD *)this + 1618);
      v15 = *((_QWORD *)this + 1617);
      v30 = v14;
      v9 = 0x8F5C28F5C28F5C29uLL * ((v14 - v15) >> 4);
      if ( (_DWORD)v9 )
      {
        while ( v15 != v14 )
        {
          if ( v5 || v11 == CurrentFrameId || HasRevokablePlanes )
          {
            COverlayContext::OverlayPlaneInfo::GetLocalClipRect(v15, (__int64)&v33, (__int64)MonitorTransform + 120);
            v16 = (const struct tagRECT *)PixelAlign((int *)v34, (unsigned int *)&v33, v3);
            CRegion::AddRectangle(a3, v16);
            HasRevokablePlanes = v27;
            v14 = v30;
          }
          v15 += 400LL;
        }
        goto LABEL_41;
      }
      if ( *((_QWORD *)this + 2468) )
      {
        if ( !v5 && v11 != CurrentFrameId )
          goto LABEL_51;
        v17 = (int *)v34;
LABEL_24:
        v18 = (const struct tagRECT *)PixelAlign(v17, (unsigned int *)MonitorTransform + 2, v3);
        v19 = a3;
        CRegion::AddRectangle(a3, v18);
        goto LABEL_42;
      }
    }
  }
  else if ( !v28 )
  {
    v9 = *((_QWORD *)this + 1618);
    v20 = (COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 1617);
    *(_QWORD *)&v33.left = v9;
    if ( -1030792151 * (unsigned int)((v9 - (__int64)v20) >> 4) )
    {
      v31 = (__int64)MonitorTransform + 120;
      while ( v20 != (COverlayContext::OverlayPlaneInfo *)v9 )
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
          IsRevokable = COverlayContext::OverlayPlaneInfo::IsRevokable(v20);
        else
          IsRevokable = COverlayContext::IsRevokable((CLegacyRenderTarget **)this, v20);
        v22 = IsRevokable;
        if ( v5 || v11 == CurrentFrameId || IsRevokable )
        {
          COverlayContext::OverlayPlaneInfo::GetLocalClipRect((__int64)v20, (__int64)v34, v31);
          v23 = (const struct tagRECT *)PixelAlign(v32, v34, v3);
          CRegion::AddRectangle(a3, v23);
        }
        v27 |= v22;
        v9 = *(_QWORD *)&v33.left;
        v20 = (COverlayContext::OverlayPlaneInfo *)((char *)v20 + 400);
      }
      goto LABEL_41;
    }
    if ( *((_QWORD *)this + 2468) )
    {
      if ( !v5 && v11 != CurrentFrameId )
        goto LABEL_53;
      v17 = v32;
      goto LABEL_24;
    }
  }
LABEL_41:
  v19 = a3;
LABEL_42:
  if ( v5 || v11 == CurrentFrameId )
  {
    if ( *((_QWORD *)this + 2451) )
    {
      v24 = (const struct CVisualTree *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this);
      CCursorVisual::GetCursorShapeBounds(*((CVisual **)this + 2451), (__m128i *)&v33, v24);
      if ( !IsEmpty(&v33) )
      {
        v25 = (const struct tagRECT *)PixelAlign(v32, (unsigned int *)&v33, v3);
        CRegion::AddRectangle(v19, v25);
      }
    }
  }
  if ( !v28 && v11 != CurrentFrameId )
  {
    if ( v5 )
    {
LABEL_52:
      *((_BYTE *)this + 19779) = 1;
      goto LABEL_53;
    }
    HasRevokablePlanes = v27;
LABEL_51:
    if ( !HasRevokablePlanes )
      goto LABEL_53;
    goto LABEL_52;
  }
LABEL_53:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    McTemplateU0dd_EventWriteTransfer(
      v9,
      &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Start,
      v6,
      *((unsigned __int8 *)this + 19779));
  return v6;
}
