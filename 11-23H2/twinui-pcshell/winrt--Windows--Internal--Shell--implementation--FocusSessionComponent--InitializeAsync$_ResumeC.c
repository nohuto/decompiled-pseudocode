/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_ResumeCoro$1 @ 0x1801CF600
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_InitCoro$2 @ 0x1801CF54C (winrt--Windows--Internal--Shell--implementation--FocusSessionComponent--InitializeAsync$_InitCor.c)
 * Callees:
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVXamlLauncher@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x180059E08 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVXamlLauncher@@UDismis.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@Uguid@2@W4DashboardInvokeType@Dashboard@5UI@WindowsUdk@2@URect@Foundation@72@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@Uguid@2@W4DashboardInvokeType@Dashboard@5UI@WindowsUdk@2@URect@Foundation@72@@experimental@std@@@experimental@std@@@Z @ 0x1800715E8 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@i.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ @ 0x180085B0C (--1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetDefault@FocusSessionThemeManager@Shell@Internal@Windows@winrt@@SA@XZ @ 0x18019C344 (-GetDefault@FocusSessionThemeManager@Shell@Internal@Windows@winrt@@SA@XZ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ??$wnf_publish@H@wil@@YAXAEBU_WNF_STATE_NAME@@AEBH@Z @ 0x1801BB820 (--$wnf_publish@H@wil@@YAXAEBU_WNF_STATE_NAME@@AEBH@Z.c)
 *     ?release_ref@?$com_ptr@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801BCF98 (-release_ref@-$com_ptr@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAX.c)
 *     ?InitializeTimer@?$consume_Windows_Internal_Shell_IFocusSessionThemeManager@UIFocusSessionThemeManager@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801BD828 (-InitializeTimer@-$consume_Windows_Internal_Shell_IFocusSessionThemeManager@UIFocusSessionThemeM.c)
 *     ?get_strong@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@QEAA?AU?$com_ptr@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1801BDD98 (-get_strong@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWi.c)
 *     ??4FocusSessionThemeManager@Shell@Internal@Windows@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1801BF420 (--4FocusSessionThemeManager@Shell@Internal@Windows@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync__ResumeCoro_1(
        __int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  winrt::Windows::Foundation::IUnknown *Default; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  const char *v6; // r9
  wil *v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v1 = a1;
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_8;
      case 2:
        winrt::implements<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::Shell::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,winrt::immersive_shell_component,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,winrt::cloaked<Windows::Internal::Shell::IWindowTabHostInternal>>::get_strong(
          *(_QWORD *)(a1 + 66),
          (_QWORD *)(a1 + 16));
        *(_BYTE *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 32) = a1 + 24;
        if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
          goto LABEL_6;
        *(_WORD *)(a1 + 8) = 4;
        ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAUDashboardManager_implementation_Shell_Internal_Windows_2_Uguid_2_W4DashboardInvokeType_Dashboard_5UI_WindowsUdk_2_URect_Foundation_72__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAUDashboardManager_implementation_Shell_Internal_Windows_2_Uguid_2_W4DashboardInvokeType_Dashboard_5UI_WindowsUdk_2_URect_Foundation_72__experimental_std___experimental_std___Z(
          v2,
          (void *)a1);
        return;
      case 4:
LABEL_6:
        _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
        try
        {
          Default = (winrt::Windows::Foundation::IUnknown *)winrt::Windows::Internal::Shell::FocusSessionThemeManager::GetDefault(a1 + 40);
          v4 = *(_QWORD *)(a1 + 66);
          winrt::Windows::Internal::Shell::FocusSessionThemeManager::operator=(
            (winrt::Windows::Foundation::IUnknown *)(v4 + 96),
            Default);
          winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection::~IVirtualDesktopCollection((winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *)(a1 + 40));
          winrt::impl::consume_Windows_Internal_Shell_IFocusSessionThemeManager<winrt::Windows::Internal::Shell::IFocusSessionThemeManager>::InitializeTimer((_QWORD *)(v4 + 96));
          *(_DWORD *)(a1 + 48) = 0;
          wil::wnf_publish<int>(v5, a1 + 48);
        }
        catch ( ... )
        {
          *(_QWORD *)(a1 + 56) = 0LL;
          winrt::Windows::Internal::Shell::FocusSessionThemeManager::operator=(
            (winrt::Windows::Foundation::IUnknown *)(*(_QWORD *)(a1 + 66) + 96LL),
            (winrt::Windows::Foundation::IUnknown *)(a1 + 56));
          winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection::~IVirtualDesktopCollection((winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *)(a1 + 56));
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0x38,
            (unsigned int)"pcshell\\twinui\\focussessioncomponent\\lib\\focussessioncomponent.cpp",
            v6);
          v8 = wil::ResultFromCaughtException(v7);
          MicrosoftTelemetryAssertTriggeredArgs(v9, v8);
          v1 = a1;
        }
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref((__int64 *)(v1 + 16));
        std::experimental::coroutine_traits<winrt::fire_and_forget,XamlLauncher *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::final_suspend(
          v1,
          (_BYTE *)(v1 + 64));
        goto LABEL_8;
      case 5:
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref((__int64 *)(a1 + 16));
LABEL_8:
        if ( *(_WORD *)(v1 + 10) )
          operator delete((void *)v1);
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
