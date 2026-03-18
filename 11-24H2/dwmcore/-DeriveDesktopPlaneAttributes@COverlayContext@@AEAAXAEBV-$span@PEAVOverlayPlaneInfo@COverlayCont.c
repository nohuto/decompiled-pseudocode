/*
 * XREFs of ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x180231CCC
 * Callers:
 *     ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18005FD04 (-TrimCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180232AB8 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?IsCandidateSupportedSingleton@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAVOverlayPlaneInfo@1@@Z @ 0x18026C468 (-IsCandidateSupportedSingleton@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PE.c)
 * Callees:
 *     ?CalcDesktopClip@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180027A6C (-CalcDesktopClip@COverlayContext@@AEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gs.c)
 *     ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x18005EC3C (-CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayConte.c)
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x180060010 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?OverlaysEnabled@COverlayContext@@QEBA_NXZ @ 0x18018A47C (-OverlaysEnabled@COverlayContext@@QEBA_NXZ.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801C7288 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::DeriveDesktopPlaneAttributes(COverlayContext *this, _QWORD *a2, char a3)
{
  bool v5; // zf
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rax
  const struct CMonitorTransform *MonitorTransform; // rax
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF

  *((_BYTE *)this + 19089) = a3;
  if ( COverlayContext::CanFastDisableDesktopPlane(this, a2) )
    goto LABEL_13;
  *((_BYTE *)this + 19088) = 1;
  if ( !*((_DWORD *)this + 16) || (v5 = !COverlayContext::OverlaysEnabled(this), v6 = 4, !v5) )
    v6 = 0;
  *((_DWORD *)this + 4744) = v6;
  *((_DWORD *)this + 4757) = 1;
  *((_DWORD *)this + 4758) = *a2 != 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)this + 24LL))(*(_QWORD *)this, &v15);
  v8 = *(_QWORD *)this + 8LL;
  v9 = *(_DWORD *)(v7 + 8);
  *((_DWORD *)this + 4763) = v9;
  v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v8 + 24LL))(v8, &v15);
  *((_DWORD *)this + 4770) = ConvertSDRBoostToSDRWhiteLevel(*(float *)(v10 + 16), v9);
  *((_DWORD *)this + 4768) = 2;
  if ( *((_BYTE *)this + 19089) )
  {
    MonitorTransform = COverlayContext::GetMonitorTransform(this);
    *(_QWORD *)((char *)this + 18980) = 0LL;
    *((_DWORD *)this + 4747) = *((_DWORD *)MonitorTransform + 10);
    *((_DWORD *)this + 4748) = *((_DWORD *)MonitorTransform + 11);
    *((_DWORD *)this + 4749) = *((_DWORD *)MonitorTransform + 6);
    *((_DWORD *)this + 4750) = *((_DWORD *)MonitorTransform + 7);
    *((_DWORD *)this + 4751) = *((_DWORD *)MonitorTransform + 8);
    *((_DWORD *)this + 4752) = *((_DWORD *)MonitorTransform + 9);
  }
  else
  {
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 40LL))(
      *(_QWORD *)this + 8LL,
      &v15);
    *(_QWORD *)((char *)this + 18988) = v15;
    *(_QWORD *)((char *)this + 18980) = 0LL;
    *(_OWORD *)((char *)this + 18996) = *(_OWORD *)((char *)this + 18980);
  }
  v15 = 0LL;
  if ( !COverlayContext::CalcDesktopClip((__int64)this, (__int64)a2, &v15) )
  {
LABEL_13:
    *((_BYTE *)this + 19088) = 0;
  }
  else
  {
    if ( *((_BYTE *)this + 19579) )
      v12 = *(_OWORD *)((char *)this + 18996);
    else
      v12 = v15;
    *(_OWORD *)((char *)this + 19012) = v12;
  }
  LOBYTE(v13) = wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl);
  if ( !(_BYTE)v13 )
  {
    LOBYTE(v13) = *((_BYTE *)this + 19089);
    if ( *((_BYTE *)this + 19209) != (_BYTE)v13 )
    {
      if ( *((_BYTE *)this + 19088) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 48LL))(*(_QWORD *)this + 8LL);
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 256LL))(*(_QWORD *)this);
      if ( *(_BYTE *)(v13 + 256) )
        *(_BYTE *)(v13 + 257) = 1;
    }
  }
  return v13;
}
