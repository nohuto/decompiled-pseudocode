/*
 * XREFs of ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803D1EB0
 * Callers:
 *     ?InputHostHiding@SearchAppDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1803D0370 (-InputHostHiding@SearchAppDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@SearchAppDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x1803D03D0 (-InputHostShowing@SearchAppDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MO.c)
 *     ?OnPearlRectChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803D1000 (-OnPearlRectChanged@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803D1820 (-OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803D18D0 (-OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803D1C68 (-OnViewUncloaking@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnWorkAreaChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803D1DC0 (-OnWorkAreaChanged@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B6B84 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180209CC4 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802B2D20 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x1803905EC (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 *     ?IsWideAtStartupEnabled@@YAEH@Z @ 0x180390F20 (-IsWideAtStartupEnabled@@YAEH@Z.c)
 *     ??$Start@AEAHAEAH@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@SA?AV01@AEAH0@Z @ 0x1803CD4E8 (--$Start@AEAHAEAH@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@SA-A.c)
 *     ??1CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1803CD96C (--1CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1803CDD20 (-ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@.c)
 *     ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1803CE650 (-CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?ComputeCortanaWindowRect@SearchAppDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@1_N@Z @ 0x1803CEAC0 (-ComputeCortanaWindowRect@SearchAppDesktopExperienceView@@AEAA-AUtagRECT@@W4EDGEUI_TRAYSTUCKPLAC.c)
 *     ?EnsureInputHostManager@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CF280 (-EnsureInputHostManager@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1803CFAE0 (-GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4.c)
 *     ?GetStartSize@SearchAppDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1803CFE9C (-GetStartSize@SearchAppDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ?GetViewWrapper@SearchAppDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1803D00F8 (-GetViewWrapper@SearchAppDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop.c)
 *     ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1803D0564 (-IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?ResetCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803D2A08 (-ResetCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1803D3104 (-ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?Stop@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHHHH@Z @ 0x1803D3968 (-Stop@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHHHH@Z.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180682848 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SearchAppDesktopExperienceView::PositionCortanaWindow(
        SearchAppDesktopExperienceView *this,
        bool a2,
        bool a3)
{
  bool v3; // r13
  char v5; // r14
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  HMONITOR v10; // rbx
  int MonitorInformation; // esi
  HMONITOR v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  char v15; // r12
  struct tagRECT v16; // xmm6
  char v17; // r15
  struct tagRECT v18; // xmm7
  int v19; // esi
  HMONITOR v20; // r8
  int DpiForMonitor; // r14d
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // ecx
  int v25; // r13d
  unsigned int DefaultCortanaWidthWithoutGutter; // eax
  HMONITOR v27; // r8
  int v28; // eax
  unsigned int v29; // eax
  HMONITOR v30; // r8
  HMONITOR v31; // r8
  bool v32; // r12
  __int64 v33; // rcx
  int v34; // eax
  HMONITOR v35; // r8
  int v36; // r11d
  int v37; // ebx
  struct tagRECT *v38; // rax
  int v39; // eax
  unsigned int v40; // eax
  int v41; // ecx
  __int64 *v42; // rbx
  __int64 v43; // rax
  int v44; // eax
  bool v46[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v47; // [rsp+4Ch] [rbp-BCh] BYREF
  int v48; // [rsp+50h] [rbp-B8h] BYREF
  int v49; // [rsp+54h] [rbp-B4h] BYREF
  int v50; // [rsp+58h] [rbp-B0h] BYREF
  int v51; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 *v52; // [rsp+60h] [rbp-A8h] BYREF
  struct tagRECT v53; // [rsp+68h] [rbp-A0h] BYREF
  RECT v54; // [rsp+78h] [rbp-90h] BYREF
  struct tagRECT v55; // [rsp+88h] [rbp-80h] BYREF
  __int128 v56; // [rsp+98h] [rbp-70h] BYREF
  __int128 v57; // [rsp+A8h] [rbp-60h]
  __int128 v58; // [rsp+B8h] [rbp-50h]
  __int128 v59; // [rsp+C8h] [rbp-40h]
  _OWORD v60[4]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v61[16]; // [rsp+118h] [rbp+10h] BYREF
  struct tagRECT rcDst; // [rsp+128h] [rbp+20h] BYREF
  struct tagRECT v63; // [rsp+138h] [rbp+30h] BYREF
  __int128 v64; // [rsp+148h] [rbp+40h] BYREF
  RECT rcSrc2; // [rsp+158h] [rbp+50h] BYREF
  RECT rc; // [rsp+168h] [rbp+60h] BYREF
  struct tagRECT v67; // [rsp+178h] [rbp+70h] BYREF
  RECT rcSrc1; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v69[336]; // [rsp+198h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+340h] [rbp+238h]

  v46[3] = a3;
  v3 = a2;
  v46[2] = a2;
  v49 = (int)*((float *)this + 43);
  v47 = (int)*((float *)this + 44);
  CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::Start<int &,int &>(
    (CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *)v69,
    &v49,
    &v47);
  v5 = 0;
  *((_BYTE *)this + 198) = 0;
  rc = 0LL;
  v6 = SearchAppDesktopExperienceView::CalculateLastActivatedTrayItemRect(this, &rc);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = MonitorFromRect(&rc, 0);
    if ( !v10 )
    {
      v7 = -2147418113;
      v8 = 2147549183LL;
      v9 = 1799LL;
      goto LABEL_5;
    }
    v67 = 0LL;
    v63 = 0LL;
    v53 = 0LL;
    v48 = 0;
    v46[0] = 0;
    MonitorInformation = SearchAppDesktopExperienceView::GetMonitorInformation(
                           this,
                           v10,
                           &v63,
                           &v67,
                           &v53,
                           (enum EDGEUI_TRAYSTUCKPLACE *)&v48,
                           v46);
    if ( MonitorInformation < 0 )
    {
      v13 = 1805LL;
      goto LABEL_8;
    }
    v14 = ExperienceManagerUtils::UnscaleByPerMonitorDPI(
            (ExperienceManagerUtils *)(unsigned int)(v63.right - v63.left),
            (int)v10,
            v12);
    *((_BYTE *)this + 204) = IsWideAtStartupEnabled(v14) != 0;
    v46[0] = 0;
    v15 = 0;
    v16 = v67;
    rcSrc2 = v67;
    v17 = 1;
    v18 = v53;
    if ( v48 == -1 )
      goto LABEL_36;
    *(_QWORD *)&v53.left = 0LL;
    MonitorInformation = SearchAppDesktopExperienceView::GetStartSize(this, (struct Windows::Foundation::Size *)&v53);
    if ( MonitorInformation < 0 )
    {
      v13 = 1820LL;
      goto LABEL_8;
    }
    v19 = (int)*(float *)&v53.top;
    v47 = 0;
    v50 = 0;
    DpiForMonitor = GetDpiForMonitor(v10, 0LL, &v47, &v50);
    if ( DpiForMonitor < 0 )
    {
      v22 = 1825LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)DpiForMonitor);
      v7 = DpiForMonitor;
      goto LABEL_66;
    }
    v23 = *((_DWORD *)this + 29);
    if ( !v23 )
      goto LABEL_21;
    v24 = v23 - 1;
    if ( v24 )
    {
      if ( v24 != 1 )
      {
        v7 = -2147467259;
        goto LABEL_66;
      }
      v25 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v16, 8)) - _mm_cvtsi128_si32((__m128i)v16);
      v19 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v16, 12)) - _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v16, 4));
      goto LABEL_22;
    }
    DefaultCortanaWidthWithoutGutter = GetDefaultCortanaWidthWithoutGutter(&v63, v47);
    v28 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
            (ExperienceManagerUtils *)DefaultCortanaWidthWithoutGutter,
            (ExperienceManagerUtils *)v10,
            v27);
    v25 = v49;
    if ( v49 <= v28 )
    {
LABEL_21:
      v29 = GetDefaultCortanaWidthWithoutGutter(&v63, v47);
      v25 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
              (ExperienceManagerUtils *)v29,
              (ExperienceManagerUtils *)v10,
              v30);
    }
LABEL_22:
    if ( v19 <= ExperienceManagerUtils::ScaleByPerMonitorDPI(
                  (ExperienceManagerUtils *)0x1E0,
                  (ExperienceManagerUtils *)v10,
                  v20) )
      v19 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
              (ExperienceManagerUtils *)0x1E0,
              (ExperienceManagerUtils *)v10,
              v31);
    v32 = *((_DWORD *)this + 29) == 1 && *((_DWORD *)this + 30) == 6 && v48 == 3;
    DpiForMonitor = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, v10, v46);
    if ( DpiForMonitor < 0 )
    {
      v22 = 1859LL;
      goto LABEL_14;
    }
    if ( v46[0] || v32 )
    {
      v5 = 1;
      v33 = (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v18, 12))
                         - _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v18, 4)));
      v19 += v33;
    }
    else
    {
      v5 = 0;
    }
    v54 = rc;
    v55 = v18;
    rcSrc2 = *(RECT *)SearchAppDesktopExperienceView::ComputeCortanaWindowRect(
                        v33,
                        (__int64)v61,
                        v48,
                        v25,
                        v19,
                        &v55,
                        &v54.left,
                        v5);
    v15 = 1;
    v3 = v46[2];
LABEL_36:
    v64 = 0LL;
    v51 = 0;
    MonitorInformation = SearchAppDesktopExperienceView::EnsureInputHostManager(this);
    if ( MonitorInformation >= 0 )
    {
      v34 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, int *))(**((_QWORD **)this + 13) + 40LL))(
              *((_QWORD *)this + 13),
              &v64,
              &v51);
      MonitorInformation = 0;
      if ( v34 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x75C,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
          (const char *)(unsigned int)v34);
      ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x28, (ExperienceManagerUtils *)v10, v35);
      if ( !Geometry::CRect::IsEmpty((Geometry::CRect *)&v64)
        && Geometry::CRect::Intersects((Geometry::CRect *)&v64, &rcSrc2)
        && v63.bottom - HIDWORD(v64) <= v36 )
      {
        v37 = DWORD1(v64) - rcSrc2.bottom;
        OffsetRect(&rcSrc2, 0, DWORD1(v64) - rcSrc2.bottom);
        OffsetRect(&rc, 0, v37);
      }
      v38 = &v67;
      if ( v5 )
        v38 = &v63;
      rcSrc1 = *v38;
      rcDst = 0LL;
      IntersectRect(&rcDst, &rcSrc1, &rcSrc2);
      if ( rcDst.top != rcSrc1.top || rcDst.bottom != rcSrc1.bottom )
        v17 = 0;
      *((_BYTE *)this + 198) = v17;
      if ( v3 )
      {
        if ( v15 )
        {
          v55 = rc;
          v54 = v18;
          v67 = *(struct tagRECT *)((char *)this + 124);
          v63 = rcDst;
          v39 = SearchAppDesktopExperienceView::ApplyCortanaWindowRegion(
                  this,
                  &v63,
                  &v67,
                  &v54,
                  &v55,
                  v5,
                  *((_BYTE *)this + 112) == 0);
          v7 = v39;
          if ( v39 < 0 )
          {
            v8 = (unsigned int)v39;
            v9 = 1929LL;
            goto LABEL_5;
          }
        }
        else
        {
          SearchAppDesktopExperienceView::ResetCortanaWindowRegion(this);
        }
      }
      v40 = *((_DWORD *)this + 30);
      if ( v40 > 9 || (v41 = 582, !_bittest(&v41, v40)) || *((_BYTE *)this + 203) )
        SearchAppDesktopExperienceView::ShowBorder(this, 0LL);
      if ( *((_BYTE *)this + 199) || v46[3] )
        SearchAppDesktopExperienceView::ShowBorder(this, &rcDst);
      SearchAppDesktopExperienceView::GetViewWrapper((__int64)this, (__int64 *)&v52);
      v42 = v52;
      if ( v52 )
      {
        memset_0(&v56, 0, 0x40uLL);
        LODWORD(v56) = rcDst.right - rcDst.left;
        DWORD1(v56) = rcDst.bottom - rcDst.top;
        *(_QWORD *)&v57 = *(_QWORD *)&rcDst.left;
        LODWORD(v58) = 0;
        v43 = *v42;
        v60[0] = v56;
        v60[1] = v57;
        v60[2] = v58;
        v60[3] = v59;
        v44 = (*(__int64 (__fastcall **)(__int64 *, _OWORD *))(v43 + 448))(v42, v60);
        v7 = v44;
        if ( v44 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7AB,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
            (const char *)(unsigned int)v44);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v52);
          goto LABEL_66;
        }
      }
      CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::Stop(
        (CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *)v69,
        rcDst.left,
        rcDst.top,
        rcDst.right,
        rcDst.bottom);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v52);
LABEL_65:
      v7 = MonitorInformation;
      goto LABEL_66;
    }
    v13 = 1883LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    goto LABEL_65;
  }
  v8 = (unsigned int)v6;
  v9 = 1796LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)v8);
LABEL_66:
  CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::~CortanaExperienceManager_PositionCortanaWindow((CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *)v69);
  return v7;
}
