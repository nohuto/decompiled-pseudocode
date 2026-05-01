/*
 * XREFs of TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x180595230
 * Callers:
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_InitCoro$2 @ 0x1805951C4 (TouchEdgeGripperHost--DismissGripperWindowAsync$_InitCoro$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?WatchCurrentThread@TouchEdgeGestureTelemetry@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1800D1428 (-WatchCurrentThread@TouchEdgeGestureTelemetry@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801BCA28 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801C524C (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1802135EC (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18023B6DC (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x18029321C (--1-$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ.c)
 *     ??4?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1802BCC70 (--4-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@win.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1802CE3EC (--0bad_alloc@std@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x18032D430 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ @ 0x180335898 (-await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ.c)
 *     ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ @ 0x1803359BC (-await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180469F58 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@imp.c)
 *     ?DismissGripperWindow@TouchEdgeGestureTelemetry@@SAXXZ @ 0x180595198 (-DismissGripperWindow@TouchEdgeGestureTelemetry@@SAXXZ.c)
 *     ?NotifyGripperDismissedIfNecessaryAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180595D08 (-NotifyGripperDismissedIfNecessaryAsync@TouchEdgeGripperHost@@AEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ?await_suspend@awaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180596590 (-await_suspend@awaitable@-1--resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4.c)
 *     ?Dismiss@TouchEdgeGripperWindow@@QEAAX_N@Z @ 0x180599538 (-Dismiss@TouchEdgeGripperWindow@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall TouchEdgeGripperHost::DismissGripperWindowAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rcx
  __int64 weak_ref; // rax
  int v3; // eax
  __int64 v4; // rcx
  void *v5; // r8
  RTL_SRWLOCK *v6; // rdi
  PVOID Ptr; // rdi
  __int64 v8; // rcx
  __int64 v9; // r13
  TouchEdgeGripperWindow *v10; // rcx
  __int64 v11; // r8
  _BYTE pExceptionObject[192]; // [rsp+38h] [rbp-C0h] BYREF
  char v14; // [rsp+108h] [rbp+10h]

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_31;
      case 2:
        *(_DWORD *)(a1 + 236) = 0;
        TouchEdgeGestureTelemetry::DismissGripperWindow(a1);
        v1 = *(_QWORD *)(a1 + 289);
        if ( !*(_BYTE *)(v1 + 24) )
          goto LABEL_31;
        weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref((volatile signed __int64 *)v1);
        if ( !weak_ref )
        {
          std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
          throw (std::bad_alloc *)pExceptionObject;
        }
        *(_QWORD *)(a1 + 240) = weak_ref;
        *(_QWORD *)(a1 + 16) = 0LL;
        *(_DWORD *)(a1 + 236) = 2;
        *(_DWORD *)(a1 + 248) = 0;
        *(_QWORD *)(a1 + 256) = 0LL;
        *(_QWORD *)(a1 + 264) = 0LL;
        v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)weak_ref + 24LL))(weak_ref);
        winrt::check_hresult((int *)(a1 + 272), v3, a1 + 248);
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 240));
        *(_BYTE *)(a1 + 24) = 0;
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v4, (void (*)(void *, void *))a1, v5);
        return;
      case 4:
        winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 16), (struct IUnknown *)(a1 + 32));
        if ( !*(_QWORD *)(a1 + 32) )
          goto LABEL_29;
        v6 = *(RTL_SRWLOCK **)(a1 + 289);
        Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)(a1 + 40), v6 + 29);
        Ptr = v6[4].Ptr;
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 40));
        *(_QWORD *)(a1 + 48) = 0LL;
        *(_QWORD *)(a1 + 56) = 0LL;
        *(_QWORD *)(a1 + 64) = 0LL;
        *(_QWORD *)(a1 + 72) = Ptr;
        *(_DWORD *)(a1 + 80) = 0;
        *(_QWORD *)(a1 + 88) = 0LL;
        *(_DWORD *)(a1 + 96) = 0;
        if ( !winrt::impl::signal_awaiter::await_ready((HANDLE *)(a1 + 48)) )
        {
          *(_WORD *)(a1 + 8) = 6;
          winrt::impl::signal_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type>(
            (winrt::impl::signal_awaiter *)(a1 + 48),
            a1);
          return;
        }
LABEL_16:
        winrt::impl::signal_awaiter::await_resume((winrt::impl::signal_awaiter *)(a1 + 48));
        winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 48));
        v8 = *(_QWORD *)(a1 + 289);
        if ( !*(_BYTE *)(v8 + 24) )
          goto LABEL_29;
        *(_QWORD *)(a1 + 104) = v8 + 72;
        *(_DWORD *)(a1 + 112) = 0;
        *(_BYTE *)(a1 + 116) = 0;
        *(_WORD *)(a1 + 8) = 8;
        if ( !(unsigned __int8)`winrt::resume_foreground'::`2'::awaitable::await_suspend(a1 + 104, a1) )
        {
LABEL_22:
          TouchEdgeGestureTelemetry::WatchCurrentThread(
            (wil::ActivityThreadWatcher *)(a1 + 128),
            "TouchEdgeGripperHost::DismissGripperWindowAsync");
          winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 16), (struct IUnknown *)(a1 + 208));
          if ( *(_QWORD *)(a1 + 208) )
          {
            v9 = *(_QWORD *)(a1 + 289);
            wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 216), (RTL_SRWLOCK *)(v9 + 232));
            v10 = *(TouchEdgeGripperWindow **)(v9 + 56);
            if ( v10 )
            {
              v14 = *((_BYTE *)v10 + 160);
              TouchEdgeGripperWindow::Dismiss(v10, *(_BYTE *)(a1 + 297));
              *(_QWORD *)(a1 + 224) = 0LL;
              winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::operator=(
                (_QWORD **)(v9 + 56),
                (_QWORD *)(a1 + 224));
              if ( *(_QWORD *)(a1 + 224) )
                winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)(a1 + 224));
              LOBYTE(v11) = v14;
              TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync(v9, a1 + 232, v11);
            }
            CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 216));
          }
          winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD **)(a1 + 208));
          wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 128));
LABEL_29:
          winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD **)(a1 + 32));
          if ( *(_QWORD *)(a1 + 16) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
LABEL_31:
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)a1, (const struct std::nothrow_t *)0x140);
        }
        break;
      case 5:
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
        goto LABEL_31;
      case 6:
        goto LABEL_16;
      case 7:
        winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 48));
        winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD **)(a1 + 32));
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
        goto LABEL_31;
      case 8:
        goto LABEL_22;
      case 9:
        winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD **)(a1 + 32));
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
        goto LABEL_31;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
