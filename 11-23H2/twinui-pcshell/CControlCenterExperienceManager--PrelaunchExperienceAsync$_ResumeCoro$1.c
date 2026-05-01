/*
 * XREFs of CControlCenterExperienceManager::PrelaunchExperienceAsync$_ResumeCoro$1 @ 0x1801DF350
 * Callers:
 *     CControlCenterExperienceManager::PrelaunchExperienceAsync$_InitCoro$2 @ 0x1801DF290 (CControlCenterExperienceManager--PrelaunchExperienceAsync$_InitCoro$2.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18002B06C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVXamlLauncher@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x180059E08 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVXamlLauncher@@UDismis.c)
 *     ??$await_transform@AEAUapartment_context@winrt@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCActionCenterExperienceManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@QEAA?A_PAEAUapartment_context@winrt@@@Z @ 0x180065BEC (--$await_transform@AEAUapartment_context@winrt@@@promise_type@-$coroutine_traits@Ufire_and_forge.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA@XZ @ 0x18006FD1C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$.c)
 *     ??1awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x180071960 (--1awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x180072C04 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienc.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCControlCenterExperienceManager@@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCControlCenterExperienceManager@@@experimental@std@@@experimental@std@@@Z @ 0x180073D78 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCControlCenterExpe.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x1800DB690 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x1801334E0 (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ??$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCControlCenterExperienceManager@@@Z @ 0x180136FEC (--$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@U.c)
 *     ??$try_query@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801448F4 (--$try_query@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     ?ReadUInt32@RegistryDataHelper@@QEBAJPEBGIPEAI@Z @ 0x1801B12EC (-ReadUInt32@RegistryDataHelper@@QEBAJPEBGIPEAI@Z.c)
 *     ??$?0HU?$ratio@$0DM@$00@std@@$0A@@?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV?$duration@HU?$ratio@$0DM@$00@std@@@12@@Z @ 0x1801B2D44 (--$-0HU-$ratio@$0DM@$00@std@@$0A@@-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV.c)
 *     ?await_resume@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@XZ @ 0x1801B3360 (-await_resume@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ??0RegistryDataHelper@@QEAA@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1801B6E64 (--0RegistryDataHelper@@QEAA@PEAUHKEY__@@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ?await_ready@?$notify_awaiter@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x1801BAF48 (-await_ready@-$notify_awaiter@Uawaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180234F54 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?ControlCenterPage_PrelaunchStarted@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ @ 0x18041E858 (-ControlCenterPage_PrelaunchStarted@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
void __fastcall CControlCenterExperienceManager::PrelaunchExperienceAsync__ResumeCoro_1(char *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rbx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_19;
      case 2:
        winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)(a1 + 16));
        *((_QWORD *)a1 + 4) = *(_QWORD *)(a1 + 242);
        wil::com_weak_query<CControlCenterExperienceManager *>((__int64 *)a1 + 5, (__int64 *)a1 + 4);
        v2 = std::wstring::wstring((_QWORD *)a1 + 12, L"Software\\Microsoft\\Windows\\CurrentVersion\\Control Center");
        RegistryDataHelper::RegistryDataHelper((_QWORD *)a1 + 6, v3, (__int64)v2);
        *((_DWORD *)a1 + 32) = 0;
        if ( (int)RegistryDataHelper::ReadUInt32(
                    (RegistryDataHelper *)(a1 + 48),
                    L"DisableControlCenterPrelaunch",
                    0,
                    (unsigned int *)a1 + 32) >= 0
          && !*((_DWORD *)a1 + 32)
          && IsActiveSessionCountLimited() )
        {
          *((_DWORD *)a1 + 36) = 5;
          v4 = *std::chrono::duration<__int64,std::ratio<1,10000000>>::duration<__int64,std::ratio<1,10000000>>(
                  (_QWORD *)a1 + 17,
                  (int *)a1 + 36);
          *((_QWORD *)a1 + 19) = 0LL;
          *((_QWORD *)a1 + 20) = 0LL;
          *((_QWORD *)a1 + 21) = v4;
          *((_QWORD *)a1 + 22) = 0LL;
          *((_DWORD *)a1 + 46) = 0;
          *((_QWORD *)a1 + 24) = a1 + 152;
          if ( !_await_ready___notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ((__int64)(a1 + 192)) )
          {
            *((_WORD *)a1 + 4) = 4;
            ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVCControlCenterExperienceManager___experimental_std_____notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVCControlCenterExperienceManager___experimental_std___experimental_std___Z((PVOID *)a1 + 24);
            return;
          }
LABEL_10:
          _await_resume___notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_XZ((_QWORD *)a1 + 24);
          `winrt::resume_after'::`2'::awaitable::~awaitable((volatile __int64 **)a1 + 19);
          v6 = std::experimental::coroutine_traits<winrt::fire_and_forget,CActionCenterExperienceManager *,winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs>::promise_type::await_transform<winrt::apartment_context &>(
                 v5,
                 (__int64)(a1 + 208),
                 (__int64 *)a1 + 2);
          *((_QWORD *)a1 + 25) = v6;
          if ( !winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
          {
            *((_WORD *)a1 + 4) = 6;
            winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CJumpViewExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type>(
              v6,
              (__int64)a1);
            return;
          }
LABEL_13:
          winrt::impl::notify_awaiter<winrt::apartment_context &>::await_resume(*((_QWORD *)a1 + 25));
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 208);
          wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IControlCenterExperienceManager>(
            (__int64 *)a1 + 5,
            (_QWORD *)a1 + 29);
          if ( *((_QWORD *)a1 + 29) )
          {
            v7 = *(_QWORD *)(a1 + 242);
            if ( !*(_QWORD *)(v7 + 144) )
            {
              *(_BYTE *)(v7 + 763) = 1;
              ControlCenterUITelemetry::ControlCenterTelemetry::ControlCenterPage_PrelaunchStarted();
              v8 = CSingleViewShellExperience::Show(
                     v7 + 120,
                     (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)0xB);
              if ( v8 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x29D,
                  (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
                  (const char *)(unsigned int)v8);
            }
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 29);
          std::wstring::_Tidy_deallocate((__int64)(a1 + 56));
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 5);
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 16);
        }
        else
        {
          std::wstring::_Tidy_deallocate((__int64)(a1 + 56));
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 5);
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 16);
        }
        std::experimental::coroutine_traits<winrt::fire_and_forget,XamlLauncher *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::final_suspend(
          (__int64)a1,
          a1 + 240);
LABEL_19:
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1);
        break;
      case 4:
        goto LABEL_10;
      case 5:
        `winrt::resume_after'::`2'::awaitable::~awaitable((volatile __int64 **)a1 + 19);
        std::wstring::_Tidy_deallocate((__int64)(a1 + 56));
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 5);
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 16);
        goto LABEL_19;
      case 6:
        goto LABEL_13;
      case 7:
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 208);
        std::wstring::_Tidy_deallocate((__int64)(a1 + 56));
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 5);
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 16);
        goto LABEL_19;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
