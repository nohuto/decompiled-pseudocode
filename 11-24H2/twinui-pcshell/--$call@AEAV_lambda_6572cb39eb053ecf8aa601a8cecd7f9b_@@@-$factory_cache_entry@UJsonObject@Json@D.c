/*
 * XREFs of ??$call@AEAV_lambda_6572cb39eb053ecf8aa601a8cecd7f9b_@@@?$factory_cache_entry@UJsonObject@Json@Data@Windows@winrt@@UIJsonObjectStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6572cb39eb053ecf8aa601a8cecd7f9b_@@@Z @ 0x1802A54C4
 * Callers:
 *     ?DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1800C4C3C (-DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180055CEC (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ??R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@Z @ 0x180057864 (--R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@We.c)
 *     ??$get_activation_factory@UIJsonObjectStatics@Json@Data@Windows@winrt@@@winrt@@YA?AUIJsonObjectStatics@Json@Data@Windows@0@AEBUhstring@param@0@@Z @ 0x1802A560C (--$get_activation_factory@UIJsonObjectStatics@Json@Data@Windows@winrt@@@winrt@@YA-AUIJsonObjectS.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DB14D (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Data::Json::IJsonObjectStatics>::call<_lambda_6572cb39eb053ecf8aa601a8cecd7f9b_ &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 **a3)
{
  __int64 *v5; // rbx
  __int64 v7[2]; // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v8; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v9[4]; // [rsp+40h] [rbp-20h] BYREF
  const wchar_t *v10; // [rsp+50h] [rbp-10h]
  __int64 *v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+98h] [rbp+38h] BYREF

  v11 = a1;
  if ( aWindowsDataJso[28] )
    abort();
  v9[0] = 1;
  v9[1] = 28;
  v10 = L"Windows.Data.Json.JsonObject";
  v8 = v9;
  winrt::get_activation_factory<winrt::Windows::Data::Json::IJsonObjectStatics>(&v11, &v8);
  v5 = v11;
  if ( v11
    && (v12 = 0LL,
        (*(void (__fastcall **)(__int64 *, __int64 *, __int64 *))*v11)(
          v11,
          &winrt::impl::guid_v<winrt::impl::IAgileObject>,
          &v12),
        (v7[0] = v12) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v7);
    v7[1] = (__int64)&qword_1808CA188;
    _InterlockedIncrement64(&qword_1808CA188);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Data::Json::IJsonObjectStatics>,
            (signed __int64)v11,
            0LL) )
    {
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808CA190);
    }
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(
      a3,
      a2,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Data::Json::IJsonObjectStatics>);
    _InterlockedDecrement64(&qword_1808CA188);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  }
  else
  {
    winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
      &v11,
      a2,
      *a3);
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
  }
  return a2;
}
