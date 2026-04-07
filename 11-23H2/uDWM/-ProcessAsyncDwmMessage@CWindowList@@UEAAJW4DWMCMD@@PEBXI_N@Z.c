/*
 * XREFs of ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180049B90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180007DD4 (-SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x180009090 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 *     ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x180014864 (-EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z.c)
 *     ?SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z @ 0x18001C714 (-SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z.c)
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x18001C7B8 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18001FA74 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180027FF8 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18002B768 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x18002D268 (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x18002E7F0 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18002E98C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180032058 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapToSnapAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180036A00 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapToSnapAnimation@@@details@wil@@QEAAX_.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18004B2C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x18004BF24 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18005DB28 (IsOpenThemeDataPresent.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x180065DC4 (-OnWindowArrangementEnd@CWindowList@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x18006BEBC (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18006C00C (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x1800A5B5C (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x1800B011C (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800B1050 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?UpdateEnableClearForRenderTargets@CDesktopManager@@QEAAXXZ @ 0x1800B556C (-UpdateEnableClearForRenderTargets@CDesktopManager@@QEAAXXZ.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800CAE58 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CBA3C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wi.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D84DC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x1800E69BC (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180106F0C (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x180108DD8 (-AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z.c)
 *     ?ClearTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_CLEARTAGGEDWINDOWRECT@@@Z @ 0x180109230 (-ClearTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_CLEARTAGGEDWINDOWRECT@@@Z.c)
 *     ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z @ 0x18010988C (-DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z.c)
 *     ?ModeChange@CWindowList@@AEAAJXZ @ 0x18010AE4C (-ModeChange@CWindowList@@AEAAJXZ.c)
 *     ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x18010AEC8 (-MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z.c)
 *     ?OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@@Z @ 0x18010B0EC (-OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@@Z.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@?$consume_Udwm_Transitions_Private_IAnimationsTransitionManager@UIAnimationsTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18010B268 (-OnMoveResizeInitiatedFromWorkAreaChange@-$consume_Udwm_Transitions_Private_IAnimationsTransitio.c)
 *     ?OnSnapPreviewInsertAfterNotification@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x18010B408 (-OnSnapPreviewInsertAfterNotification@CWindowList@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18010B484 (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18010B534 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18010C124 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?SetTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_SETTAGGEDWINDOWRECT@@@Z @ 0x18010CA74 (-SetTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_SETTAGGEDWINDOWRECT@@@Z.c)
 *     ?SkipAnimationDelays@?$consume_Udwm_Transitions_Private_IRotationTransitionManager@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18010CC1C (-SkipAnimationDelays@-$consume_Udwm_Transitions_Private_IRotationTransitionManager@UIRotationTra.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CWindowList::ProcessAsyncDwmMessage(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  int v5; // ebx
  struct _RTL_CRITICAL_SECTION *v9; // rsi
  unsigned int v10; // edi
  unsigned int v12; // eax
  __int16 *v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rax
  struct IDwmWindow *v18; // r13
  int v19; // r12d
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // eax
  int WindowText; // eax
  char *v24; // r8
  unsigned __int16 **v25; // rdi
  unsigned __int16 *v26; // rdx
  int v27; // eax
  __int64 v28; // r15
  int v29; // r12d
  int v30; // r13d
  unsigned int v31; // eax
  __int64 v32; // rcx
  unsigned __int16 v33; // ax
  unsigned __int16 *v34; // rax
  __int64 v35; // r15
  int v36; // ecx
  __int64 i; // r15
  CWindowIconic *v38; // rcx
  int v39; // eax
  __int64 v40; // r8
  unsigned int v41; // ecx
  __int64 v42; // r8
  __int64 v43; // rax
  struct _RTL_CRITICAL_SECTION *v44; // rbx
  unsigned __int16 **v45; // rdi
  int v46; // eax
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  int v48; // eax
  struct CMagnifierControl *v49; // rax
  int v50; // eax
  struct CMagnifierControl *v51; // rax
  int v52; // eax
  struct CMagnifierControl *v53; // rax
  int v54; // eax
  struct CMagnifierControl *v55; // rax
  int v56; // eax
  struct CMagnifierControl *v57; // rax
  int v58; // eax
  struct CMagnifierControl *v59; // rax
  int v60; // eax
  struct CMagnifierControl *v61; // rax
  int v62; // eax
  struct CMagnifierControl *v63; // rax
  int v64; // eax
  struct CMagnifierControl *v65; // rax
  int v66; // eax
  struct CMagnifierControl *v67; // rax
  int v68; // eax
  struct CMagnifierControl *v69; // rax
  int v70; // eax
  int v71; // ecx
  int v72; // ecx
  __int64 v73; // rbx
  int v74; // eax
  const char *v75; // r9
  unsigned int v76; // [rsp+20h] [rbp-288h]
  void *v77; // [rsp+28h] [rbp-280h]
  struct _RTL_CRITICAL_SECTION *v78; // [rsp+30h] [rbp-278h] BYREF
  unsigned __int16 **v79; // [rsp+38h] [rbp-270h] BYREF
  unsigned __int16 **v80; // [rsp+40h] [rbp-268h] BYREF
  unsigned __int64 v81; // [rsp+48h] [rbp-260h] BYREF
  _QWORD v82[2]; // [rsp+50h] [rbp-258h] BYREF
  WCHAR pString[256]; // [rsp+60h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+0h]

  v5 = a4;
  v9 = 0LL;
  v10 = -2147467263;
  LODWORD(v80) = -2147467263;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) )
    return 0;
  if ( a2 == 1073741851 && (_DWORD)a4 == 12 )
  {
    CWindowList::MouseLeaveWindow((CWindowList *)a1, (const struct MILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW *)a3);
    return 0;
  }
  if ( a5 )
  {
    v12 = a2 - 1073741832;
    v13 = &_ImageBase;
    switch ( v12 )
    {
      case 0u:
        if ( (_DWORD)a4 == 28 )
          return (unsigned int)CWindowList::IconChange(
                                 (CWindowList *)a1,
                                 (const struct MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE *)a3);
        return v10;
      case 1u:
        if ( (_DWORD)a4 != 12 )
          return v10;
        v81 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v15 = *(_QWORD *)(a3 + 4);
        v10 = 0;
        v16 = 0LL;
        if ( !v15 )
          goto LABEL_34;
        v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8));
        v18 = (struct IDwmWindow *)v17;
        if ( !v17 )
          goto LABEL_34;
        v19 = 0;
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        if ( v16 )
          goto LABEL_33;
        v20 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                WPF::g_pProcessHeap,
                864LL);
        v16 = v20;
        v82[0] = v20;
        if ( !v20 )
        {
          v19 = -2147024882;
          v10 = -2147024882;
          v22 = 2082;
          goto LABEL_32;
        }
        *(_QWORD *)(v20 + 16) = v20 + 804;
        *(_OWORD *)(v20 + 300) = 0LL;
        *(_QWORD *)(v20 + 320) = 0x3FF0000000000000LL;
        *(_DWORD *)(v20 + 328) = 96;
        *(_DWORD *)(v20 + 456) = 0;
        *(_QWORD *)(v20 + 496) = 0LL;
        *(_QWORD *)(v20 + 504) = 0LL;
        *(_QWORD *)(v20 + 512) = 0LL;
        *(_DWORD *)(v20 + 520) = 0;
        *(_QWORD *)(v20 + 536) = 0LL;
        *(_QWORD *)(v20 + 544) = 0LL;
        *(_QWORD *)(v20 + 552) = 0LL;
        *(_DWORD *)(v20 + 560) = 0;
        *(_QWORD *)(v20 + 568) = 0LL;
        *(_QWORD *)(v20 + 576) = 0LL;
        *(_QWORD *)(v20 + 584) = 0LL;
        *(_DWORD *)(v20 + 592) = 0;
        *(_QWORD *)(v20 + 608) = 0LL;
        *(_QWORD *)(v20 + 616) = 0LL;
        *(_QWORD *)(v20 + 624) = 0LL;
        *(_DWORD *)(v20 + 632) = 0;
        *(_QWORD *)(v20 + 8) = v20;
        *(_QWORD *)v20 = v20;
        *(_BYTE *)(v20 + 672) = ((unsigned __int8)IsOpenThemeDataPresent(v21) != 0 ? 8 : 0) | *(_BYTE *)(v20 + 672) & 0xF7;
        *(_DWORD *)(v16 + 332) = 1065353216;
        *(_DWORD *)(v16 + 208) = 1065353216;
        *(_DWORD *)(v16 + 212) = 1065353216;
        *(_BYTE *)(v16 + 408) = -1;
        *(_BYTE *)(v16 + 673) |= 0x40u;
        *(_DWORD *)(v16 + 680) = 4095;
        *(_BYTE *)(v16 + 676) |= 0x10u;
        *(_QWORD *)(v16 + 196) = 0LL;
        *(_QWORD *)(v16 + 184) = 0LL;
        *(_DWORD *)(v16 + 192) = 0;
        *(_DWORD *)(v16 + 204) = 0;
        *(_QWORD *)(v16 + 440) = 0LL;
        *(_QWORD *)(v16 + 448) = 0LL;
        *(_QWORD *)(v16 + 24) = v18;
        (**(void (__fastcall ***)(struct IDwmWindow *, __int64))v18)(v18, v16);
        *(_QWORD *)(v16 + 40) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v18 + 24LL))(v18);
        v19 = CWindowList::SyncWindowData((CWindowList *)a1, v18, (struct CWindowData *)v16);
        v10 = v19;
        if ( v19 < 0 )
        {
          v22 = 2086;
LABEL_32:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v22, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x805u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xEB3u, 0LL);
          goto LABEL_73;
        }
LABEL_33:
        v10 = v19;
LABEL_34:
        if ( !v16 )
          goto LABEL_73;
        WindowText = InternalGetWindowText(*(HWND *)(v16 + 40), pString, 256);
        v25 = (unsigned __int16 **)(v16 + 16);
        v79 = (unsigned __int16 **)(v16 + 16);
        v26 = *(unsigned __int16 **)(v16 + 16);
        v27 = WindowText + 1;
        v28 = v27;
        if ( v26 == (unsigned __int16 *)(v16 + 804) )
        {
          if ( v27 > 26 )
          {
            v26 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                        WPF::g_pProcessHeap,
                                        2LL * v27);
            *v25 = v26;
            if ( !v26 )
            {
              v29 = -2147024882;
              v30 = -2147024882;
              v10 = -2147024882;
              v31 = 1573;
LABEL_52:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, v31, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0xEB9u, 0LL);
LABEL_73:
              LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
              return v10;
            }
          }
        }
        else if ( v27 > 26 )
        {
          v30 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 24LL))(
                  WPF::g_pProcessHeap,
                  v16 + 16,
                  2LL * v27);
          v29 = v30;
          v10 = v30;
          if ( v30 < 0 )
          {
            v31 = 1590;
            goto LABEL_52;
          }
          v26 = *v79;
          if ( !*v79 )
          {
            v29 = -2147024882;
            v30 = -2147024882;
            v10 = -2147024882;
            v31 = 1591;
            goto LABEL_52;
          }
        }
        else
        {
          (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
          *v25 = (unsigned __int16 *)(v16 + 804);
          v26 = (unsigned __int16 *)(v16 + 804);
        }
        if ( (unsigned __int64)(v28 - 1) > 0x7FFFFFFE )
        {
          v10 = -2147024809;
          v29 = -2147024809;
          if ( v28 )
          {
            *v26 = 0;
            v30 = -2147024809;
LABEL_51:
            v31 = 1595;
            goto LABEL_52;
          }
        }
        else
        {
          v32 = 2147483646 - v28;
          v24 = (char *)((char *)pString - (char *)v26);
          do
          {
            if ( !(v28 + v32) )
              break;
            v33 = *(_WORD *)&v24[(_QWORD)v26];
            if ( !v33 )
              break;
            *v26++ = v33;
            --v28;
          }
          while ( v28 );
          v34 = v26 - 1;
          if ( v28 )
            v34 = v26;
          *v34 = 0;
          v29 = -2147024774;
          if ( v28 )
            v29 = 0;
        }
        v30 = v29;
        v10 = v29;
        if ( v29 >= 0 )
        {
          v35 = *(_QWORD *)(v16 + 440);
          if ( v35 )
          {
            v36 = *(_DWORD *)(v35 + 88);
            if ( (v36 & 0x10000) == 0 )
            {
              *(_DWORD *)(v35 + 88) = v36 | 0x10000;
              for ( i = *(_QWORD *)(v35 + 24); i; i = *(_QWORD *)(i + 24) )
              {
                if ( (*(_BYTE *)(i + 88) & 1) != 0 )
                  break;
                (*(void (__fastcall **)(__int64, unsigned __int16 *, char *))(*(_QWORD *)i + 32LL))(i, v26, v24);
              }
            }
          }
          v38 = *(CWindowIconic **)(v16 + 488);
          if ( v38 && (v39 = CWindowIconic::OnTitleUpdated(v38, 1), v10 = v39, v39 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0xEC2u, 0LL);
          }
          else
          {
            v40 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
            v41 = *(_DWORD *)(v40 + 368);
            if ( v41 )
            {
              v42 = *(_QWORD *)(v40 + 344);
              v43 = 0LL;
              while ( *(_QWORD *)(v43 + v42 + 8) != v16 )
              {
                LODWORD(v9) = (_DWORD)v9 + 1;
                v43 += 48LL;
                if ( (unsigned int)v9 >= v41 )
                  goto LABEL_73;
              }
              CTopLevelWindow::UpdateTitle(*(CTopLevelWindow **)(v42 + 48LL * (unsigned int)v9), *v79);
            }
          }
          goto LABEL_73;
        }
        goto LABEL_51;
      case 5u:
        if ( (_DWORD)a4 != 20 )
          return v10;
        CWindowList::ShellWindowChange(
          (CWindowList *)a1,
          (const struct MILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE *)a3);
        return 0;
      case 6u:
        if ( (_DWORD)a4 == 12 )
          return (unsigned int)CWindowList::DesktopCreate(
                                 (CWindowList *)a1,
                                 (const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE *)a3);
        return v10;
      case 8u:
        if ( (_DWORD)a4 != 12 )
          return v10;
        CWindowList::DesktopFree((CWindowList *)a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE *)a3);
        return 0;
      case 0xFu:
        return 0;
      case 0x23u:
        if ( (unsigned int)a4 > 0x18
          && *(_DWORD *)(a3 + 20) < 0xFFFFFFE8
          && (unsigned int)a4 >= *(_DWORD *)(a3 + 20) + 24
          && !*(_DWORD *)(a3 + 4) )
        {
          return (unsigned int)CWindowList::SetWindowAttribute(
                                 (CWindowList *)a1,
                                 (const struct MILCMD_DWM_WINDOWATTRIBUTE *)a3);
        }
        return v10;
      case 0x25u:
        if ( (_DWORD)a4 != 16 )
          return v10;
        CWindowList::AnimationChange((CWindowList *)a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE *)a3);
        return 0;
      case 0x2Au:
        GetDesktopID(1LL, &v81);
        v14 = CDesktopManager::SendSwitchModeCommand(v81);
        v10 = v14;
        if ( v14 >= 0 )
          return v10;
        v77 = 0LL;
        v76 = 565;
        goto LABEL_12;
      case 0x30u:
        if ( (_DWORD)a4 == 8 )
          return (unsigned int)CWindowList::RotationModeChange(
                                 (CWindowList *)a1,
                                 (const struct MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE *)a3);
        return v10;
      case 0x37u:
        if ( (_DWORD)a4 != 56 )
          return v10;
        v14 = CContactManager::OnContact(
                *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
                (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT *)a3);
        v10 = v14;
        if ( v14 >= 0 )
          return v10;
        v77 = 0LL;
        v76 = 169;
        goto LABEL_12;
      case 0x38u:
        if ( (unsigned int)(a4 - 21) > 0x13D7 )
          return v10;
        if ( *(_DWORD *)(a3 + 8) >= 0xFFFFFFEC )
          return v10;
        if ( (_DWORD)a4 != *(_DWORD *)(a3 + 8) + 20 )
          return v10;
        v14 = CContactManager::OnMultiContact(
                *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
                (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT *)a3);
        v10 = v14;
        if ( v14 >= 0 )
          return v10;
        v77 = 0LL;
        v76 = 192;
        goto LABEL_12;
      case 0x4Au:
        if ( (_DWORD)a4 == 28 )
        {
          CWindowList::RegisterSharedVirtualDesktopVisual(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
            *(HWND *)(a3 + 4),
            *(union _LARGE_INTEGER *)(a3 + 12),
            *(void **)(a3 + 20));
        }
        else
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x221u, 0LL);
        }
        return v10;
      case 0x52u:
        if ( (_DWORD)a4 == 28 )
        {
          CWindowList::SetTaggedWindowRect(
            (CWindowList *)a1,
            (const struct MILCMD_DWM_REDIRECTION_SETTAGGEDWINDOWRECT *)a3);
        }
        else
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x23Cu, 0LL);
        }
        return v10;
      case 0x53u:
        if ( (_DWORD)a4 == 12 )
        {
          CWindowList::ClearTaggedWindowRect(
            (CWindowList *)a1,
            (const struct MILCMD_DWM_REDIRECTION_CLEARTAGGEDWINDOWRECT *)a3);
        }
        else
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x243u, 0LL);
        }
        return v10;
      case 0x5Bu:
        if ( (_DWORD)a4 != 24 )
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x121u, 0LL);
          return v10;
        }
        v78 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(
                                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                       *(_QWORD *)(a3 + 12));
        if ( MagnifierControlForDesktop )
        {
          v48 = CMagnifierControl::OnMagnifierApiMessage(MagnifierControlForDesktop, a2, a3, a5);
          v10 = v48;
          if ( v48 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x12Au, 0LL);
        }
        goto LABEL_157;
      case 0x5Cu:
        if ( (_DWORD)a4 != 20 )
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x131u, 0LL);
          return v10;
        }
        v78 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v49 = CWindowList::GetMagnifierControlForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                *(_QWORD *)(a3 + 12));
        if ( v49 )
        {
          v50 = CMagnifierControl::OnMagnifierApiMessage(v49, a2, a3, a5);
          v10 = v50;
          if ( v50 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x13Au, 0LL);
        }
        goto LABEL_157;
      case 0x5Du:
        if ( (_DWORD)a4 != 120 )
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x141u, 0LL);
          return v10;
        }
        v78 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v51 = CWindowList::GetMagnifierControlForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                *(_QWORD *)(a3 + 12));
        if ( v51 )
        {
          v52 = CMagnifierControl::OnMagnifierApiMessage(v51, a2, a3, a5);
          v10 = v52;
          if ( v52 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x14Au, 0LL);
        }
        goto LABEL_157;
      case 0x5Eu:
        if ( (_DWORD)a4 != 232 )
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x151u, 0LL);
          return v10;
        }
        v78 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v53 = CWindowList::GetMagnifierControlForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                *(_QWORD *)(a3 + 224));
        if ( v53 )
        {
          v54 = CMagnifierControl::OnMagnifierApiMessage(v53, a2, a3, a5);
          v10 = v54;
          if ( v54 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0x15Au, 0LL);
        }
        goto LABEL_157;
      case 0x5Fu:
        if ( (_DWORD)a4 != 232 )
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x161u, 0LL);
          return v10;
        }
        v78 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v55 = CWindowList::GetMagnifierControlForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                *(_QWORD *)(a3 + 224));
        if ( v55 )
        {
          v56 = CMagnifierControl::OnMagnifierApiMessage(v55, a2, a3, a5);
          v10 = v56;
          if ( v56 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x16Au, 0LL);
        }
        goto LABEL_157;
      case 0x62u:
        if ( (_DWORD)a4 != 112 )
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x171u, 0LL);
          return v10;
        }
        v78 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v57 = CWindowList::GetMagnifierControlForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                *(_QWORD *)(a3 + 4));
        if ( v57 )
        {
          v58 = CMagnifierControl::OnMagnifierApiMessage(v57, a2, a3, a5);
          v10 = v58;
          if ( v58 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x17Au, 0LL);
        }
        goto LABEL_157;
      case 0x63u:
        if ( (_DWORD)a4 == 28 )
        {
          v78 = &CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v59 = CWindowList::GetMagnifierControlForDesktop(
                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                  *(_QWORD *)(a3 + 4));
          if ( v59 && (v60 = CMagnifierControl::OnMagnifierApiMessage(v59, a2, a3, a5), v10 = v60, v60 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v60, 0x18Au, 0LL);
            CGuard<CDwmCS>::~CGuard<CDwmCS>(&v78);
          }
          else
          {
            CDesktopManager::UpdateEnableClearForRenderTargets(CDesktopManager::s_pDesktopManagerInstance);
            CGuard<CDwmCS>::~CGuard<CDwmCS>(&v78);
          }
        }
        else
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x181u, 0LL);
        }
        return v10;
      case 0x64u:
        v71 = *(_DWORD *)(a3 + 4);
        if ( v71 )
        {
          v72 = v71 - 1;
          if ( v72 )
          {
            if ( v72 != 1 )
            {
              v10 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1F6u, 0LL);
              return v10;
            }
            v14 = CWindowList::OnWindowArrangementEnd((CWindowList *)a1);
            v10 = v14;
            if ( v14 < 0 )
            {
              v77 = 0LL;
              v76 = 499;
              goto LABEL_12;
            }
            return v10;
          }
          v14 = CWindowList::OnWindowArrangementContinue(
                  (CWindowList *)a1,
                  (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
          v10 = v14;
          if ( v14 >= 0 )
            return v10;
          v77 = 0LL;
          v76 = 496;
        }
        else
        {
          v14 = CWindowList::OnWindowArrangementStart(
                  (CWindowList *)a1,
                  (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
          v10 = v14;
          if ( v14 >= 0 )
            return v10;
          v77 = 0LL;
          v76 = 493;
        }
        goto LABEL_12;
      case 0x65u:
        if ( (_DWORD)a4 != 24 )
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1FCu, 0LL);
          return v10;
        }
        v14 = CWindowList::OnDwmShrinkMoveSizeWindowNotification(
                (CWindowList *)a1,
                *(HWND *)(a3 + 4),
                *(_DWORD *)(a3 + 12),
                *(struct tagPOINT *)(a3 + 16));
        v10 = v14;
        if ( v14 >= 0 )
          return v10;
        v77 = 0LL;
        v76 = 509;
        goto LABEL_12;
      case 0x66u:
        if ( (_DWORD)a4 != 20 )
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x202u, 0LL);
          return v10;
        }
        v14 = CWindowList::OnSnapPreviewInsertAfterNotification(
                (CWindowList *)a1,
                *(HWND *)(a3 + 4),
                *(HWND *)(a3 + 12));
        v10 = v14;
        if ( v14 >= 0 )
          return v10;
        v77 = 0LL;
        v76 = 515;
        goto LABEL_12;
      case 0x67u:
        if ( (_DWORD)a4 == 12 )
        {
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapToSnapAnimation>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_SnapToSnapAnimation>::GetImpl'::`2'::impl,
            1u,
            a3,
            a4);
          *(_BYTE *)(a1 + 682) = 1;
          *(_QWORD *)(a1 + 688) = *(_QWORD *)(a3 + 4);
        }
        else
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x209u, 0LL);
        }
        return v10;
      case 0x68u:
        if ( (_DWORD)a4 == 12 )
        {
          v81 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          try
          {
            winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent((winrt::Udwm::Transitions::implementation::TransitionManager *)v82);
            v73 = v82[0];
            if ( v82[0] )
            {
              v78 = 0LL;
              v74 = (**(__int64 (__fastcall ***)(_QWORD, __int64 *, struct _RTL_CRITICAL_SECTION **))v82[0])(
                      v82[0],
                      &winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IAnimationsTransitionManager>,
                      &v78);
              if ( v74 < 0 )
                winrt::throw_hresult((unsigned int)v74);
              v9 = v78;
            }
            v79 = (unsigned __int16 **)v9;
            winrt::impl::consume_Udwm_Transitions_Private_IAnimationsTransitionManager<winrt::Udwm::Transitions::Private::IAnimationsTransitionManager>::OnMoveResizeInitiatedFromWorkAreaChange(
              &v79,
              *(_QWORD *)(a3 + 4));
            if ( v9 )
              winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v79);
            if ( v73 )
              winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v82);
          }
          catch ( ... )
          {
            wil::details::in1diag3::Log_CaughtException(
              retaddr,
              (void *)0x21B,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
              v75);
            v10 = (unsigned int)v80;
          }
          CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)&v81);
        }
        else
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x214u, 0LL);
        }
        return v10;
      case 0x69u:
        if ( (_DWORD)a4 != 24 )
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x192u, 0LL);
          return v10;
        }
        v78 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v61 = CWindowList::GetMagnifierControlForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                *(_QWORD *)(a3 + 12));
        if ( v61 )
        {
          v62 = CMagnifierControl::OnMagnifierApiMessage(v61, a2, a3, a5);
          v10 = v62;
          if ( v62 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0x19Bu, 0LL);
        }
        goto LABEL_157;
      case 0x6Au:
        if ( (_DWORD)a4 != 16 )
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1A2u, 0LL);
          return v10;
        }
        v78 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v63 = CWindowList::GetMagnifierControlForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                *(_QWORD *)(a3 + 4));
        if ( v63 )
        {
          v64 = CMagnifierControl::OnMagnifierApiMessage(v63, a2, a3, a5);
          v10 = v64;
          if ( v64 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x1ABu, 0LL);
        }
        goto LABEL_157;
      case 0x6Bu:
        if ( (_DWORD)a4 != 112 )
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1B2u, 0LL);
          return v10;
        }
        v78 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v65 = CWindowList::GetMagnifierControlForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                *(_QWORD *)(a3 + 4));
        if ( v65 )
        {
          v66 = CMagnifierControl::OnMagnifierApiMessage(v65, a2, a3, a5);
          v10 = v66;
          if ( v66 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v66, 0x1BCu, 0LL);
        }
        goto LABEL_157;
      case 0x6Cu:
        if ( (_DWORD)a4 != 16 )
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1C4u, 0LL);
          return v10;
        }
        v78 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v67 = CWindowList::GetMagnifierControlForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                *(_QWORD *)(a3 + 4));
        if ( v67 )
        {
          v68 = CMagnifierControl::OnMagnifierApiMessage(v67, a2, a3, a5);
          v10 = v68;
          if ( v68 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0x1CEu, 0LL);
        }
        goto LABEL_157;
      case 0x6Du:
        LOBYTE(v13) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::GetImpl'::`2'::impl,
          v13);
        if ( v5 == 24 )
        {
          v78 = &CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v69 = CWindowList::GetMagnifierControlForDesktop(
                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                  *(_QWORD *)(a3 + 4));
          if ( v69 )
          {
            v70 = CMagnifierControl::OnMagnifierApiMessage(v69, a2, a3, a5);
            v10 = v70;
            if ( v70 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0x1E1u, 0LL);
          }
LABEL_157:
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v78);
        }
        else
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1D7u, 0LL);
        }
        return v10;
      case 0x6Fu:
        if ( (_DWORD)a4 == 4 )
        {
          try
          {
            winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent((winrt::Udwm::Transitions::implementation::TransitionManager *)&v78);
            v44 = v78;
            if ( v78 )
            {
              v79 = 0LL;
              v46 = ((__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *, __int64 *, unsigned __int16 ***))v78->DebugInfo->Type)(
                      v78,
                      &winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IRotationTransitionManager>,
                      &v79);
              if ( v46 < 0 )
                winrt::throw_hresult((unsigned int)v46);
              v45 = v79;
              v80 = v79;
            }
            else
            {
              v80 = 0LL;
              v45 = 0LL;
            }
            winrt::impl::consume_Udwm_Transitions_Private_IRotationTransitionManager<winrt::Udwm::Transitions::Private::IRotationTransitionManager>::SkipAnimationDelays(&v80);
            if ( v45 )
              winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v80);
            if ( v44 )
              winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v78);
            v10 = 0;
          }
          catch ( ... )
          {
            return (unsigned int)-2147467259;
          }
        }
        return v10;
      default:
        return v10;
    }
  }
  switch ( a2 )
  {
    case 0x40000025u:
      v14 = CWindowList::StartupBegin((CWindowList *)a1);
      v10 = v14;
      if ( v14 < 0 )
      {
        v77 = 0LL;
        v76 = 592;
        goto LABEL_12;
      }
      break;
    case 0x40000026u:
      v14 = CWindowList::StartupEnd((CWindowList *)a1);
      v10 = v14;
      if ( v14 < 0 )
      {
        v77 = 0LL;
        v76 = 596;
        goto LABEL_12;
      }
      break;
    case 0x4000002Fu:
      v14 = CWindowList::ModeChange((CWindowList *)a1);
      v10 = v14;
      if ( v14 < 0 )
      {
        v77 = 0LL;
        v76 = 600;
        goto LABEL_12;
      }
      break;
    case 0x40000030u:
      if ( (_DWORD)a4 == 8 )
      {
        v14 = CWindowList::SettingsChange(
                (CWindowList *)a1,
                (const struct MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE *)a3);
        v10 = v14;
        if ( v14 < 0 )
        {
          v77 = 0LL;
          v76 = 606;
LABEL_12:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v76, v77);
        }
      }
      break;
    case 0x40000043u:
      if ( (_DWORD)a4 == 12 )
      {
        CContactManager::OnShowContact(
          *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
          (const struct MILCMD_DWM_REDIRECTION_SHOWCONTACT *)a3);
        return 0;
      }
      break;
    case 0x40000044u:
      if ( (_DWORD)a4 == 20 )
      {
        CContactManager::OnTether(
          *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
          (const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *)a3);
        return 0;
      }
      break;
    case 0x4000004Au:
      if ( (_DWORD)a4 == 8 )
      {
        CWindowList::EndTransition((CWindowList *)a1, (const struct MILCMD_DWM_REDIRECTION_ENDTRANSITION *)a3);
        return 0;
      }
      break;
    case 0x40000056u:
      if ( (_DWORD)a4 == 12 )
      {
        CImmersiveIconicBitmapRegistry::SetNotifyWindow(
          *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 30),
          *(HWND *)(a3 + 4));
        return 0;
      }
      break;
    case 0x4000007Bu:
      if ( (_DWORD)a4 == 8 )
      {
        v10 = CAnalogCompositorManager::SetExclusiveView(*(_DWORD *)(a3 + 4));
      }
      else
      {
        v10 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x287u, 0LL);
      }
      break;
    default:
      return v10;
  }
  return v10;
}
