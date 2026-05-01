/*
 * XREFs of TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x18021EBA0
 * Callers:
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_InitCoro$2 @ 0x18021EADC (TouchEdgeGripperHost--CreateGripperWindowAsync$_InitCoro$2.c)
 * Callees:
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18004D4D0 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180050328 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHost@@_N@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHost@@_N@experimental@std@@@experimental@std@@@Z @ 0x180073D88 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHo.c)
 *     ?WatchCurrentThread@TouchEdgeGestureTelemetry@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1800BA038 (-WatchCurrentThread@TouchEdgeGestureTelemetry@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D2458 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1800D2458.c)
 *     ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801451A8 (--4-$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA@XZ @ 0x1801AA480 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ra.c)
 *     ?await_ready@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x1801B0E64 (-await_ready@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$rat.c)
 *     ?resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1801B2828 (-resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801B5348 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x1801B7C64 (--1awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?NotifyGripperDismissedIfNecessaryAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x18021FC2C (-NotifyGripperDismissedIfNecessaryAsync@TouchEdgeGripperHost@@AEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180234F54 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180248A54 (-await_ready@-$notify_awaiter@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Manage.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1802D2E70 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@U-$IAsyncOperation@UIR.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     ?release_ref@?$com_ptr@VJointResize@@@winrt@@AEAAXXZ @ 0x180392284 (-release_ref@-$com_ptr@VJointResize@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1803F9E3C (--4-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@win.c)
 *     ?release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x18064E058 (-release_ref@-$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHost@@_N@experimental@std@@@?$notify_awaiter@AEAUDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHost@@_N@experimental@std@@@experimental@std@@@Z @ 0x180656548 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouch_ea_180656548.c)
 *     winrt::make_self_TouchEdgeGripperWindow_enum_TouchEdgeGestureType_&_IImmersiveMonitor___bool_&__lambda_c23e8e667a3c4ca3ee30dd3b90606dcd___ @ 0x1806566F0 (winrt--make_self_TouchEdgeGripperWindow_enum_TouchEdgeGestureType_-_IImmersiveMonitor___bool_-__.c)
 *     ?CreateGripperWindow@TouchEdgeGestureTelemetry@@SAXXZ @ 0x18065688C (-CreateGripperWindow@TouchEdgeGestureTelemetry@@SAXXZ.c)
 *     ?StartDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180656E10 (-StartDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?await_resume@?$notify_awaiter@AEAUDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x180657480 (-await_resume@-$notify_awaiter@AEAUDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1806574F8 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?get_weak@?$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$weak_ref@VTouchEdgeGripperHost@@@2@XZ @ 0x180657564 (-get_weak@-$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QE.c)
 *     ?release_ref@?$com_ptr@VTouchEdgeGripperWindow@@@winrt@@AEAAXXZ @ 0x180657584 (-release_ref@-$com_ptr@VTouchEdgeGripperWindow@@@winrt@@AEAAXXZ.c)
 *     ?Dismiss@TouchEdgeGripperWindow@@QEAAX_N@Z @ 0x18065B170 (-Dismiss@TouchEdgeGripperWindow@@QEAAX_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18074BCA8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall TouchEdgeGripperHost::CreateGripperWindowAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rcx
  RTL_SRWLOCK *v2; // rsi
  __int64 Ptr; // rsi
  __int64 v4; // rsi
  void *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdi
  TouchEdgeGripperWindow *v8; // rcx
  char v9; // si
  __int64 v10; // r8
  __int64 self_TouchEdgeGripperWindow_enum_TouchEdgeGestureType___IImmersiveMonitor___bool____lambda_c23e8e667a3c4ca3ee30dd3b90606dcd; // rax

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_20;
      case 2:
        TouchEdgeGestureTelemetry::CreateGripperWindow();
        winrt::implements<TouchEdgeGripperHost,winrt::Windows::Foundation::IInspectable>::get_weak(
          *(_QWORD *)(a1 + 283),
          a1 + 16);
        *(_BYTE *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 32) = a1 + 24;
        if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
          goto LABEL_6;
        *(_WORD *)(a1 + 8) = 4;
        ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std___experimental_std___Z(
          v1,
          a1);
        return;
      case 4:
LABEL_6:
        _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
        winrt::weak_ref<SnapFlyoutHost>::get(a1 + 16, a1 + 40);
        if ( !*(_QWORD *)(a1 + 40) )
          goto LABEL_19;
        v2 = *(RTL_SRWLOCK **)(a1 + 283);
        wil::srwlock::lock_shared(v2 + 29, (RTL_SRWLOCK **)(a1 + 48));
        Ptr = (__int64)v2[4].Ptr;
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 48));
        *(_QWORD *)(a1 + 112) = winrt::resume_on_signal(a1 + 56, Ptr, 0LL);
        if ( !_await_ready___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ(a1 + 112) )
        {
          *(_WORD *)(a1 + 8) = 6;
          ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVTouchEdgeGripperHost___N_experimental_std_____notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVTouchEdgeGripperHost___N_experimental_std___experimental_std___Z((PVOID *)(a1 + 112));
          return;
        }
LABEL_10:
        _await_resume___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_XZ((__int64 *)(a1 + 112));
        `winrt::resume_on_signal'::`2'::awaitable::~awaitable(a1 + 56);
        v4 = *(_QWORD *)(a1 + 283);
        if ( *(_BYTE *)(v4 + 24) )
        {
          *(_QWORD *)(a1 + 120) = v4 + 72;
          *(_DWORD *)(a1 + 128) = 0;
          *(_BYTE *)(a1 + 132) = 0;
          if ( !(unsigned __int8)winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::await_ready(a1 + 120) )
          {
            *(_WORD *)(a1 + 8) = 8;
            if ( (unsigned __int8)winrt::impl::notify_awaiter<winrt::Windows::System::DispatcherQueue &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,TouchEdgeGripperHost *,bool>::promise_type>(
                                    a1 + 120,
                                    a1) )
              return;
          }
LABEL_16:
          winrt::impl::notify_awaiter<winrt::Windows::System::DispatcherQueue &>::await_resume(a1 + 120);
          TouchEdgeGestureTelemetry::WatchCurrentThread(
            (wil::ActivityThreadWatcher *)(a1 + 144),
            "TouchEdgeGripperHost::CreateGripperWindowAsync");
          v7 = *(_QWORD *)(a1 + 283);
          wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(v7 + 232), (RTL_SRWLOCK **)(a1 + 224));
          v8 = *(TouchEdgeGripperWindow **)(v7 + 56);
          if ( v8 )
          {
            v9 = *((_BYTE *)v8 + 160);
            TouchEdgeGripperWindow::Dismiss(v8, 1);
            LOBYTE(v10) = v9;
            TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync(v7, a1 + 232, v10);
          }
          *(_QWORD *)(a1 + 240) = v7;
          *(_QWORD *)(a1 + 248) = *(_QWORD *)(v7 + 48);
          self_TouchEdgeGripperWindow_enum_TouchEdgeGestureType___IImmersiveMonitor___bool____lambda_c23e8e667a3c4ca3ee30dd3b90606dcd = winrt::make_self_TouchEdgeGripperWindow_enum_TouchEdgeGestureType___IImmersiveMonitor___bool____lambda_c23e8e667a3c4ca3ee30dd3b90606dcd___((int)a1 + 256, (int)v7 + 28, (int)a1 + 248, (int)a1 + 291, a1 + 240);
          winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::operator=(
            v7 + 56,
            self_TouchEdgeGripperWindow_enum_TouchEdgeGestureType___IImmersiveMonitor___bool____lambda_c23e8e667a3c4ca3ee30dd3b90606dcd);
          winrt::com_ptr<TouchEdgeGripperWindow>::release_ref(a1 + 256);
          *(_OWORD *)(v7 + 240) = *(_OWORD *)(*(_QWORD *)(v7 + 56) + 104LL);
          TouchEdgeGripperHost::StartDismissTimer(v7);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 224));
          wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 144));
        }
        else
        {
          wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(v4 + 232), (RTL_SRWLOCK **)(a1 + 264));
          *(_DWORD *)(v4 + 28) = 0;
          *(_QWORD *)(a1 + 272) = 0LL;
          winrt::com_ptr<ITouchSwipe>::operator=((__int64 *)(v4 + 48), (__int64 *)(a1 + 272));
          winrt::com_ptr<JointResize>::release_ref(a1 + 272);
          wil::details::ResetEvent(*(wil::details **)(v4 + 32), v5);
          LOBYTE(v6) = *(_BYTE *)(a1 + 291);
          TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync(v4, a1 + 280, v6);
          MicrosoftTelemetryAssertTriggeredNoArgs();
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 264));
        }
LABEL_19:
        winrt::com_ptr<TouchEdgeGripperHost>::release_ref(a1 + 40);
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 16);
        std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
          a1,
          a1 + 281);
LABEL_20:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1);
        break;
      case 5:
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 16);
        goto LABEL_20;
      case 6:
        goto LABEL_10;
      case 7:
        `winrt::resume_on_signal'::`2'::awaitable::~awaitable(a1 + 56);
        winrt::com_ptr<TouchEdgeGripperHost>::release_ref(a1 + 40);
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 16);
        goto LABEL_20;
      case 8:
        goto LABEL_16;
      case 9:
        winrt::com_ptr<TouchEdgeGripperHost>::release_ref(a1 + 40);
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 16);
        goto LABEL_20;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
