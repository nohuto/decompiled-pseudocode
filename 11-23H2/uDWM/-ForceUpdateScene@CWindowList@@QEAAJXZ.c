/*
 * XREFs of ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180046D50
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180045FF0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x180046B00 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800BB978 (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800BDE10 (-StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BE410 (-StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BF010 (-StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z @ 0x1800DC030 (-SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x18010A670 (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 * Callees:
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180016C00 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ??$make_self@UTransitionManager@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA?AU?$com_ptr@UTransitionManager@implementation@Transitions@Udwm@winrt@@@0@XZ @ 0x18001CB54 (--$make_self@UTransitionManager@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA-AU-$com_ptr.c)
 *     ??$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIRotationTransitionManager@Private@Transitions@Udwm@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18002E604 (--$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@-$abi@UIUnknown@Foundati.c)
 *     ??$as@UTransitionManager@Transitions@Udwm@winrt@@U1implementation@234@$0A@@impl@winrt@@YA?AUTransitionManager@Transitions@Udwm@1@PEAU2implementation@341@@Z @ 0x18002E878 (--$as@UTransitionManager@Transitions@Udwm@winrt@@U1implementation@234@$0A@@impl@winrt@@YA-AUTran.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x180043E10 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A14C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D84DC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x1800E7620 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowList::ForceUpdateScene(CWindowList *this)
{
  CDesktopManager *v3; // rcx
  CDesktopManager *v4; // rbx
  __int64 v5; // r14
  unsigned int i; // edi
  CDesktopManager *v7; // rcx
  _QWORD *j; // rbx
  struct CVisual *v9; // rdx
  struct CVisual *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 (__fastcall ***v14)(_QWORD, __int64 *, __int64 *); // rbx
  __int64 v15; // rdi
  int v16; // eax
  CDesktopManager *v17; // rcx
  struct CVisual *v18; // rdx
  __int64 v19; // rax
  struct CVisual *v20; // rdx
  struct CVisual *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  HANDLE *v24; // rbx
  int v25; // eax
  char *v26; // rdi
  int v27; // eax
  CDesktopManager *v29; // rcx
  __int64 *v30; // rbx
  __int64 v31; // rax
  DWORD LastError; // ebx
  int v33; // [rsp+20h] [rbp-88h]
  PVOID RestartKey; // [rsp+30h] [rbp-78h] BYREF
  winrt::Udwm::Transitions::implementation::TransitionManager *v35; // [rsp+38h] [rbp-70h] BYREF
  __int64 v36; // [rsp+40h] [rbp-68h] BYREF
  __int64 (__fastcall ***v37[4])(_QWORD, __int64 *, __int64 *); // [rsp+48h] [rbp-60h] BYREF
  int v38[4]; // [rsp+68h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v37[2] = (__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))this;
  v37[3] = (__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))&CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  v4 = CDesktopManager::s_pDesktopManagerInstance;
  v5 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  v37[1] = (__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))v5;
  for ( i = 0; i < *((_DWORD *)v4 + 188); ++i )
    CDesktopManager::UpdateSceneImpl(v3, *(struct CVisual **)(*((_QWORD *)v4 + 91) + 8LL * i));
  for ( j = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
        j;
        j = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey) )
  {
    v9 = (struct CVisual *)j[3];
    if ( v9 )
      CDesktopManager::UpdateSceneImpl(v7, v9);
    v10 = (struct CVisual *)j[5];
    if ( v10 )
      CDesktopManager::UpdateSceneImpl(v7, v10);
    v11 = j[7];
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 96);
      if ( v12 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 64LL))(v12);
        if ( v13 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x15E,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
            (const char *)(unsigned int)v13,
            v33);
      }
    }
  }
  if ( !winrt::Udwm::Transitions::implementation::TransitionManager::m_instance )
  {
    v30 = (__int64 *)winrt::make_self<winrt::Udwm::Transitions::implementation::TransitionManager,>(&v35);
    if ( &winrt::Udwm::Transitions::implementation::TransitionManager::m_instance != v30 )
    {
      if ( winrt::Udwm::Transitions::implementation::TransitionManager::m_instance )
        winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>::unconditional_release_ref(&winrt::Udwm::Transitions::implementation::TransitionManager::m_instance);
      v31 = *v30;
      *v30 = 0LL;
      winrt::Udwm::Transitions::implementation::TransitionManager::m_instance = v31;
    }
    if ( v35 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>::unconditional_release_ref(&v35);
  }
  winrt::impl::as<winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::implementation::TransitionManager,0>(
    v37,
    (__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))winrt::Udwm::Transitions::implementation::TransitionManager::m_instance);
  v14 = v37[0];
  winrt::impl::as<winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v36,
    v37[0]);
  v15 = v36;
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 64LL))(v36);
  if ( v16 < 0 )
    winrt::throw_hresult((unsigned int)v16);
  if ( v15 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v36);
  if ( v14 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v37);
  v18 = (struct CVisual *)*((_QWORD *)this + 66);
  if ( v18 && *((_QWORD *)v18 + 3) )
    CDesktopManager::UpdateSceneImpl(v17, v18);
  v19 = *((_QWORD *)this + 69);
  if ( v19 )
  {
    v20 = *(struct CVisual **)(v19 + 48);
    if ( v20 )
      CDesktopManager::UpdateSceneImpl(v17, v20);
  }
  if ( v5 && *(_QWORD *)(v5 + 8) )
  {
    CWindowList::MoveTransitionAndTouchVisualToFront(this);
    CDesktopManager::UpdateSceneImpl(v29, *(struct CVisual **)(v5 + 8));
  }
  v21 = (struct CVisual *)*((_QWORD *)this + 71);
  if ( v21 && *((_QWORD *)v21 + 3) )
    CDesktopManager::UpdateSceneImpl(v17, v21);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 58) + 56LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58));
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&CommitChannel_UpdateScene,
      v22,
      1LL,
      (__int64)v38);
  v23 = *((_QWORD *)this + 78);
  if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v24 = (HANDLE *)((char *)this + 608);
  }
  else
  {
    v24 = (HANDLE *)((char *)this + 608);
    v23 = *((_QWORD *)this + 76);
  }
  v25 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 6)
                                                                 + 24LL)
                                                   + 32LL))(
          *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 24LL),
          v23);
  if ( v25 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1AD4,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v25,
      v33);
  *((_BYTE *)this + 642) = 0;
  if ( *v24 )
  {
    NtDCompositionCommitSynchronizationObject(*v24);
    ConfirmResizeCommit(*((_QWORD *)this + 77));
    *((_QWORD *)this + 77) = 0LL;
    CloseHandle(*v24);
    *v24 = 0LL;
  }
  v26 = (char *)*((_QWORD *)this + 78);
  if ( (unsigned __int64)(v26 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v26);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 78) = 0LL;
  v27 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                        + 32LL)
                                          + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                             + 32LL));
  if ( v27 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1ADB,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v27,
      v33);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
