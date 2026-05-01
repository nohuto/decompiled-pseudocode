/*
 * XREFs of ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x1800BDD3C
 * Callers:
 *     ?AddMruItem@JsonGameMruManager@@QEAAXV?$shared_ptr@UGameMruItem@@@std@@@Z @ 0x18031C3C0 (-AddMruItem@JsonGameMruManager@@QEAAXV-$shared_ptr@UGameMruItem@@@std@@@Z.c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052164 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x1800BD578 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     _anonymous_namespace_::GameMruItemToJsonObject @ 0x1800BE01C (_anonymous_namespace_--GameMruItemToJsonObject.c)
 *     ??0JsonObject@Json@Data@Windows@winrt@@QEAA@XZ @ 0x1800BE78C (--0JsonObject@Json@Data@Windows@winrt@@QEAA@XZ.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180288C5C (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     ?GetJsonStorageFile@JsonGameMruManager@@AEBA?AUStorageFile@Storage@Windows@winrt@@XZ @ 0x1802A1164 (-GetJsonStorageFile@JsonGameMruManager@@AEBA-AUStorageFile@Storage@Windows@winrt@@XZ.c)
 *     ?WriteTextAsync@?$consume_Windows_Storage_IFileIOStatics@UIFileIOStatics@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUIStorageFile@Storage@Windows@3@AEBUhstring@param@3@AEBW4UnicodeEncoding@Streams@563@@Z @ 0x1802A39EC (-WriteTextAsync@-$consume_Windows_Storage_IFileIOStatics@UIFileIOStatics@Storage@Windows@winrt@@.c)
 *     ??0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ @ 0x1802A8330 (--0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ.c)
 *     ??$call@AEAV_lambda_ab3e553f5135d66a1c20f494927a541c_@@@?$factory_cache_entry@UFileIO@Storage@Windows@winrt@@UIFileIOStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_ab3e553f5135d66a1c20f494927a541c_@@@Z @ 0x18031BCA0 (--$call@AEAV_lambda_ab3e553f5135d66a1c20f494927a541c_@@@-$factory_cache_entry@UFileIO@Storage@Wi.c)
 *     ??$wait_for_completed@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBUIAsyncAction@Foundation@Windows@1@I@Z @ 0x18031C220 (--$wait_for_completed@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEBUIAsyncActio.c)
 *     ?Append@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@AEBUIJsonValue@Json@Data@Windows@3@@Z @ 0x18031C544 (-Append@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJ.c)
 *     ?Insert@?$consume_Windows_Foundation_Collections_IMap@UJsonObject@Json@Data@Windows@winrt@@Uhstring@5@UIJsonValue@2345@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIJsonValue@Json@Data@Windows@3@@Z @ 0x18031C5E8 (-Insert@-$consume_Windows_Foundation_Collections_IMap@UJsonObject@Json@Data@Windows@winrt@@Uhstr.c)
 *     ?ToString@?$consume_Windows_Foundation_IStringable@UJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18031C6F8 (-ToString@-$consume_Windows_Foundation_IStringable@UJsonObject@Json@Data@Windows@winrt@@@impl@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall JsonGameMruManager::SerializeToJsonFile(__int64 a1, char a2)
{
  const char *v3; // r9
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  void (__fastcall ***v7)(_QWORD, void *, __int64 *); // rcx
  __int64 v8; // rcx
  unsigned int v9; // eax
  enum AsyncStatus v10; // edx
  __int64 v11; // [rsp+30h] [rbp-C8h] BYREF
  void (__fastcall ***v12)(_QWORD, void *, __int64 *); // [rsp+38h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v17[8]; // [rsp+60h] [rbp-98h] BYREF
  volatile signed __int32 *v18; // [rsp+68h] [rbp-90h] BYREF
  _DWORD *v19; // [rsp+70h] [rbp-88h] BYREF
  _DWORD v20[4]; // [rsp+78h] [rbp-80h] BYREF
  const wchar_t *v21; // [rsp+88h] [rbp-70h]
  _QWORD v22[4]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-48h] BYREF
  _QWORD v24[7]; // [rsp+C0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  int v26; // [rsp+108h] [rbp+10h] BYREF
  __int64 v27; // [rsp+110h] [rbp+18h] BYREF
  __int64 v28; // [rsp+118h] [rbp+20h] BYREF

  LOBYTE(v26) = a2;
  JsonGameMruManager::GetJsonStorageFile(a1, &v28);
  try
  {
    if ( v28 )
    {
      winrt::Windows::Data::Json::JsonObject::JsonObject((winrt::Windows::Data::Json::JsonObject *)&v13);
      winrt::Windows::Data::Json::JsonArray::JsonArray((winrt::Windows::Data::Json::JsonArray *)&v12);
      v4 = *(_QWORD **)(a1 + 56);
      v5 = *(_QWORD **)(a1 + 64);
      while ( v4 != v5 )
      {
        v6 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v23, v4);
        v7 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))anonymous_namespace_::GameMruItemToJsonObject(v17, v6);
        if ( v7 )
        {
          v15 = 0LL;
          (**v7)(v7, &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonValue>, &v15);
          v14 = v15;
        }
        else
        {
          v14 = 0LL;
        }
        winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::Append(
          &v12,
          &v14);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v17);
        v4 += 2;
      }
      if ( v12 )
      {
        v16 = 0LL;
        (**v12)(v12, &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonValue>, &v16);
        v11 = v16;
      }
      else
      {
        v11 = 0LL;
      }
      if ( aTitles[6] )
        abort();
      v20[0] = 1;
      v20[1] = 6;
      v21 = L"titles";
      v19 = v20;
      winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Data::Json::JsonObject,winrt::hstring,winrt::Windows::Data::Json::IJsonValue>::Insert(
        &v13,
        &v19,
        &v11);
      if ( v11 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
      v26 = 0;
      v24[0] = *(_QWORD *)winrt::impl::consume_Windows_Foundation_IStringable<winrt::Windows::Data::Json::JsonObject>::ToString(
                            &v13,
                            &v18);
      v22[0] = &v28;
      v22[1] = v24;
      v22[2] = &v26;
      v22[3] = &qword_1808CA0A8;
      _InterlockedIncrement64(&qword_1808CA0A8);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics> )
      {
        winrt::impl::consume_Windows_Storage_IFileIOStatics<winrt::Windows::Storage::IFileIOStatics>::WriteTextAsync(
          (unsigned int)&winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics>,
          (unsigned int)&v27,
          (unsigned int)&v28,
          (unsigned int)v24,
          (__int64)&v26);
        _InterlockedDecrement64(&qword_1808CA0A8);
      }
      else
      {
        _InterlockedDecrement64(&qword_1808CA0A8);
        winrt::impl::factory_cache_entry<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics>::call<_lambda_ab3e553f5135d66a1c20f494927a541c_ &>(
          v8,
          &v27,
          v22);
      }
      v9 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status(&v27);
      if ( !v9 )
        v9 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncAction>(&v27);
      winrt::impl::check_status_canceled((winrt::impl *)v9, v10);
      winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel(&v27);
      if ( v27 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v27);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v18);
      if ( v12 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
      if ( v13 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
    }
    if ( v28 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v28);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xEF,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
      v3);
  }
}
