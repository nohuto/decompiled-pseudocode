/*
 * XREFs of SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_ResumeCoro$1 @ 0x180272C50
 * Callers:
 *     SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_InitCoro$2 @ 0x180272BE8 (SnapFlyoutHost--ShowSnapBarOnMonitorAsync$_InitCoro$2.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801BC9A8 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801C524C (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?await_suspend@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801D6024 (-await_suspend@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18023B6DC (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     ?GetVisibleSnapBar@SnapFlyoutHost@@AEAA?AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@XZ @ 0x180271914 (-GetVisibleSnapBar@SnapFlyoutHost@@AEAA-AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Window.c)
 *     ?ShowSnapBarOnMonitor@SnapFlyoutHost@@AEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x180272A2C (-ShowSnapBarOnMonitor@SnapFlyoutHost@@AEAAXUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?HitTestControl@WindowDragInputProvider@@QEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x1802736A4 (-HitTestControl@WindowDragInputProvider@@QEAAXUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1802CE3EC (--0bad_alloc@std@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?await_resume@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEBAXXZ @ 0x1805B4A2C (-await_resume@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall SnapFlyoutHost::ShowSnapBarOnMonitorAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r14
  __int64 weak_ref; // rax
  unsigned int v4; // eax
  __int64 *v5; // rcx
  float v6; // xmm7_4
  float v7; // xmm6_4
  __int64 v8; // r14
  __int64 v9; // rbx
  _BYTE pExceptionObject[136]; // [rsp+28h] [rbp-C0h] BYREF

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_16;
      case 2:
        *(_DWORD *)(a1 + 88) = 0;
        v1 = *(_QWORD *)(a1 + 145);
        v2 = v1 + 96;
        if ( !*(_QWORD *)(v1 + 96) )
          goto LABEL_16;
        weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref((volatile signed __int64 *)v1);
        if ( !weak_ref )
        {
          std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
          throw (std::bad_alloc *)pExceptionObject;
        }
        *(_QWORD *)(a1 + 96) = weak_ref;
        *(_QWORD *)(a1 + 16) = 0LL;
        *(_DWORD *)(a1 + 88) = 2;
        *(_DWORD *)(a1 + 104) = 0;
        *(_QWORD *)(a1 + 112) = 0LL;
        *(_QWORD *)(a1 + 120) = 0LL;
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)weak_ref + 24LL))(weak_ref);
        winrt::check_hresult(a1 + 128, v4, a1 + 104);
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 96));
        *(_QWORD *)(a1 + 24) = v2;
        *(_DWORD *)(a1 + 32) = 0;
        *(_QWORD *)(a1 + 40) = 0LL;
        *(_BYTE *)(a1 + 48) = 0;
        *(_WORD *)(a1 + 8) = 4;
        `wil::resume_foreground<winrt::Windows::System::DispatcherQueue>'::`2'::awaitable::await_suspend(a1 + 24, a1);
        break;
      case 4:
        `wil::resume_foreground<winrt::Windows::System::DispatcherQueue>'::`2'::awaitable::await_resume(a1 + 24);
        winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 16), (struct IUnknown *)(a1 + 56));
        if ( *(_QWORD *)(a1 + 56) )
        {
          v6 = (float)*(int *)(a1 + 157);
          v7 = (float)*(int *)(a1 + 153);
          *(float *)(a1 + 64) = v7;
          *(float *)(a1 + 68) = v6;
          v8 = *(_QWORD *)(a1 + 145);
          v9 = *SnapFlyoutHost::GetVisibleSnapBar(v8, (__int64 *)(a1 + 72));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 72));
          if ( v9 )
          {
            SnapFlyoutHost::ShowSnapBarOnMonitor(v8, *(_QWORD *)(a1 + 64));
            *(float *)(a1 + 80) = v7;
            *(float *)(a1 + 84) = v6;
            WindowDragInputProvider::HitTestControl(*(_QWORD *)(v8 + 112), *(_QWORD *)(a1 + 80));
          }
          else
          {
            *(float *)(v8 + 136) = v7;
            *(float *)(v8 + 140) = v6;
          }
        }
        winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 56));
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
        goto LABEL_16;
      case 5:
        v5 = (__int64 *)(a1 + 16);
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v5);
LABEL_16:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0xB0);
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
