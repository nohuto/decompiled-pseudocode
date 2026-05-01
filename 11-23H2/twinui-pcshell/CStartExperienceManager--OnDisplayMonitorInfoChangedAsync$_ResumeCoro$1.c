/*
 * XREFs of CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1801E2980
 * Callers:
 *     CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_InitCoro$2 @ 0x1801E28C0 (CStartExperienceManager--OnDisplayMonitorInfoChangedAsync$_InitCoro$2.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVXamlLauncher@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x180059E08 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVXamlLauncher@@UDismis.c)
 *     ??$await_transform@AEAUapartment_context@winrt@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCActionCenterExperienceManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@QEAA?A_PAEAUapartment_context@winrt@@@Z @ 0x180065BEC (--$await_transform@AEAUapartment_context@winrt@@@promise_type@-$coroutine_traits@Ufire_and_forge.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x180072C04 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienc.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??$try_query@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIStartExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800F36C0 (--$try_query@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UIWeakRefe.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_weak_query@PEAVCStartExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCStartExperienceManager@@@Z @ 0x180136F54 (--$com_weak_query@PEAVCStartExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uerr_exce.c)
 *     ?await_resume@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@XZ @ 0x1801B3360 (-await_resume@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ?IsViewVisible@CStartExperienceManager@@AEBA_NXZ @ 0x1801BD4A0 (-IsViewVisible@CStartExperienceManager@@AEBA_NXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180234F54 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ @ 0x1802D4E40 (-WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CStartExperienceManager::OnDisplayMonitorInfoChangedAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rcx
  int HaveChanged; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_11;
      case 2:
        v1 = *(_QWORD *)(a1 + 74);
        *(_QWORD *)(a1 + 16) = v1;
        wil::com_weak_query<CStartExperienceManager *>((__int64 *)(a1 + 24), (__int64 *)(a1 + 16));
        v3 = std::experimental::coroutine_traits<winrt::fire_and_forget,CActionCenterExperienceManager *,winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs>::promise_type::await_transform<winrt::apartment_context &>(
               v2,
               a1 + 40,
               (__int64 *)(v1 + 856));
        *(_QWORD *)(a1 + 32) = v3;
        if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
          goto LABEL_6;
        *(_WORD *)(a1 + 8) = 4;
        winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CJumpViewExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type>(
          v3,
          a1);
        return;
      case 4:
LABEL_6:
        winrt::impl::notify_awaiter<winrt::apartment_context &>::await_resume(*(_QWORD *)(a1 + 32));
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 40);
        wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IStartExperienceManager>(
          (__int64 *)(a1 + 24),
          (_QWORD *)(a1 + 64));
        if ( *(_QWORD *)(a1 + 64) )
        {
          if ( CStartExperienceManager::IsViewVisible(*(CStartExperienceManager **)(a1 + 74)) )
          {
            HaveChanged = CStartExperienceManager::WorkAreaMayHaveChanged((CStartExperienceManager *)(v4 + 40));
            if ( HaveChanged < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x603,
                (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
                (const char *)(unsigned int)HaveChanged);
          }
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 64));
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 24));
        std::experimental::coroutine_traits<winrt::fire_and_forget,XamlLauncher *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::final_suspend(
          a1,
          (_BYTE *)(a1 + 72));
        goto LABEL_11;
      case 5:
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 40);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 24));
LABEL_11:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
