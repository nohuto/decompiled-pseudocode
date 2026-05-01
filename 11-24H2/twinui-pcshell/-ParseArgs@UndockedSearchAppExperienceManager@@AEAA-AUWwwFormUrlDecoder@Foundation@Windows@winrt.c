/*
 * XREFs of ?ParseArgs@UndockedSearchAppExperienceManager@@AEAA?AUWwwFormUrlDecoder@Foundation@Windows@winrt@@AEBUhstring@5@@Z @ 0x180148D4C
 * Callers:
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180246C70 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x1800546F0 (--0hstring@winrt@@QEAA@PEBGI@Z.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180055CEC (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x180148E60 (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 *     ??$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriRuntimeClassFactory@234@@impl@winrt@@QEAA?A_PAEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@Z @ 0x180149024 (--$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 *     ?QueryParsed@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802A813C (-QueryParsed@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall UndockedSearchAppExperienceManager::ParseArgs(__int64 *a1, __int64 a2, winrt::hstring *a3)
{
  const unsigned __int16 *v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r9
  __int64 v7; // rdx
  winrt::hstring *v8; // rax
  __int64 v9; // rcx
  __int64 v11[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF
  volatile signed __int32 *v14; // [rsp+80h] [rbp+28h] BYREF
  volatile signed __int32 *v15; // [rsp+88h] [rbp+30h] BYREF

  v13 = a2;
  v12 = a1;
  v4 = winrt::hstring::c_str(a3);
  if ( v5 )
  {
    v7 = v6 ? *(_QWORD *)(v6 + 16) : 0LL;
    if ( *(_WORD *)(v7 + 2LL * (v5 - 1)) == 47 )
      --v5;
  }
  v8 = winrt::hstring::hstring((winrt::hstring *)&v15, v4, v5);
  v11[0] = *(_QWORD *)winrt::operator+(&v14, L"ms-search://search?", v8);
  v12 = v11;
  _InterlockedIncrement64(&qword_1808C8E28);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory> )
  {
    winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>,
      &v13,
      v11);
    _InterlockedDecrement64(&qword_1808C8E28);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808C8E28);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>::call<_lambda_0a61d549bec6c444b35123f4c9509ca7_ &>(
      v9,
      &v13,
      &v12);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
  winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::QueryParsed(
    &v13,
    a2);
  if ( v13 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
  return a2;
}
