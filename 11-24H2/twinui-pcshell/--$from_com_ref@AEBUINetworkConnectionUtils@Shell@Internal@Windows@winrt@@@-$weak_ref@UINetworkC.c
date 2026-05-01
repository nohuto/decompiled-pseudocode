/*
 * XREFs of ??$from_com_ref@AEBUINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@?$weak_ref@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@winrt@@AEAAXAEBUINetworkConnectionUtils@Shell@Internal@Windows@1@@Z @ 0x1803453F8
 * Callers:
 *     ?Added@?$consume_Windows_Devices_Enumeration_IDeviceWatcher@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDeviceWatcher@Enumeration@Devices@Windows@winrt@@UDeviceInformation@2345@@Foundation@Windows@3@@Z @ 0x18034BB28 (-Added@-$consume_Windows_Devices_Enumeration_IDeviceWatcher@UIDeviceWatcher@Enumeration@Devices@.c)
 *     ?StateChanged@?$consume_Windows_Internal_GamingOverlay_IGameBarWindowControl@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@3@@Z @ 0x18035B7C4 (-StateChanged@-$consume_Windows_Internal_GamingOverlay_IGameBarWindowControl@UIGameBarWindowCont.c)
 *     ?DismissAnimationCompleted@?$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@6@@Foundation@Windows@3@@Z @ 0x18038FB00 (-DismissAnimationCompleted@-$consume_WindowsUdk_UI_StartScreen_Implementation_IDock_ea_18038FB00.c)
 *     ?Dismissed@?$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@6@@Foundation@Windows@3@@Z @ 0x18038FC5C (-Dismissed@-$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartControlle_ea_18038FC5C.c)
 *     _lambda_aa297103944b40500ac49b04ee807ad8_::operator() @ 0x180619148 (_lambda_aa297103944b40500ac49b04ee807ad8_--operator().c)
 *     ?ProcessDestroyed@?$consume_Windows_Internal_Shell_IProcessTracker@UIProcessTracker@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$EventHandler@I@Foundation@Windows@3@@Z @ 0x18065BCC0 (-ProcessDestroyed@-$consume_Windows_Internal_Shell_IProcessTracker@UIProcessTracker@Shell@Intern.c)
 *     ?NetworkStateChanged@?$consume_Windows_Internal_Shell_INetworkConnectionUtils@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x180669394 (-NetworkStateChanged@-$consume_Windows_Internal_Shell_INetworkConnectionUtils@UINetworkConnectio.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::weak_ref<winrt::Windows::Internal::Shell::INetworkConnectionUtils>::from_com_ref<winrt::Windows::Internal::Shell::INetworkConnectionUtils const &>(
        __int64 *a1,
        void (__fastcall ****a2)(_QWORD, const wchar_t *, __int64 *))
{
  void (__fastcall ***v3)(_QWORD, const wchar_t *, __int64 *); // rcx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rsi
  int v6; // eax
  int v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+28h] [rbp-40h] BYREF
  int v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+38h] [rbp-30h]
  __int64 v11; // [rsp+48h] [rbp-20h] BYREF

  v3 = *a2;
  if ( *a2 )
  {
    v9 = 0;
    v10 = 0LL;
    v11 = 0LL;
    (**v3)(v3, L"8", &v11);
    v4 = v11;
    v8 = v11;
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL);
    if ( *a1 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
    v6 = v5(v4, a1);
    winrt::check_hresult(&v7, v6, (__int64)&v9);
    if ( v4 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
  }
}
