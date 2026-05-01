/*
 * XREFs of ?DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1800C4C3C
 * Callers:
 *     ??0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@E@Z @ 0x1800BD948 (--0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V-$basic_string@GU-$char_trait.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180050094 (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180055CEC (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ?GetNamedArray@?$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18007C3F4 (-GetNamedArray@-$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@im.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x1800BD578 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@Uhstring@4@@impl@winrt@@QEBA@XZ @ 0x1800BDCC0 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@Uhstring@winrt@@@Fou.c)
 *     _anonymous_namespace_::JsonObjectToGameMruItem @ 0x1800C4F14 (_anonymous_namespace_--JsonObjectToGameMruItem.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UGameMruItem@@@std@@@?$vector@V?$shared_ptr@UGameMruItem@@@std@@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UGameMruItem@@@1@QEAV21@AEBV21@@Z @ 0x1801C190C (--$_Emplace_reallocate@AEBV-$shared_ptr@UGameMruItem@@@std@@@-$vector@V-$shared_ptr@UGameMruItem.c)
 *     ??$call@AEAV_lambda_8bcef120e7c5e2e3c02b5340d469f3bd_@@@?$factory_cache_entry@UFileIO@Storage@Windows@winrt@@UIFileIOStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_8bcef120e7c5e2e3c02b5340d469f3bd_@@@Z @ 0x1801F6D68 (--$call@AEAV_lambda_8bcef120e7c5e2e3c02b5340d469f3bd_@@@-$factory_cache_entry@UFileIO@Storage@Wi.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@I@Z @ 0x18021AA20 (-GetAt@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJs.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@1@I@Z @ 0x18023C25C (--$wait_for_completed@U-$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180288C5C (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     ?GetJsonStorageFile@JsonGameMruManager@@AEBA?AUStorageFile@Storage@Windows@winrt@@XZ @ 0x1802A1164 (-GetJsonStorageFile@JsonGameMruManager@@AEBA-AUStorageFile@Storage@Windows@winrt@@XZ.c)
 *     ??$call@AEAV_lambda_6572cb39eb053ecf8aa601a8cecd7f9b_@@@?$factory_cache_entry@UJsonObject@Json@Data@Windows@winrt@@UIJsonObjectStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6572cb39eb053ecf8aa601a8cecd7f9b_@@@Z @ 0x1802A54C4 (--$call@AEAV_lambda_6572cb39eb053ecf8aa601a8cecd7f9b_@@@-$factory_cache_entry@UJsonObject@Json@D.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@XZ @ 0x1802BC380 (-Size@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJso.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall JsonGameMruManager::DeserializeFromJsonFile(__int64 a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  unsigned int v5; // eax
  enum AsyncStatus v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // esi
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-C8h] BYREF
  __int64 *v13; // [rsp+28h] [rbp-C0h] BYREF
  __int64 *v14; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-B0h] BYREF
  volatile signed __int32 *v16; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-A0h] BYREF
  std::_Ref_count_base *v18; // [rsp+50h] [rbp-98h]
  __int64 *v19; // [rsp+58h] [rbp-90h] BYREF
  __int64 *v20; // [rsp+60h] [rbp-88h] BYREF
  _DWORD *v21; // [rsp+68h] [rbp-80h] BYREF
  _DWORD v22[4]; // [rsp+70h] [rbp-78h] BYREF
  const wchar_t *v23; // [rsp+80h] [rbp-68h]
  __int64 *v24; // [rsp+88h] [rbp-60h]
  __int64 *v25; // [rsp+90h] [rbp-58h]
  __int64 v26[10]; // [rsp+98h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  __int64 v28; // [rsp+100h] [rbp+18h] BYREF
  __int64 v29; // [rsp+108h] [rbp+20h] BYREF

  JsonGameMruManager::GetJsonStorageFile(a1, &v29);
  try
  {
    result = v29;
    if ( v29 )
    {
      v19 = &v29;
      v24 = &qword_1808CA0A8;
      _InterlockedIncrement64(&qword_1808CA0A8);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics> )
      {
        winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
          (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics>,
          &v28,
          &v29);
        _InterlockedDecrement64(&qword_1808CA0A8);
      }
      else
      {
        _InterlockedDecrement64(&qword_1808CA0A8);
        winrt::impl::factory_cache_entry<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics>::call<_lambda_8bcef120e7c5e2e3c02b5340d469f3bd_ &>(
          v2,
          &v28,
          &v19);
      }
      v5 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status(&v28);
      if ( !v5 )
        v5 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::hstring>>(&v28);
      winrt::impl::check_status_canceled((winrt::impl *)v5, v6);
      winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::hstring>,winrt::hstring>::GetResults(
        &v28,
        &v16);
      if ( v28 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v28);
      if ( v16 )
      {
        v26[0] = (__int64)v16;
        v20 = v26;
        v25 = &qword_1808CA188;
        _InterlockedIncrement64(&qword_1808CA188);
        if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Data::Json::IJsonObjectStatics> )
        {
          winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
            (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Data::Json::IJsonObjectStatics>,
            &v13,
            v26);
          _InterlockedDecrement64(&qword_1808CA188);
        }
        else
        {
          _InterlockedDecrement64(&qword_1808CA188);
          winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Data::Json::IJsonObjectStatics>::call<_lambda_6572cb39eb053ecf8aa601a8cecd7f9b_ &>(
            v7,
            &v13,
            &v20);
        }
        if ( aTitles[6] )
          abort();
        v22[0] = 1;
        v22[1] = 6;
        v23 = L"titles";
        v21 = v22;
        winrt::impl::consume_Windows_Data_Json_IJsonObject<winrt::Windows::Data::Json::IJsonObject>::GetNamedArray(
          &v13,
          &v12,
          (__int64 *)&v21);
        v8 = 0;
        v9 = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::Size(&v12);
        while ( v8 != v9 )
        {
          winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::GetAt(
            &v12,
            &v14,
            v8);
          v10 = winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
                  &v14,
                  &v15);
          anonymous_namespace_::JsonObjectToGameMruItem(&v17, v10);
          if ( v15 )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v15);
          if ( v17 )
          {
            v11 = *(_QWORD **)(a1 + 64);
            if ( v11 == *(_QWORD **)(a1 + 72) )
            {
              std::vector<std::shared_ptr<GameMruItem>>::_Emplace_reallocate<std::shared_ptr<GameMruItem> const &>(
                a1 + 56,
                *(_QWORD *)(a1 + 64),
                &v17);
            }
            else
            {
              std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v11, &v17);
              *(_QWORD *)(a1 + 64) += 16LL;
            }
          }
          if ( v18 )
            std::_Ref_count_base::_Decref(v18);
          if ( v14 )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v14);
          ++v8;
        }
        if ( v12 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v12);
        if ( v13 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v13);
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
      result = v29;
    }
    if ( result )
      result = winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v29);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0xD1,
             (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
             v3);
  }
  return result;
}
