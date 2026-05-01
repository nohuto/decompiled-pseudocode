/*
 * XREFs of ??0WindowDragInputProvider@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z @ 0x1802734C0
 * Callers:
 *     ??0SnapFlyoutHost@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z @ 0x18029E018 (--0SnapFlyoutHost@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_ @ 0x1800D3330 (_lambda_00799cc444f9312ab8cc556666836ecb_--__lambda_00799cc444f9312ab8cc556666836ecb_.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18023B6DC (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     ??1?$factory_event_revoker@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEA@AA@impl@winrt@@QEAA@XZ @ 0x1802A9BF8 (--1-$factory_event_revoker@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Window.c)
 *     ?ResetNotificationBoundary@DesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@SA?AU?$factory_event_revoker@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEA@AA@impl@6@Uauto_revoke_t@6@AEBUResetNotificationBoundaryHandler@23456@@Z @ 0x1802B0ACC (-ResetNotificationBoundary@DesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1802CE3EC (--0bad_alloc@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
WindowDragInputProvider *__fastcall WindowDragInputProvider::WindowDragInputProvider(
        WindowDragInputProvider *this,
        struct IPrivilegedArrangementOperations *a2)
{
  __int64 weak_ref; // rax
  unsigned int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-39h] BYREF
  __int64 v13; // [rsp+28h] [rbp-31h] BYREF
  __int64 v14; // [rsp+30h] [rbp-29h] BYREF
  __int64 v15; // [rsp+38h] [rbp-21h] BYREF
  __int64 v16; // [rsp+40h] [rbp-19h]
  _BYTE v17[16]; // [rsp+48h] [rbp-11h] BYREF
  int v18; // [rsp+58h] [rbp-1h] BYREF
  __int128 v19; // [rsp+60h] [rbp+7h]
  _BYTE pExceptionObject[64]; // [rsp+70h] [rbp+17h] BYREF
  _DWORD *v21; // [rsp+C8h] [rbp+6Fh]
  __int64 v22; // [rsp+D0h] [rbp+77h] BYREF
  _DWORD *v23; // [rsp+D8h] [rbp+7Fh] BYREF

  *((_QWORD *)this + 2) = &winrt::impl::produce_base<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable,void>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &WindowDragInputProvider::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IPrivilegedArrangementOperations *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *(_OWORD *)((char *)this + 88) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref((volatile signed __int64 *)this);
  if ( !weak_ref )
  {
    std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  v14 = weak_ref;
  v13 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, &v13);
  winrt::check_hresult(&v23, v4, &v18);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
  v5 = v13;
  v13 = 0LL;
  v12 = v5;
  v21 = operator new(0x18uLL);
  v21[2] = 1;
  v6 = v12;
  v12 = 0LL;
  *((_QWORD *)v21 + 2) = v6;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v21 = off_18071F188;
  v23 = v21;
  lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_(&v12);
  v8 = (__int64 *)winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager::ResetNotificationBoundary(
                    v17,
                    v7,
                    &v23);
  v9 = *v8;
  *v8 = 0LL;
  v16 = v8[1];
  v15 = 0LL;
  v22 = v9;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&v15, (__int64 *)this + 11);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 11, &v22);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
  v10 = v16;
  v16 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = v10;
  __1__factory_event_revoker_UIDesktopSnapLayoutManagerStatics_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UIDesktopSnapLayoutManagerStatics_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BEA_AA_impl_winrt__QEAA_XZ((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  __1__factory_event_revoker_UIDesktopSnapLayoutManagerStatics_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UIDesktopSnapLayoutManagerStatics_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BEA_AA_impl_winrt__QEAA_XZ((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v17);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v23);
  if ( v13 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
  return this;
}
