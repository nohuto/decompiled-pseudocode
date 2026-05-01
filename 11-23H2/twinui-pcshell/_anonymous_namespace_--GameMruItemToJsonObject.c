/*
 * XREFs of _anonymous_namespace_::GameMruItemToJsonObject @ 0x1803E34B8
 * Callers:
 *     ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x1803E3F84 (-SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800B25FC (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$ActivateInstance@UJsonObject@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUJsonObject@Json@Data@23@XZ @ 0x1803E1C74 (--$ActivateInstance@UJsonObject@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@.c)
 *     ??$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@?$factory_cache_entry@UJsonValue@Json@Data@Windows@winrt@@UIJsonValueStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@Z @ 0x1803E26AC (--$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@-$factory_cache_entry@UJsonValue@Json@Da.c)
 *     ??$call@P6A?AUJsonObject@Json@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UJsonObject@Json@Data@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUJsonObject@Json@Data@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x1803E2934 (--$call@P6A-AUJsonObject@Json@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@-$fact.c)
 *     ?CreateStringValue@?$consume_Windows_Data_Json_IJsonValueStatics@UIJsonValueStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1803E33E0 (-CreateStringValue@-$consume_Windows_Data_Json_IJsonValueStatics@UIJsonValueStatics@Json@Data@Wi.c)
 *     ?SetNamedValue@?$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIJsonValue@Json@Data@Windows@3@@Z @ 0x1803E43D4 (-SetNamedValue@-$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@im.c)
 *     _anonymous_namespace_::TimePointToTimeString @ 0x1803E44B0 (_anonymous_namespace_--TimePointToTimeString.c)
 */

// Hidden C++ exception states: #wind=12
_QWORD *__fastcall anonymous_namespace_::GameMruItemToJsonObject(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2)
{
  const unsigned __int16 *v4; // rax
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // rcx
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // rcx
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // rcx
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // rcx
  const char *v9; // r9
  void (__fastcall **v10)(_QWORD, __int64 *, __int64 *); // rcx
  std::_Ref_count_base *v11; // rcx
  _QWORD *result; // rax
  std::_Ref_count_base *v13; // rcx
  void (__fastcall **v14)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v15; // [rsp+28h] [rbp-1C0h] BYREF
  __int64 v16; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-1B0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-1A8h] BYREF
  _QWORD *v19; // [rsp+48h] [rbp-1A0h]
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v20)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+58h] [rbp-190h] BYREF
  _QWORD *v21; // [rsp+60h] [rbp-188h] BYREF
  _QWORD *v22; // [rsp+68h] [rbp-180h] BYREF
  _QWORD *v23; // [rsp+70h] [rbp-178h] BYREF
  _QWORD *v24; // [rsp+78h] [rbp-170h] BYREF
  _QWORD *v25; // [rsp+80h] [rbp-168h]
  __int64 *v26; // [rsp+88h] [rbp-160h]
  __int64 *v27; // [rsp+90h] [rbp-158h]
  __int64 *v28; // [rsp+98h] [rbp-150h]
  __int64 *v29; // [rsp+A0h] [rbp-148h]
  __int64 *v30; // [rsp+A8h] [rbp-140h]
  _QWORD v31[4]; // [rsp+B0h] [rbp-138h] BYREF
  _QWORD v32[4]; // [rsp+D0h] [rbp-118h] BYREF
  _QWORD v33[4]; // [rsp+F0h] [rbp-F8h] BYREF
  _QWORD v34[4]; // [rsp+110h] [rbp-D8h] BYREF
  _BYTE v35[32]; // [rsp+130h] [rbp-B8h] BYREF
  _BYTE v36[32]; // [rsp+150h] [rbp-98h] BYREF
  _BYTE v37[32]; // [rsp+170h] [rbp-78h] BYREF
  _BYTE v38[32]; // [rsp+190h] [rbp-58h] BYREF
  _BYTE v39[32]; // [rsp+1B0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  try
  {
    v19 = a1;
    v25 = a2;
    v26 = &qword_180990BD8;
    _InterlockedIncrement64(&qword_180990BD8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Foundation::IActivationFactory> )
    {
      winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Data::Json::JsonObject>(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Foundation::IActivationFactory>,
        &v14);
      _InterlockedDecrement64(&qword_180990BD8);
    }
    else
    {
      _InterlockedDecrement64(&qword_180990BD8);
      v20 = _lambda_63b666b759e740627ed77e2c1fafff5a_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Data::Json::JsonObject (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
        a1,
        (__int64)&v14,
        (void (__fastcall **)(__int64, __int64 *))&v20);
    }
    v4 = (const unsigned __int16 *)anonymous_namespace_::TimePointToTimeString(v39, *a2);
    winrt::param::hstring::hstring((winrt::param::hstring *)v31, v4);
    v21 = v31;
    v27 = &qword_18098DEE8;
    _InterlockedIncrement64(&qword_18098DEE8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics> )
    {
      winrt::impl::consume_Windows_Data_Json_IJsonValueStatics<winrt::Windows::Data::Json::IJsonValueStatics>::CreateStringValue(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>,
        &v15,
        v31);
      _InterlockedDecrement64(&qword_18098DEE8);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098DEE8);
      winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>::call<_lambda_ca425077811c26dd994b3d0531fe1de0_ &>(
        v5,
        (__int64)&v15,
        &v21);
    }
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v35, L"LastLaunched", 12);
    winrt::impl::consume_Windows_Data_Json_IJsonObject<winrt::Windows::Data::Json::IJsonObject>::SetNamedValue(
      &v14,
      v35,
      &v15);
    if ( v15 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
    std::wstring::_Tidy_deallocate((__int64)v39);
    winrt::param::hstring::hstring((winrt::param::hstring *)v32, (const unsigned __int16 *)(*a2 + 8LL));
    v22 = v32;
    v28 = &qword_18098DEE8;
    _InterlockedIncrement64(&qword_18098DEE8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics> )
    {
      winrt::impl::consume_Windows_Data_Json_IJsonValueStatics<winrt::Windows::Data::Json::IJsonValueStatics>::CreateStringValue(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>,
        &v16,
        v32);
      _InterlockedDecrement64(&qword_18098DEE8);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098DEE8);
      winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>::call<_lambda_ca425077811c26dd994b3d0531fe1de0_ &>(
        v6,
        (__int64)&v16,
        &v22);
    }
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v36, L"Title", 5);
    winrt::impl::consume_Windows_Data_Json_IJsonObject<winrt::Windows::Data::Json::IJsonObject>::SetNamedValue(
      &v14,
      v36,
      &v16);
    if ( v16 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
    winrt::param::hstring::hstring((winrt::param::hstring *)v33, (const unsigned __int16 *)(*a2 + 40LL));
    v23 = v33;
    v29 = &qword_18098DEE8;
    _InterlockedIncrement64(&qword_18098DEE8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics> )
    {
      winrt::impl::consume_Windows_Data_Json_IJsonValueStatics<winrt::Windows::Data::Json::IJsonValueStatics>::CreateStringValue(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>,
        &v17,
        v33);
      _InterlockedDecrement64(&qword_18098DEE8);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098DEE8);
      winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>::call<_lambda_ca425077811c26dd994b3d0531fe1de0_ &>(
        v7,
        (__int64)&v17,
        &v23);
    }
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v37, L"Aumid", 5);
    winrt::impl::consume_Windows_Data_Json_IJsonObject<winrt::Windows::Data::Json::IJsonObject>::SetNamedValue(
      &v14,
      v37,
      &v17);
    if ( v17 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
    winrt::param::hstring::hstring((winrt::param::hstring *)v34, (const unsigned __int16 *)(*a2 + 72LL));
    v24 = v34;
    v30 = &qword_18098DEE8;
    _InterlockedIncrement64(&qword_18098DEE8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics> )
    {
      winrt::impl::consume_Windows_Data_Json_IJsonValueStatics<winrt::Windows::Data::Json::IJsonValueStatics>::CreateStringValue(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>,
        &v18,
        v34);
      _InterlockedDecrement64(&qword_18098DEE8);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098DEE8);
      winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>::call<_lambda_ca425077811c26dd994b3d0531fe1de0_ &>(
        v8,
        (__int64)&v18,
        &v24);
    }
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v38, L"ExePath", 7);
    winrt::impl::consume_Windows_Data_Json_IJsonObject<winrt::Windows::Data::Json::IJsonObject>::SetNamedValue(
      &v14,
      v38,
      &v18);
    if ( v18 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
    v10 = v14;
    v14 = 0LL;
    *a1 = v10;
    v11 = (std::_Ref_count_base *)a2[1];
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    result = a1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x5E,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
      v9);
    *v19 = 0LL;
    v13 = (std::_Ref_count_base *)v25[1];
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    return v19;
  }
  return result;
}
