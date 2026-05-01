/*
 * XREFs of ??4?$event_revoker@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@$MP8type@?$abi@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1803489BC
 * Callers:
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180356230 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18004F72C (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1?$event_revoker@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@$MP8type@?$abi@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@QEAA@XZ @ 0x180347BA0 (--1-$event_revoker@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@$MP8type@-$abi@U.c)
 */

__int64 *__fastcall __4__event_revoker_UIGameBarWindowControl_GamingOverlay_Internal_Windows_winrt___MP8type___abi_UIGameBarWindowControl_GamingOverlay_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  v3 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  v9 = v3;
  v8 = v4;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(&v7, a1);
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, &v9);
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  v5 = a1[1];
  a1[1] = v8;
  v8 = v5;
  __1__event_revoker_UIGameBarWindowControl_GamingOverlay_Internal_Windows_winrt___MP8type___abi_UIGameBarWindowControl_GamingOverlay_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt__QEAA_XZ(&v7);
  return a1;
}
