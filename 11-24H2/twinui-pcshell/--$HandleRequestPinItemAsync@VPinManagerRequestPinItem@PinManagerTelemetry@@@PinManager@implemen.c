/*
 * XREFs of ??$HandleRequestPinItemAsync@VPinManagerRequestPinItem@PinManagerTelemetry@@@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@45@Uhstring@5@0USecondaryTile@StartScreen@UI@45@PEFBU_ITEMIDLIST@@_N3W4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1805DFC70
 * Callers:
 *     ?RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@@Z @ 0x1805E87F8 (-RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$IAsyncOper.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x180289ABC (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A86C (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_InitCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805DEFC8 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_InitCoro.c)
 *     ??1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ @ 0x1805E3944 (--1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync<PinManagerTelemetry::PinManagerRequestPinItem>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        PinManagerTelemetry::PinManagerRequestPinItem *a10,
        __int64 *a11,
        __int64 a12)
{
  void *v15; // rax
  char v17[8]; // [rsp+70h] [rbp-90h] BYREF
  char v18[8]; // [rsp+78h] [rbp-88h] BYREF
  int v19; // [rsp+80h] [rbp-80h] BYREF
  int v20; // [rsp+88h] [rbp-78h] BYREF
  __int64 v21; // [rsp+90h] [rbp-70h]
  __int64 *v22; // [rsp+6F8h] [rbp+5F8h]
  __int64 *v23; // [rsp+700h] [rbp+600h]
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v24; // [rsp+708h] [rbp+608h]
  PinManagerTelemetry::PinManagerRequestPinItem *v25; // [rsp+710h] [rbp+610h]
  __int64 *v26; // [rsp+718h] [rbp+618h]
  __int64 v27; // [rsp+720h] [rbp+620h]

  v21 = a1;
  v22 = a3;
  v23 = a4;
  v24 = a5;
  v25 = a10;
  v26 = a11;
  v27 = a12;
  v19 = 28;
  v17[0] = 0;
  v18[0] = 1;
  v15 = operator new(0x660uLL);
  v20 = 0;
  winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__InitCoro_2_PinManagerTelemetry::PinManagerRequestPinItem_(
    &v20,
    (__int64)v15 + 112,
    a2,
    a3,
    a4,
    (__int64 *)a5,
    0LL,
    v18,
    v17,
    &v19,
    (__int64)a10,
    a11,
    a12,
    v21);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a3);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a4);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a5);
  PinManagerTelemetry::PinManagerRequestPinItem::~PinManagerRequestPinItem(a10);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>((void **)a11);
  tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(a12);
  return a2;
}
