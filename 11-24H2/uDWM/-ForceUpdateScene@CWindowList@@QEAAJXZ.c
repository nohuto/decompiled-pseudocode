/*
 * XREFs of ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180020070
 * Callers:
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18001FF10 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800C046C (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800C1A50 (-StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800C1FA0 (-StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800C2670 (-StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z @ 0x1800D3AA0 (-SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x1800F069C (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 * Callees:
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18001A1E0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002047C (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?UpdateScene@CGlobalLightSet@@QEAAJXZ @ 0x180046F70 (-UpdateScene@CGlobalLightSet@@QEAAJXZ.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18004A310 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?ForceUpdateScene@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004C010 (-ForceUpdateScene@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x180050900 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x180050970 (-CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ.c)
 *     ?SynchronizedCommit@CCompositor@@QEAAJPEAX@Z @ 0x1800550E0 (-SynchronizedCommit@CCompositor@@QEAAJPEAX@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1800865C8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A0818 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1838 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ForceUpdateScene(CWindowList *this)
{
  CWindowList *v1; // rsi
  CDesktopManager *v2; // rcx
  unsigned int v3; // ebx
  CDesktopManager *v4; // rdi
  __int64 v5; // r14
  CDesktopManager *v6; // rcx
  _QWORD *j; // rbx
  struct CVisual *v8; // rdx
  struct CVisual *v9; // rdx
  CGlobalLightSet *v10; // rcx
  winrt::Udwm::Transitions::TransitionManager *Current; // rax
  const char *v12; // r9
  __int64 v13; // rax
  struct CVisual *v14; // rdx
  CDesktopManager *v15; // rcx
  int v16; // r8d
  CDesktopManager *v17; // rcx
  struct CVisual *v18; // rdx
  char *v19; // rdx
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  int v23; // edi
  unsigned int v24; // r8d
  const char *v25; // r9
  int v27; // [rsp+20h] [rbp-58h]
  PVOID RestartKey; // [rsp+30h] [rbp-48h] BYREF
  __int64 i; // [rsp+38h] [rbp-40h]
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+40h] [rbp-38h]
  int v31[2]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = this;
  *(_QWORD *)v31 = this;
  v30 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = 0;
  RestartKey = 0LL;
  v4 = CDesktopManager::s_pDesktopManagerInstance;
  v5 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  for ( i = v5; v3 < *((_DWORD *)v4 + 320); ++v3 )
    CDesktopManager::UpdateSceneImpl(v2, *(struct CVisual **)(*((_QWORD *)v4 + 157) + 8LL * v3));
  for ( j = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 8), &RestartKey);
        j;
        j = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 8), &RestartKey) )
  {
    v8 = (struct CVisual *)j[3];
    if ( v8 )
      CDesktopManager::UpdateSceneImpl(v6, v8);
    v9 = (struct CVisual *)j[5];
    if ( v9 )
      CDesktopManager::UpdateSceneImpl(v6, v9);
    v10 = (CGlobalLightSet *)j[7];
    if ( v10 )
      CGlobalLightSet::UpdateScene(v10);
  }
  try
  {
    Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent();
    winrt::Udwm::Transitions::TransitionManager::ForceUpdateScene(Current);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1BE2,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      v12);
    v5 = i;
    v1 = *(CWindowList **)v31;
  }
  v13 = *((_QWORD *)v1 + 68);
  if ( v13 )
  {
    v14 = *(struct CVisual **)(v13 + 48);
    if ( v14 )
      CDesktopManager::UpdateSceneImpl(v15, v14);
  }
  if ( v5 && *(_QWORD *)(v5 + 8) )
  {
    CWindowList::MoveTransitionAndTouchVisualToFront(v1);
    CDesktopManager::UpdateSceneImpl(v17, *(struct CVisual **)(v5 + 8));
  }
  v18 = (struct CVisual *)*((_QWORD *)v1 + 70);
  if ( v18 && *((_QWORD *)v18 + 3) )
    CDesktopManager::UpdateSceneImpl(v15, v18);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&CommitChannel_UpdateScene,
      v16,
      1,
      (__int64)v31);
  v19 = (char *)*((_QWORD *)v1 + 77);
  if ( (unsigned __int64)(v19 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    v19 = (char *)*((_QWORD *)v1 + 75);
  v20 = CCompositor::SynchronizedCommit(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6), v19);
  v21 = v20;
  if ( v20 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1BFA,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v20,
      v27);
  *((_BYTE *)v1 + 634) = 0;
  CWindowList::CommitAndCloseResizeCompSyncObject(v1);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=((char *)v1 + 616);
  v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                        + 32LL)
                                          + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                             + 32LL));
  v23 = v22;
  if ( v22 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1C02,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v22,
      v27);
  if ( (v21 < 0 || v23 < 0)
    && !SetEvent(*(HANDLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) + 72LL)) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9D3, v24, v25);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
