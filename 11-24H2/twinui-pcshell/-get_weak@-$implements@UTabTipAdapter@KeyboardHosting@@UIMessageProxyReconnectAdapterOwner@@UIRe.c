/*
 * XREFs of ?get_weak@?$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@winrt@@QEAA?AU?$weak_ref@UTabTipAdapter@KeyboardHosting@@@2@XZ @ 0x1804834FC
 * Callers:
 *     ?OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@45678@@Z @ 0x180254EE0 (-OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardMa.c)
 *     ?OnDpiChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18025500C (-OnDpiChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?OnDisplayChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18047D758 (-OnDisplayChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18023B6DC (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1802CE3EC (--0bad_alloc@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::implements<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::get_weak(
        __int64 a1,
        _QWORD *a2)
{
  __int64 weak_ref; // rax
  int v4; // eax
  int v6; // [rsp+28h] [rbp-40h] BYREF
  __int128 v7; // [rsp+30h] [rbp-38h]
  _BYTE pExceptionObject[40]; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+78h] [rbp+10h]
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF

  v10 = a2;
  weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref((volatile signed __int64 *)(a1 + 16));
  if ( !weak_ref )
  {
    std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  v11 = weak_ref;
  *a2 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, a2);
  winrt::check_hresult(&v9, v4, (__int64)&v6);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
  return a2;
}
