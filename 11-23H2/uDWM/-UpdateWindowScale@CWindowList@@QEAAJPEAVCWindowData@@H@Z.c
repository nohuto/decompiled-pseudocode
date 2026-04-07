/*
 * XREFs of ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18003EF90
 * Callers:
 *     ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x18003CBB4 (-OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003CF00 (-MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800482A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EBC10 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800045E0 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180008610 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x18000D4E0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800175B0 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x18001C40C (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x18002E7F0 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800302E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil.c)
 *     ?SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z @ 0x1800359A8 (-SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180036690 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapToSnapAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180036A00 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapToSnapAnimation@@@details@wil@@QEAAX_.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180045E04 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18004C100 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180050ED8 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180055EA8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     floor @ 0x18005D4A8 (floor.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18006D732 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A14C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x1800ACBA4 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18010761C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     PixelAligningFactor @ 0x180108184 (PixelAligningFactor.c)
 *     ?UpdateRect@?$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@AEBW4ShellTransition@Transitions@Udwm@3@@Z @ 0x18010D1CC (-UpdateRect@-$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@w.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CWindowList::UpdateWindowScale(
        struct CWindowData **this,
        struct CWindowData *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // r13d
  int v7; // r15d
  char v8; // r12
  double v9; // xmm6_8
  double v10; // xmm9_8
  float v11; // xmm1_4
  float v12; // xmm1_4
  int v13; // esi
  int v14; // edi
  float v15; // xmm7_4
  struct tagRECT *v16; // rcx
  __int64 v17; // rdi
  struct CWindowData *v18; // rax
  _DWORD *v20; // rdx
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // edx
  int left; // esi
  LONG top; // r8d
  LONG bottom; // ecx
  LONG v27; // r9d
  _DWORD *v28; // rax
  struct tagPOINT v29; // rax
  CVisual *v30; // rcx
  CButton *v31; // rcx
  CBaseObject *v32; // rsi
  int v33; // eax
  __int64 i; // rdi
  CWindowIconic *v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  unsigned int j; // edi
  unsigned int k; // edi
  __int64 v40; // rdx
  CWindowList *v41; // rcx
  CTopLevelWindow *v42; // rcx
  int v43; // edi
  int v44; // edi
  int v45; // esi
  int v46; // esi
  double v47; // xmm10_8
  __int64 v48; // rcx
  double v49; // xmm0_8
  double v50; // xmm1_8
  float v51; // xmm2_4
  float v52; // xmm1_4
  CBaseObject *v53; // rcx
  __int64 v54; // rcx
  int updated; // eax
  unsigned int v56; // edi
  CTopLevelWindow3D *v57; // rcx
  int v58; // eax
  unsigned int v59; // edi
  int v60; // eax
  int v61; // [rsp+20h] [rbp-D8h]
  int v62; // [rsp+20h] [rbp-D8h]
  bool v63; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+38h] [rbp-C0h] BYREF
  struct tagPOINT v65; // [rsp+40h] [rbp-B8h] BYREF
  struct tagPOINT v66; // [rsp+48h] [rbp-B0h] BYREF
  double v67; // [rsp+50h] [rbp-A8h] BYREF
  float v68; // [rsp+58h] [rbp-A0h]
  float v69; // [rsp+5Ch] [rbp-9Ch]
  double v70; // [rsp+60h] [rbp-98h] BYREF
  struct tagRECT v71; // [rsp+68h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v4 = a3;
  v7 = 0;
  v8 = 0;
  v9 = *((double *)a2 + 42);
  v10 = v9;
  v11 = v9;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 83) - v11) & _xmm) > 0.0000011920929 )
  {
    *((float *)a2 + 83) = v11;
    v8 = 1;
  }
  if ( v9 == 1.0 )
  {
    v12 = FLOAT_1_0;
    if ( *((float *)a2 + 52) != 1.0 || *((float *)a2 + 53) != 1.0 )
    {
      *((_DWORD *)a2 + 53) = 1065353216;
      *((_DWORD *)a2 + 52) = 1065353216;
      v8 = 1;
    }
  }
  else
  {
    v43 = 0;
    if ( *((_DWORD *)a2 + 56) - *((_DWORD *)a2 + 54) >= 0 )
      v43 = *((_DWORD *)a2 + 56) - *((_DWORD *)a2 + 54);
    v44 = v43 - *((_DWORD *)a2 + 67) - *((_DWORD *)a2 + 66);
    v45 = 0;
    if ( *((_DWORD *)a2 + 57) - *((_DWORD *)a2 + 55) >= 0 )
      v45 = *((_DWORD *)a2 + 57) - *((_DWORD *)a2 + 55);
    v46 = v45 - *((_DWORD *)a2 + 69) - *((_DWORD *)a2 + 68);
    if ( v46 && v44 )
    {
      v47 = PixelAligningFactor(this, (unsigned int)v44, &v70, &v66);
      v49 = PixelAligningFactor(v48, (unsigned int)v46, &v67, &v65);
      if ( *(double *)&v66 <= 0.02 && *(double *)&v65 <= 0.02 )
      {
        v50 = ((double)v44 / (double)v46 - v70 / v67) / ((double)v44 / (double)v46);
        if ( v50 < 0.0 )
          *(_QWORD *)&v50 ^= _xmm;
        if ( v50 <= 0.02 )
        {
          v9 = v47;
          v10 = v49;
        }
      }
      v51 = v9;
      v52 = v10;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 52) - v51) & _xmm) > 0.0000011920929
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 53) - v52) & _xmm) > 0.0000011920929 )
      {
        *((float *)a2 + 52) = v51;
        *((float *)a2 + 53) = v52;
        v8 = 1;
      }
    }
    v12 = FLOAT_1_0;
  }
  v13 = *((_DWORD *)a2 + 56) - *((_DWORD *)a2 + 54);
  if ( v13 < 0 )
    v13 = 0;
  v14 = *((_DWORD *)a2 + 57) - *((_DWORD *)a2 + 55);
  if ( v14 < 0 )
    v14 = 0;
  v15 = *((float *)a2 + 83);
  if ( v15 != v12 )
  {
    v13 = (int)floor((float)((float)v13 * v15) + 0.5);
    v14 = (int)floor((float)((float)v14 * v15) + 0.5);
  }
  *((_DWORD *)a2 + 14) = v13 + *((_DWORD *)a2 + 12);
  v16 = (struct tagRECT *)(unsigned int)(v14 + *((_DWORD *)a2 + 13));
  *((_DWORD *)a2 + 15) = (_DWORD)v16;
  v17 = *((_QWORD *)a2 + 55);
  if ( !v17 )
    goto LABEL_13;
  v20 = *(_DWORD **)(v17 + 752);
  v21 = v20[14] - v20[12];
  if ( v21 < 0 )
    v21 = 0;
  LODWORD(v64) = v21;
  v22 = v20[15] - v20[13];
  if ( v22 < 0 )
    v22 = 0;
  HIDWORD(v64) = v22;
  if ( *(_DWORD *)(v17 + 128) != v21 || *(_DWORD *)(v17 + 132) != v22 )
  {
    *(_QWORD *)(v17 + 128) = v64;
    if ( (*(_BYTE *)(v17 + 92) & 1) != 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 24LL))(v17, 16LL);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 24LL))(v17, 2LL);
  }
  v65 = *(struct tagPOINT *)(v17 + 272);
  if ( (*(_BYTE *)(v17 + 624) & 0x20) != 0 )
  {
    v71 = *(struct tagRECT *)(v17 + 676);
    bottom = v71.bottom;
    LODWORD(v64) = v71.right;
    top = v71.top;
    left = v71.left;
  }
  else
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl,
      1u,
      a3,
      a4);
    LODWORD(v64) = 0;
    if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26) )
    {
      left = 0;
      top = 0;
    }
    else
    {
      v23 = (*(_DWORD *)(*(_QWORD *)(v17 + 752) + 348LL) + 48) / 0x60u;
      left = *(_DWORD *)(v17 + 628) - v23;
      if ( left < 0 )
        left = 0;
      top = *(_DWORD *)(v17 + 632) - v23;
      if ( top < 0 )
        top = 0;
      bottom = *(_DWORD *)(v17 + 640) - v23;
      if ( bottom >= 0 )
        goto LABEL_32;
    }
    bottom = 0;
  }
LABEL_32:
  v71.left = left;
  v27 = v64;
  v71.top = v64;
  v28 = *(_DWORD **)(v17 + 752);
  v71.right = v28[14] - v28[12] - top;
  v71.bottom = v28[15] - v28[13] - bottom;
  v29 = v65;
  *(struct tagRECT *)(*(_QWORD *)&v65 + 304LL) = v71;
  v30 = *(CVisual **)(*(_QWORD *)&v29 + 248LL);
  if ( v30 )
  {
    v66.x = left;
    v66.y = v27;
    CVisual::SetOffset(v30, &v66);
    v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v65 + 248LL) + 16LL) + 16LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v40 + 16) + 304LL))(
      *(_QWORD *)(v40 + 16),
      *(unsigned int *)(v40 + 24));
    CWindowBorder::SetClipRectangle(
      *(CWindowBorder **)&v65,
      *(struct CRectangleGeometryProxy **)(*(_QWORD *)&v65 + 264LL),
      &v71);
  }
  v31 = *(CButton **)(v17 + 776);
  if ( v31 )
  {
    CButton::SetMouseCapture(v31, 0);
    v53 = *(CBaseObject **)(v17 + 776);
    if ( v53 )
    {
      CBaseObject::Release(v53);
      *(_QWORD *)(v17 + 776) = 0LL;
    }
  }
  v32 = *(CBaseObject **)(v17 + 768);
  if ( v32 )
  {
    *(_QWORD *)(v17 + 768) = 0LL;
    (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v32 + 128LL))(v32);
    v54 = *(_QWORD *)(v17 + 768);
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 120LL))(v54);
    CBaseObject::Release(v32);
  }
  v33 = *(_DWORD *)(v17 + 88);
  if ( (v33 & 0x4000000) == 0 )
  {
    *(_DWORD *)(v17 + 88) = v33 | 0x4000000;
    for ( i = *(_QWORD *)(v17 + 24); i; i = *(_QWORD *)(i + 24) )
    {
      if ( (*(_BYTE *)(i + 88) & 1) != 0 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)i + 32LL))(i);
    }
  }
  v35 = (CWindowIconic *)*((_QWORD *)a2 + 61);
  if ( v35 )
  {
    updated = CWindowIconic::UpdateSizeOrMargins(v35, 0);
    v56 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D0,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
        (const char *)(unsigned int)updated,
        v61);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFB0,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)v56,
        v62);
      return v56;
    }
  }
  v36 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 58)
                                                                + 104LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
          a2);
  v16 = (struct tagRECT *)retaddr;
  if ( v36 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2D3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
      (const char *)(unsigned int)v36,
      v61);
  for ( j = 0; j < *((_DWORD *)a2 + 130); ++j )
  {
    v16 = *(struct tagRECT **)(*((_QWORD *)a2 + 62) + 8LL * j);
    v71 = v16[4];
    if ( *(struct CWindowData **)&v71.left == a2 && ((v71.right - 1) & 0xFFFFFFFD) == 0 )
      CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated((CSecondaryWindowRepresentation *)v16, v37);
  }
  for ( k = 0; k < *((_DWORD *)a2 + 140); ++k )
  {
    v16 = *(struct tagRECT **)(*(_QWORD *)(*((_QWORD *)a2 + 67) + 8LL * k) + 88LL);
    if ( v16 )
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)v16, 4096);
  }
LABEL_13:
  if ( v8 || v4 )
  {
    CWindowList::OnClientMarginsChange((CWindowList *)v16, a2);
    CWindowList::OnClientGlassChange(v41, a2);
    v42 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
    if ( v42 )
      CTopLevelWindow::OnWindowScaleUpdated(v42);
    v63 = 0;
    v65 = *(struct tagPOINT *)((char *)a2 + 48);
    CWindowPropertyTracker::GetWindowEndPosition(
      (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
      *((HWND *)a2 + 5),
      &v65);
    CAnimationScheduler::OnWindowPositionChange(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
      a2,
      v65,
      &v63);
    if ( !v63 )
      CWindowList::OnPositionChange((CWindowList *)this, a2, 1);
  }
  v18 = this[88];
  if ( v18 == a2
    && (*((_BYTE *)v18 + 677) & 0x10) != 0
    && (v57 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 56)) != 0LL
    && *((_DWORD *)v57 + 96) == 10
    && (v58 = CTopLevelWindow3D::StopAnimation(v57), v59 = v58, v58 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD6,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v58,
      v61);
    return v59;
  }
  else
  {
    if ( *((_BYTE *)this + 696) && (*((_DWORD *)a2 + 170) & 0xFFF) == 0x5E )
    {
      CTopLevelWindow::GetActualWindowRect(*((CTopLevelWindow **)a2 + 55), &v71, 0, 1, 1);
      v60 = 0;
      if ( v71.right - v71.left >= 0 )
        v60 = v71.right - v71.left;
      if ( v71.bottom - v71.top >= 0 )
        v7 = v71.bottom - v71.top;
      *(float *)&v67 = (float)v71.left;
      *((float *)&v67 + 1) = (float)v71.top;
      v68 = (float)v60;
      v69 = (float)v7;
      winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent((winrt::Udwm::Transitions::implementation::TransitionManager *)&v65);
      LODWORD(v64) = 6;
      winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::UpdateRect(
        &v65,
        &v67,
        &v64);
      if ( *(double *)&v65 != 0.0 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v65);
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapToSnapAnimation>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SnapToSnapAnimation>::GetImpl'::`2'::impl,
      1u,
      a3,
      a4);
    return 0LL;
  }
}
