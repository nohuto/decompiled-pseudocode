/*
 * XREFs of ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180024708
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800132D0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18001A6A4 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180021D8C (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCContainerVisual@@@Z @ 0x18003F550 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCContainerVisual@@@Z.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180040290 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180052658 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x180063B2C (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x18006C2A8 (-SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___ @ 0x180080BF0 (CTransitionVisualController--ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18008F480 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180098420 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StopAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800E666C (-StopAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800EBA80 (-Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x180015200 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?reset@?$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015BA4 (-reset@-$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001B720 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180023A5C (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x180023D54 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 *     ??$?9$$A6AJXZ@std@@YA_NAEBV?$function@$$A6AJXZ@0@$$T@Z @ 0x180024AEC (--$-9$$A6AJXZ@std@@YA_NAEBV-$function@$$A6AJXZ@0@$$T@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800250EC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180049728 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18004A310 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180077594 (-QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180097FD4 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C7E88 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?EnsureWorkAreaChangeTransitionRemoved@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x1800E6DE0 (-EnsureWorkAreaChangeTransitionRemoved@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__.c)
 *     ?_Dwm_Xbad_function_call@std@@YAXXZ @ 0x1800F4B84 (-_Dwm_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow3D::StopAnimation(CTopLevelWindow3D *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  char v6; // r11
  char v7; // r11
  CTopLevelWindow *v8; // rcx
  int v9; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 **v13; // rdi
  CTimelineBase **v14; // rdx
  __int64 v15; // r8
  CTimelineBase *v16; // rcx
  int v17; // ecx
  CLivePreview *v18; // rcx
  int v19; // edx
  __int64 *v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // r8d
  void (__fastcall *v25)(__int64 *, _QWORD *, _QWORD, _QWORD, _BYTE *, _QWORD, int); // rax
  int v26; // eax
  winrt::Udwm::Transitions::TransitionManager *Current; // rax
  _QWORD v28[4]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v29[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h]
  int v31; // [rsp+80h] [rbp-88h]
  GUID v32; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v33[128]; // [rsp+98h] [rbp-70h] BYREF

  if ( (unsigned __int8)std::operator!=<long (void)>((char *)this + 504) )
  {
    v11 = *((_QWORD *)this + 70);
    if ( !v11 )
      std::_Dwm_Xbad_function_call();
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x804u, 0LL);
      return v4;
    }
  }
  if ( *((_BYTE *)this + 251) )
  {
    *((_BYTE *)this + 251) = 0;
    Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent();
    winrt::Udwm::Transitions::TransitionManager::EnsureWorkAreaChangeTransitionRemoved(
      Current,
      *(HWND *)(*((_QWORD *)this + 36) + 40LL));
  }
  if ( !*((_QWORD *)this + 40) )
  {
    if ( *((_BYTE *)this + 488) && CDesktopManager::UnregisterForGlobalTimeChangeNotification(this) )
      *((_BYTE *)this + 488) = 0;
    goto LABEL_6;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(
      v2,
      &UdwmAnimation_Stop,
      *((unsigned int *)this + 84),
      *(_QWORD *)(*((_QWORD *)this + 36) + 40LL));
  v13 = (__int64 **)((char *)this + 328);
  if ( *((_QWORD *)this + 41) )
  {
    v19 = *((_DWORD *)this + 84);
    v32 = 0LL;
    CTopLevelWindow3D::GetScenarioGuid(v2, v19, &v32);
    GetAnimationScenarioNameFromGUID(&v32, v33, 64LL);
    v20 = *v13;
    v30 = 0LL;
    v31 = 0;
    *(_OWORD *)&v29[1] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, _QWORD *))(*v20 + 88))(v20, &v29[1]) >= 0 )
    {
      v21 = *v13;
      LODWORD(v29[0]) = v31;
      v22 = *((_QWORD *)this + 40);
      v23 = *v21;
      *(_OWORD *)&v28[1] = *(_OWORD *)&v29[1];
      v24 = (int)*(double *)(v22 + 24);
      v25 = *(void (__fastcall **)(__int64 *, _QWORD *, _QWORD, _QWORD, _BYTE *, _QWORD, int))(v23 + 216);
      v28[3] = v30;
      v25(v21, &v28[1], 0LL, 0LL, v33, 0LL, v24);
    }
    (*(void (__fastcall **)(__int64 *, _QWORD))(**v13 + 40))(*v13, 0LL);
    wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset((__int64 *)this + 41);
  }
  v14 = (CTimelineBase **)((char *)this + 344);
  v15 = 15LL;
  do
  {
    if ( *v14 )
    {
      CTimelineBase::Release(*v14);
      *v14 = 0LL;
    }
    ++v14;
    --v15;
  }
  while ( v15 );
  v16 = (CTimelineBase *)*((_QWORD *)this + 40);
  if ( v16 )
  {
    CTimelineBase::Release(v16);
    *((_QWORD *)this + 40) = 0LL;
  }
  if ( CDesktopManager::UnregisterForGlobalTimeChangeNotification(this) )
    --*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 10);
  v17 = *((_DWORD *)this + 84);
  if ( v17 == 9 && !*((_BYTE *)this + 248) )
    goto LABEL_43;
  if ( !*((_DWORD *)this + 85) )
    goto LABEL_30;
  if ( (unsigned int)(v17 - 7) > 2 )
  {
LABEL_43:
    *((_OWORD *)this + 17) = *(_OWORD *)(*((_QWORD *)this + 36) + 48LL);
LABEL_30:
    if ( (unsigned int)(v17 - 7) > 2 )
      *((_DWORD *)this + 85) = 0;
  }
  *((_DWORD *)this + 84) = 0;
LABEL_6:
  v3 = CRenderDataVisual::ClearInstructions(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x854u, 0LL);
  }
  else
  {
    CTopLevelWindow3D::ReleaseSceneObjects(this);
    CVisual::SetOpacity(this, 1.0);
    v5 = *((_QWORD *)this + 36);
    v6 = *(_BYTE *)(v5 + 736);
    if ( (v6 & 4) != 0 )
    {
      v26 = CWindowList::QueueDestroySprite(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
              (struct CWindowData *)v5);
      v4 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x86Au, 0LL);
    }
    else
    {
      v7 = v6 & 1;
      if ( !v7
        || (v18 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57), !*((_BYTE *)v18 + 240))
        || !v5
        || !CLivePreview::_IsInLivePreview(v18, (const struct CWindowData *)v5) )
      {
        v8 = *(CTopLevelWindow **)(v5 + 440);
        if ( v8 )
        {
          v9 = CTopLevelWindow::ShowWindow(v8, v7);
          v4 = v9;
          if ( v9 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x865u, 0LL);
        }
      }
    }
  }
  return v4;
}
