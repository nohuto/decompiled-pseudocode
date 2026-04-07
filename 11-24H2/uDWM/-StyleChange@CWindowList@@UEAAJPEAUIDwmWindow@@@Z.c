/*
 * XREFs of ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800929E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x1800076E0 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800132D0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A530 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18001B5C4 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001C3FC (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001E67C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x18001E780 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180024BD0 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18004A310 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindow3D@@W4ShellTransitionType@234@@Z @ 0x18004D1B4 (-PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindo.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?TrackMinimizedWindowDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180061E60 (-TrackMinimizedWindowDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180069148 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 *     ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ @ 0x180088030 (-UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ.c)
 *     ?WindowSnapBeginPreTransition@UDwmTrace@@SAXXZ @ 0x18008BEAC (-WindowSnapBeginPreTransition@UDwmTrace@@SAXXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1838 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAA_NXZ @ 0x1800BB690 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@.c)
 *     ?IsOpaqueLivePreview@CLivePreview@@QEAA_NPEAVCWindowData@@@Z @ 0x1800C7D28 (-IsOpaqueLivePreview@CLivePreview@@QEAA_NPEAVCWindowData@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FixDwmAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F2B60 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FixDwmAnimations@@@details@wil@@QEAAX_NW4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::StyleChange(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rbx
  int v5; // r12d
  unsigned __int16 v6; // si
  __int64 v7; // r8
  int v8; // edi
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rdx
  char v12; // al
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  bool v17; // zf
  int v18; // eax
  char v19; // di
  char v20; // r13
  char v21; // si
  __int64 v22; // rcx
  int v23; // edi
  const struct std::nothrow_t *v24; // rdx
  __int64 v25; // rcx
  struct winrt::Udwm::Transitions::TransitionManager *Current; // rax
  const char *v27; // r9
  int v29; // [rsp+20h] [rbp-48h]
  unsigned __int16 v30; // [rsp+24h] [rbp-44h]
  int v31; // [rsp+28h] [rbp-40h]
  int v32; // [rsp+2Ch] [rbp-3Ch]
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct CWindowData *v35; // [rsp+80h] [rbp+18h] BYREF
  char v36; // [rsp+88h] [rbp+20h]

  v33 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v35 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v35);
  v4 = v35;
  if ( !v35 )
    goto LABEL_71;
  v32 = *((_DWORD *)v35 + 29);
  v5 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  v31 = *((_DWORD *)v4 + 31);
  v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 336LL))(a2);
  v30 = v6;
  LOBYTE(v35) = 0;
  if ( (v32 & 0x20000000) != 0 )
  {
    v8 = v5 & 0x20000000;
    if ( (v5 & 0x20000000) == 0 )
    {
      LOBYTE(v35) = 1;
      CWindowData::ClearSnapshot(v4, 0, v7, 0);
    }
LABEL_10:
    *((_DWORD *)v4 + 29) = v5;
    *((_DWORD *)v4 + 30) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
    *((_DWORD *)v4 + 31) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 336LL))(a2);
    *((_BYTE *)v4 + 736) ^= (*((_BYTE *)v4 + 736) ^ (8
                                                   * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 160LL))(a2))) & 8;
    v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 168LL))(a2);
    *((_BYTE *)v4 + 736) &= ~0x80u;
    *((_BYTE *)v4 + 736) |= v12 << 7;
    if ( !(_BYTE)v35 )
      goto LABEL_23;
    if ( v8 )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetImpl'::`2'::impl) )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                         + 59)
                                                                      + 96LL))(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
                v4);
        v14 = retaddr;
        if ( v13 >= 0 )
          goto LABEL_23;
        v15 = 4515LL;
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                         + 58)
                                                                      + 112LL))(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
                v4);
        v14 = retaddr;
        if ( v13 >= 0 )
          goto LABEL_23;
        v15 = 4519LL;
      }
    }
    else if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetImpl'::`2'::impl) )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 59)
                                                                    + 104LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
              v4);
      v14 = retaddr;
      if ( v13 >= 0 )
        goto LABEL_23;
      v15 = 4526LL;
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 58)
                                                                    + 120LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
              v4);
      v14 = retaddr;
      if ( v13 >= 0 )
        goto LABEL_23;
      v15 = 4530LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v14,
      (void *)v15,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v13,
      v29);
LABEL_23:
    v16 = 0LL;
    if ( !*((_QWORD *)v4 + 55) )
    {
LABEL_67:
      CWindowData::CheckOwnedWindowEligibility(v4);
      CWindowList::CheckForMaximizedChange(this, v4);
      if ( ((v32 ^ v5) & 0x20000000) != 0 )
        CWindowData::NotifyRepresentationChanged(v4);
      v9 = CWindowList::ReevaluateAutoParenting(this, v4, 0);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 4679LL;
        goto LABEL_60;
      }
LABEL_71:
      v10 = 0;
      goto LABEL_72;
    }
    if ( (v32 & 0x20000000) != 0 || v8 || (v17 = *(_BYTE *)(*((_QWORD *)v4 + 56) + 488LL) == 0, v36 = 0, !v17) )
      v36 = 1;
    if ( (v32 & 0x1000000) != 0 )
    {
      v18 = v5 & 0x1000000;
    }
    else
    {
      v18 = v5 & 0x1000000;
      if ( (v5 & 0x1000000) != 0 )
      {
        v19 = 1;
        goto LABEL_35;
      }
    }
    v19 = 0;
    if ( (v32 & 0x1000000) != 0 && !v18 )
    {
      v20 = 1;
      goto LABEL_36;
    }
LABEL_35:
    v20 = 0;
LABEL_36:
    if ( (v31 & 0x1000) == 0 || (LOBYTE(v29) = 1, (v6 & 0x1000) != 0) )
      LOBYTE(v29) = 0;
    v21 = 0;
    if ( *((_BYTE *)this + 674)
      && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) == *((_QWORD *)this + 85) )
    {
      v21 = 1;
      *((_BYTE *)this + 674) = 0;
    }
    LOBYTE(v16) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixDwmAnimations>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_FixDwmAnimations>::GetImpl'::`2'::impl,
      v16);
    if ( !v36
      && (v19 || v20 || v21 || (_BYTE)v29)
      && (*((_BYTE *)v4 + 736) & 0x20) == 0
      && !CLivePreview::IsOpaqueLivePreview(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57), v4) )
    {
      try
      {
        *((_BYTE *)this + 673) = 1;
        if ( v19 )
        {
          v23 = 2;
        }
        else if ( v20 )
        {
          v23 = 3;
        }
        else if ( v21 )
        {
          v23 = 4;
          UDwmTrace::WindowSnapBeginPreTransition(v22);
        }
        else
        {
          v23 = 5;
        }
        *((_QWORD *)this + 85) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
        Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent(v25, v24);
        winrt::Udwm::Transitions::TransitionManager::PreTransitionWithNativeWindow(
          (__int64)Current,
          *((_QWORD *)v4 + 56),
          v23);
      }
      catch ( ... )
      {
        LODWORD(v35) = wil::details::in1diag3::Return_CaughtException(
                         retaddr,
                         (void *)0x121C,
                         (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                         v27);
        v10 = (unsigned int)v35;
        goto LABEL_72;
      }
    }
    v9 = CWindowData::OnWindowStyleUpdated(v4);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 4639LL;
      goto LABEL_60;
    }
    if ( (((unsigned __int16)v31 ^ v30) & 0x1000) != 0 )
      CWindowData::OnColorizationUpdated(v4);
    CWindowList::TrackMinimizedWindowDuringModeChange(this, v4);
    v9 = CTopLevelWindow3D::OnWindowStyleUpdated(*((CTopLevelWindow3D **)v4 + 56));
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 4654LL;
      goto LABEL_60;
    }
    if ( (_BYTE)v35 )
      CTopLevelWindow::UpdateRemoteAppRenderTargetRoot(*((CTopLevelWindow **)v4 + 55));
    goto LABEL_67;
  }
  v8 = v5 & 0x20000000;
  if ( (v5 & 0x20000000) == 0 )
    goto LABEL_10;
  LOBYTE(v35) = 1;
  if ( v4 != *((struct CWindowData **)this + 87) )
    goto LABEL_10;
  v9 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(this, 1);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v6 = v30;
    goto LABEL_10;
  }
  v11 = 4499LL;
LABEL_60:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v9,
    v29);
LABEL_72:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v33);
  return v10;
}
