/*
 * XREFs of ??$call@P6A?AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics3@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@?$factory_cache_entry@UKnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@UIKnownOnScreenInputUriSchemesStatics3@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUhstring@2@AEBUIKnownOnScreenInputUriSchemesStatics3@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@Z @ 0x18046A080
 * Callers:
 *     ?SmartActions@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x1802BE73C (-SmartActions@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@X.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CAB80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DB14D (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIKnownOnScreenInputUriSchemesStatics3@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@winrt@@YA?AUIKnownOnScreenInputUriSchemesStatics3@OnScreenInput@ApplicationModel@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18046A3E4 (--$get_activation_factory@UIKnownOnScreenInputUriSchemesStatics3@OnScreenInput@ApplicationModel@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics3>::call<winrt::hstring (*)(winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics3 const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v6[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v7[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+48h] [rbp-28h] BYREF
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+10h] BYREF
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF

  v9 = a1;
  v7[0] = (__int64)L"WindowsUdk.ApplicationModel.OnScreenInput.KnownOnScreenInputUriSchemes";
  v7[1] = 70LL;
  winrt::param::hstring::hstring((__int64)v8, v7);
  winrt::get_activation_factory<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics3>(
    &v9,
    v8);
  if ( v9 && (v10 = 0LL, (**v9)(v9, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10), (v6[0] = v10) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_1808CBBB8;
    _InterlockedIncrement64(&qword_1808CBBB8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics3>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808CBBC0);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics3>);
    _InterlockedDecrement64(&qword_1808CBBB8);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v9);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a2;
}
