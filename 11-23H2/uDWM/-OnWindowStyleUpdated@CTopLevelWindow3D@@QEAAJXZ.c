/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002F810
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EB90 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x180012578 (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180018D20 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002FA0C (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180032488 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x1800369DC (-IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180036A90 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180037364 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18004C100 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18004C860 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x18004DFF4 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A14C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C85EC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnWindowStyleUpdated(CTopLevelWindow3D *this, __int64 a2)
{
  __int64 v2; // rax
  char v4; // dl
  int v5; // esi
  char v6; // bp
  unsigned __int8 v7; // di
  __int64 v8; // rdx
  __int64 v10; // rax
  int started; // eax
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // r14d
  int v16; // eax
  unsigned int v17; // edi
  __int128 v18; // xmm0
  CTopLevelWindow *v19; // rcx
  int v20; // eax
  unsigned int v21; // edi
  int v22; // eax
  unsigned int v23; // edi
  int v24; // eax
  int v25; // eax
  unsigned int v26; // edi
  __int64 v27; // r11
  CLivePreview *v28; // rcx
  int v29; // eax
  unsigned int v30; // ebx
  int v31; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 42);
  v4 = (*(_DWORD *)(v2 + 116) & 0x20000000) != 0;
  v5 = *(_DWORD *)(v2 + 116) & 0x1000000;
  v6 = v5 != 0;
  v7 = (*(_DWORD *)(v2 + 128) & 0x1000) != 0;
  if ( *((_BYTE *)this + 296) == v4 )
  {
    if ( (*(_DWORD *)(v2 + 116) & 0x20000000) != 0 )
      return 0LL;
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
      a2);
    if ( *((_BYTE *)this + 536) )
      return 0LL;
    if ( v6 == *((_BYTE *)this + 297) )
    {
      LOBYTE(v8) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
        v8);
      if ( v7 == *((_BYTE *)this + 298) )
        return 0LL;
    }
    v15 = 4;
    if ( v5 )
      v15 = 2;
    if ( (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled() )
    {
      if ( v7 != *((_BYTE *)this + 298) )
        v15 = (v7 ^ 1) + 12;
    }
    *((_BYTE *)this + 297) = v6;
    *((_BYTE *)this + 298) = v7;
    if ( !CTopLevelWindow3D::ShouldShowTransition(this) )
      return 0LL;
    v16 = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(this, 1);
    v17 = v16;
    if ( v16 >= 0 )
    {
      v18 = *(_OWORD *)(*((_QWORD *)this + 42) + 48LL);
      *((_DWORD *)this + 97) = v15;
      *((_OWORD *)this + 20) = v18;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)(unsigned int)v16,
      v31);
    return v17;
  }
  else
  {
    *((_BYTE *)this + 296) = v4;
    *((_BYTE *)this + 297) = v6;
    if ( CTopLevelWindow3D::ShouldShowTransition(this) )
    {
      v10 = *((_QWORD *)this + 42);
      if ( *((_BYTE *)this + 296) )
      {
        if ( (*(_BYTE *)(v10 + 672) & 0x40) == 0 && !CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(this) )
        {
          if ( *((_QWORD *)this + 46) )
          {
            v24 = CTopLevelWindow3D::StopAnimation(this);
            if ( v24 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x2ED,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
                (const char *)(unsigned int)v24,
                v31);
          }
          started = CTopLevelWindow3D::StartAnimation(this, 3LL);
          v12 = started;
          if ( started < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2EF,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)started,
              v31);
            return v12;
          }
        }
      }
      else
      {
        v19 = *(CTopLevelWindow **)(v10 + 440);
        if ( (*(_BYTE *)(v10 + 675) & 8) != 0 )
        {
          v25 = CTopLevelWindow::ShowWindow(v19, 1);
          v26 = v25;
          if ( v25 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2F6,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v25,
              v31);
            return v26;
          }
          *(_BYTE *)(*((_QWORD *)this + 42) + 675LL) &= ~8u;
        }
        else
        {
          v20 = CTopLevelWindow::ShowWindow(v19, 0);
          v21 = v20;
          if ( v20 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2FE,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v20,
              v31);
            return v21;
          }
          *((_BYTE *)this + 536) = 1;
          v22 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
          v23 = v22;
          if ( v22 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x300,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v22,
              v31);
            return v23;
          }
        }
      }
      v13 = CTopLevelWindow3D::OnZOrderUpdated(this, 1);
      v14 = v13;
      if ( v13 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x307,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v13,
        v31);
      return v14;
    }
    else
    {
      v27 = *((_QWORD *)this + 42);
      v28 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
      if ( *((_BYTE *)v28 + 288)
        && v27
        && CLivePreview::_IsInLivePreview(v28, *((const struct CWindowData **)this + 42)) )
      {
        return 0LL;
      }
      v29 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(v27 + 440), 1);
      v30 = v29;
      if ( v29 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30D,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v29,
        v31);
      return v30;
    }
  }
}
