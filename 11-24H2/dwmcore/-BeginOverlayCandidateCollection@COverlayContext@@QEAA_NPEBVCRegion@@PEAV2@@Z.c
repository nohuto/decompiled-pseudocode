/*
 * XREFs of ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x1802317DC
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800F7980 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x1800201A0 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x180060010 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180060A84 (-GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180072B00 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800984C0 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800F1DD0 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1801724A0 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     McTemplateU0dd_EventWriteTransfer @ 0x1801F69C4 (McTemplateU0dd_EventWriteTransfer.c)
 *     ?HasRevokablePlanes@COverlayContext@@QEBA_NXZ @ 0x180232A20 (-HasRevokablePlanes@COverlayContext@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180240E28 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@QEAA_NXZ @ 0x18025C744 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@Q.c)
 *     ?GetCursorBounds@COverlayContext@@AEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18026BF8C (-GetCursorBounds@COverlayContext@@AEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ContentOnTop@@@details@wil@@QEAA_NXZ @ 0x18026D2AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ContentOnTop@@@details@wil@@QEAA_.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int8 __fastcall COverlayContext::BeginOverlayCandidateCollection(
        COverlayContext *this,
        const struct FastRegion::Internal::CRgnData **a2,
        const struct FastRegion::Internal::CRgnData **a3)
{
  double v3; // xmm2_8
  COverlayContext *v5; // rdi
  bool v6; // r15
  unsigned __int8 v7; // si
  const struct CMonitorTransform *MonitorTransform; // r13
  __int64 v9; // rcx
  const struct tagRECT *v10; // rax
  CGlobalComposition *CurrentFrameId; // rax
  __int64 v12; // rcx
  CGlobalComposition *v13; // r14
  CGlobalComposition *v14; // r12
  char v15; // bl
  bool v16; // al
  const struct tagRECT *v17; // rax
  bool HasRevokablePlanes; // r12
  bool v19; // zf
  __int64 v20; // rbx
  __int64 v21; // r12
  const struct tagRECT *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r14
  const struct tagRECT *v25; // rax
  const struct tagRECT *v26; // rax
  __int64 v27; // r14
  __int64 v28; // rbx
  const struct tagRECT *v29; // rax
  const struct tagRECT *v30; // rax
  char v32; // [rsp+20h] [rbp-99h]
  bool v33; // [rsp+24h] [rbp-95h]
  CGlobalComposition *v35; // [rsp+30h] [rbp-89h]
  struct D2D_RECT_F v38; // [rsp+50h] [rbp-69h] BYREF
  int v39[4]; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v40[4]; // [rsp+70h] [rbp-49h] BYREF
  struct FastRegion::Internal::CRgnData *v41[10]; // [rsp+80h] [rbp-39h] BYREF

  v5 = this;
  v6 = 0;
  v7 = 0;
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 11);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ContentOnTop>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ContentOnTop>::GetImpl'::`2'::impl) )
  {
    *((_QWORD *)v5 + 2421) = 0LL;
    *((_QWORD *)v5 + 2420) = 0LL;
    *((_QWORD *)v5 + 2423) = 0LL;
    *((_QWORD *)v5 + 2422) = 0LL;
    *((_WORD *)v5 + 9696) = 0;
  }
  *((_BYTE *)v5 + 19589) = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
    *((_WORD *)v5 + 9796) = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
    *((_WORD *)v5 + 9795) = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ComposedFlipPerf>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ComposedFlipPerf>::GetImpl'::`2'::impl) )
  {
    *((_QWORD *)v5 + 2445) = 0LL;
    *((_QWORD *)v5 + 2444) = 0LL;
  }
  *((_QWORD *)v5 + 2419) = 0LL;
  *((_QWORD *)v5 + 2418) = 0LL;
  MonitorTransform = COverlayContext::GetMonitorTransform(v5);
  if ( CMILMatrix::Is2DAxisAlignedPreserving((const struct CMonitorTransform *)((char *)MonitorTransform + 52))
    && (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 280LL))(*(_QWORD *)v5) )
  {
    v7 = 1;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
    {
      if ( *((_QWORD *)v5 + 2403) )
      {
        COverlayContext::GetCursorBounds(v5, &v38);
        if ( !IsEmpty(&v38) )
        {
          v10 = (const struct tagRECT *)PixelAlign((int *)v40, (unsigned int *)&v38, v3);
          CRegion::AddRectangle(a3, v10);
          *((_BYTE *)v5 + 19592) = 1;
        }
      }
    }
    CurrentFrameId = GetCurrentFrameId();
    v12 = *(_QWORD *)v5;
    v13 = CurrentFrameId;
    v14 = (CGlobalComposition *)*((_QWORD *)v5 + 2441);
    *(_QWORD *)&v38.left = CurrentFrameId;
    v35 = v14;
    v33 = 0;
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
    if ( !v15 )
    {
      v6 = (*(unsigned __int8 (__fastcall **)(_QWORD, const struct FastRegion::Internal::CRgnData **))(**(_QWORD **)v5 + 288LL))(
             *(_QWORD *)v5,
             a3) != 0;
      v33 = v6;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
    {
      v16 = v15 || v14 == v13;
      *((_BYTE *)v5 + 19590) = v16;
    }
    if ( !v6 && a2 )
    {
      v17 = (const struct tagRECT *)PixelAlign((int *)v40, (unsigned int *)MonitorTransform + 2, v3);
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v41, v17);
      if ( *(_DWORD *)*a2 && *(_DWORD *)v41[0] )
      {
        v6 = FastRegion::Internal::CRgnData::Intersects(*a2, v41[0]) != 0;
        v33 = v6;
      }
      FastRegion::CRegion::FreeMemory(v41);
    }
    HasRevokablePlanes = 0;
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
    {
      HasRevokablePlanes = COverlayContext::HasRevokablePlanes(v5);
      if ( v15 )
        goto LABEL_62;
      v27 = *((_QWORD *)v5 + 1586);
      v28 = *((_QWORD *)v5 + 1585);
      v9 = 0x7D6343EB1A1F58D1LL * ((v27 - v28) >> 3);
      if ( (_DWORD)v9 )
      {
        v9 = (__int64)MonitorTransform + 120;
        while ( v28 != v27 )
        {
          if ( v6 || v35 == *(CGlobalComposition **)&v38.left || HasRevokablePlanes )
          {
            COverlayContext::OverlayPlaneInfo::GetLocalClipRect(v28, (__int64)v40, v9);
            v29 = (const struct tagRECT *)PixelAlign(v39, v40, v3);
            CRegion::AddRectangle(a3, v29);
            v9 = (__int64)MonitorTransform + 120;
          }
          v28 += 392LL;
        }
LABEL_58:
        if ( v35 == *(CGlobalComposition **)&v38.left )
          goto LABEL_62;
        if ( v6 )
        {
LABEL_61:
          *((_BYTE *)v5 + 19589) = 1;
          goto LABEL_62;
        }
LABEL_60:
        if ( !HasRevokablePlanes )
          goto LABEL_62;
        goto LABEL_61;
      }
      if ( !*((_QWORD *)v5 + 2439) )
        goto LABEL_58;
      if ( !v6 && v35 != *(CGlobalComposition **)&v38.left )
        goto LABEL_60;
LABEL_57:
      v30 = (const struct tagRECT *)PixelAlign(v39, (unsigned int *)MonitorTransform + 2, v3);
      CRegion::AddRectangle(a3, v30);
      goto LABEL_58;
    }
    if ( v15 )
      goto LABEL_62;
    if ( !IsEmpty((const struct D2D_RECT_F *)v5 + 1208) )
    {
      v32 = 1;
      goto LABEL_36;
    }
    v32 = 0;
    if ( v6 || v35 == *(CGlobalComposition **)&v38.left || COverlayContext::HasRevokablePlanes(v5) )
    {
LABEL_36:
      v19 = *((_QWORD *)v5 + 2439) == 0LL;
      *((_BYTE *)v5 + 19591) = 1;
      if ( v19 )
      {
        v20 = *((_QWORD *)v5 + 1585);
        v21 = *((_QWORD *)v5 + 1586);
        while ( v20 != v21 )
        {
          COverlayContext::OverlayPlaneInfo::GetLocalClipRect(v20, (__int64)v40, (__int64)MonitorTransform + 120);
          v22 = (const struct tagRECT *)PixelAlign(v39, v40, v3);
          CRegion::AddRectangle(a3, v22);
          v20 += 392LL;
        }
        v6 = v33;
        HasRevokablePlanes = 0;
        v23 = *((_QWORD *)this + 798);
        v24 = *((_QWORD *)this + 799);
        while ( v23 != v24 )
        {
          COverlayContext::OverlayPlaneInfo::GetLocalClipRect(v23, (__int64)v40, (__int64)MonitorTransform + 120);
          v25 = (const struct tagRECT *)PixelAlign(v39, v40, v3);
          CRegion::AddRectangle(a3, v25);
          v23 += 392LL;
        }
        v5 = this;
        v7 = 1;
        if ( v32 )
        {
          v26 = (const struct tagRECT *)PixelAlign(v39, (unsigned int *)this + 4832, v3);
          CRegion::AddRectangle(a3, v26);
          *((_DWORD *)this + 4835) = 0;
          *((_DWORD *)this + 4834) = 0;
          *((_DWORD *)this + 4833) = 0;
          *((_DWORD *)this + 4832) = 0;
        }
        goto LABEL_58;
      }
      goto LABEL_57;
    }
  }
LABEL_62:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    McTemplateU0dd_EventWriteTransfer(
      v9,
      &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Start,
      v7,
      *((unsigned __int8 *)v5 + 19592));
  return v7;
}
