/*
 * XREFs of ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x18024078C
 * Callers:
 *     ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18036F090 (-OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18036F180 (-OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18036F220 (-OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18003E340 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18007D438 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?Current@ViewCoordinator@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801D65E8 (-Current@ViewCoordinator@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1802409D0 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?ReportVisibilityForMonitor@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x180240A10 (-ReportVisibilityForMonitor@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoord.c)
 *     ??$com_weak_query@PEAVCActionCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCActionCenterExperienceManager@@@Z @ 0x1802A9E98 (--$com_weak_query@PEAVCActionCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Ue.c)
 *     ??4?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802C0C34 (--4-$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_polic.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_97caca280bc1831b2fa8b4bd22a72139_____lambda_97caca280bc1831b2fa8b4bd22a72139___ @ 0x18036B5E0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_97caca280bc18.c)
 *     ?SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ @ 0x18036FE68 (-SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@QEAA_NXZ @ 0x180372134 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CActionCenterExperienceManager::OnVisibilityChanged(ExperienceManagerUtils **this)
{
  int v2; // eax
  bool v3; // r14
  int v4; // eax
  __int64 v5; // rax
  unsigned int v6; // r15d
  __int64 *v7; // rax
  __int64 v8; // rbx
  volatile signed __int32 *v9; // rcx
  int v10; // r15d
  unsigned int v11; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v12; // rdx
  HWND v13; // rax
  HMONITOR v14; // rax
  const char *v15; // r9
  ExperienceManagerUtils **v16; // [rsp+30h] [rbp-38h] BYREF
  _OWORD v17[3]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  ExperienceManagerUtils **v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF

  if ( *((_DWORD *)this + 42) == 2 )
  {
    v2 = CActionCenterExperienceManager::SetWindowRegion((CActionCenterExperienceManager *)this);
    v3 = 1;
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x51D,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
  }
  else
  {
    v3 = 0;
  }
  v4 = CActionCenterExperienceManager::RaisePropertyChangedEvent((CActionCenterExperienceManager *)this, L"Ready", v3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x521,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v20 = 0LL;
  v19 = this;
  v5 = wil::com_weak_query<CActionCenterExperienceManager *>(&v21, &v19);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
    &v20,
    v5);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
  v16 = this;
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    (__int64 *)v17,
    &v20);
  BYTE8(v17[0]) = v3;
  v6 = *((_DWORD *)this + 166);
  v7 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_97caca280bc1831b2fa8b4bd22a72139_____lambda_97caca280bc1831b2fa8b4bd22a72139___(
                    &v19,
                    &v16);
  v8 = *v7;
  *v7 = 0LL;
  v9 = (volatile signed __int32 *)v19;
  if ( v19 )
  {
    v19 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v9);
  }
  v10 = SHTaskPoolQueueTask(3LL, 2LL, v6);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v17);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x53D,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  try
  {
    winrt::WindowsUdk::UI::Shell::ViewCoordinator::Current(&v21);
    LODWORD(v16) = 0;
    v17[0] = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)v21 + 72LL))(v21, 0LL, !v3);
    winrt::check_hresult(&v19, v11, &v16);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_41356296>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_41356296>::GetImpl'::`2'::impl) )
    {
      v13 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(this[19], v12);
      v14 = MonitorFromWindow(v13, 1u);
      LODWORD(v19) = !v3;
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
        this + 100,
        v14,
        &v19);
    }
    else
    {
      LODWORD(v19) = !v3;
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
        this + 100,
        &v19);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x551,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      v15);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
}
