/*
 * XREFs of ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180338640
 * Callers:
 *     _LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync$_ResumeCoro$1_::_1_::catch$14 @ 0x1806E012A (_LockScreenWidgetPackageHelperBase--TryEnableVolumeForPackageInstallAsync$_ResumeCoro$1_--_1_--c.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync$_ResumeCoro$1_::_1_::catch$14 @ 0x1806E02A2 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E02A2.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1_::_1_::catch$15 @ 0x1806E063E (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E063E.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1_::_1_::catch$150 @ 0x1806E0BCD (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E0BCD.c)
 *     _LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1_::_1_::catch$32 @ 0x1806E0FE6 (_LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1_--_1_--catch$3.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1_::_1_::catch$20 @ 0x1806E10A6 (_GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1_--_1_--.c)
 *     _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::catch$147 @ 0x1806E1BD5 (_GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1_--_1_--catch$147.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync$_ResumeCoro$1_::_1_::catch$2 @ 0x1806F986B (_winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance_ea_1806F986B.c)
 *     _LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1_::_1_::catch$72 @ 0x1806FA5B4 (_LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_ResumeCoro$1_--_1_--catch$72.c)
 *     _LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1_::_1_::catch$52 @ 0x1806FAA02 (_LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1_--_1_--catch$52.c)
 *     _LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync$_ResumeCoro$1_::_1_::catch$15 @ 0x1806FAC3C (_LockScreenWidgetPackageHelperBase--IsPackageVolumeSupportedForInstallAsync$_Resume_ea_1806FAC3C.c)
 *     _CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1_::_1_::catch$5 @ 0x18070110A (_CopilotHotkeyManager--LaunchHardwareKeySettings$_ResumeCoro$1_--_1_--catch$5.c)
 * Callees:
 *     ??0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z @ 0x1801B1784 (--0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z.c)
 *     ??1exception_ptr@std@@QEAA@XZ @ 0x1802288C4 (--1exception_ptr@std@@QEAA@XZ.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1802968EC (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1802CB410 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ??4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z @ 0x18032D5BC (--4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x180336030 (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,LockScreenWidgetPackageHelperBase *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,void>::unhandled_exception(
        __int64 a1)
{
  _QWORD *v2; // rax
  std::exception_ptr *v3; // rcx
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF

  winrt::slim_lock_guard::slim_lock_guard((winrt::slim_lock_guard *)&SRWLock, (RTL_SRWLOCK *)(a1 + 72));
  v2 = std::current_exception(v4);
  std::exception_ptr::operator=((void *)(a1 + 56), v2);
  std::exception_ptr::~exception_ptr((std::exception_ptr *)v4);
  v3 = std::exception_ptr::exception_ptr((std::exception_ptr *)v5, (const struct std::exception_ptr *)(a1 + 56));
  try
  {
    std::rethrow_exception(v3);
  }
  catch ( winrt::hresult_canceled )
  {
    *(_DWORD *)(a1 + 96) = 2;
  }
  catch ( ... )
  {
    *(_DWORD *)(a1 + 96) = 3;
  }
  ReleaseSRWLockExclusive_0(SRWLock);
}
