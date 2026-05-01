/*
 * XREFs of ??$call@AEAV_lambda_26a4133d97793dfa5f7c7dd7c88d483b_@@@?$factory_cache_entry@UJsonArray@Json@Data@Windows@winrt@@UIJsonArrayStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_26a4133d97793dfa5f7c7dd7c88d483b_@@@Z @ 0x18068A4F8
 * Callers:
 *     ?TryParse@JsonArray@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@AEAU12345@@Z @ 0x180696A44 (-TryParse@JsonArray@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@AEAU12345@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CAB80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801F6FB0 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DB14D (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?TryParse@?$consume_Windows_Data_Json_IJsonArrayStatics@UIJsonArrayStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEAUJsonArray@Json@Data@Windows@3@@Z @ 0x180696998 (-TryParse@-$consume_Windows_Data_Json_IJsonArrayStatics@UIJsonArrayStatics@Json@Data@Windows@win.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonArrayStatics>::call<_lambda_26a4133d97793dfa5f7c7dd7c88d483b_ &>(
        __int64 a1,
        _QWORD *a2)
{
  char v3; // bl
  int v5; // [rsp+20h] [rbp-39h] BYREF
  void (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // [rsp+28h] [rbp-31h] BYREF
  __int64 v7; // [rsp+30h] [rbp-29h] BYREF
  __int64 v8; // [rsp+38h] [rbp-21h] BYREF
  int v9; // [rsp+40h] [rbp-19h] BYREF
  __int64 v10[3]; // [rsp+48h] [rbp-11h] BYREF
  int v11; // [rsp+60h] [rbp+7h] BYREF
  __int128 v12; // [rsp+68h] [rbp+Fh]
  __int64 v13[4]; // [rsp+78h] [rbp+1Fh] BYREF
  void (__fastcall ***v14)(_QWORD, __int64 *, __int64 *); // [rsp+98h] [rbp+3Fh] BYREF

  v10[0] = (__int64)L"Windows.Data.Json.JsonArray";
  v10[1] = 27LL;
  winrt::param::hstring::hstring((__int64)v13, v10);
  v14 = 0LL;
  v11 = 0;
  v12 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v5,
    v13,
    (__int64)&winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonArrayStatics>,
    (__int64)&v14);
  winrt::check_hresult(&v9, v5, (__int64)&v11);
  v6 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v14;
  if ( v14 && (v7 = 0LL, (**v14)(v14, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v7), (v8 = v7) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
    v10[2] = (__int64)&qword_1808CA1C8;
    _InterlockedIncrement64(&qword_1808CA1C8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonArrayStatics>,
            (signed __int64)v14,
            0LL) )
    {
      v6 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808CA1D0);
    }
    v3 = winrt::impl::consume_Windows_Data_Json_IJsonArrayStatics<winrt::Windows::Data::Json::IJsonArrayStatics>::TryParse(
           &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonArrayStatics>,
           *a2,
           a2[1]);
    _InterlockedDecrement64(&qword_1808CA1C8);
  }
  else
  {
    v3 = winrt::impl::consume_Windows_Data_Json_IJsonArrayStatics<winrt::Windows::Data::Json::IJsonArrayStatics>::TryParse(
           &v6,
           *a2,
           a2[1]);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  return v3;
}
