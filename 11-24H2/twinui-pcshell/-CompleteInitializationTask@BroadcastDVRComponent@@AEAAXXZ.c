/*
 * XREFs of ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x180061E24
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5e3513c216c4aa17901f526f5b36627d___::Run @ 0x18022DFD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5e3513c216c4aa17901f526f5b36627d___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Query@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180054A2C (-Query@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x180056F08 (--Kfilesystem@std@@YA-AVpath@01@AEBV201@0@Z.c)
 *     ?Initialize@GameDVR_OutputDebug@@SAJXZ @ 0x1800592A0 (-Initialize@GameDVR_OutputDebug@@SAJXZ.c)
 *     ?IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x180059CD0 (-IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     ?IsAllowedSku@@YA_NXZ @ 0x180061428 (-IsAllowedSku@@YA_NXZ.c)
 *     ?IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ @ 0x1800622C4 (-IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     ?BroadcastDVRComponent_CompleteInitializationTask_OnEntry@GameDVRTraceProvider@@SAXXZ @ 0x18006292C (-BroadcastDVRComponent_CompleteInitializationTask_OnEntry@GameDVRTraceProvider@@SAXXZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180062C4C (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?CreateIsGameManager@@YAJPEAPEAUIIsGameManager@@@Z @ 0x180062CA0 (-CreateIsGameManager@@YAJPEAPEAUIIsGameManager@@@Z.c)
 *     ?RegisterNotifications@BroadcastDVRComponent@@QEAAXXZ @ 0x180062D14 (-RegisterNotifications@BroadcastDVRComponent@@QEAAXXZ.c)
 *     ?BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ @ 0x18006301C (-BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x180063074 (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$basic_string_view@GU?$char_traits@G@std@@@1@U_Normal_conversion@01@@Z @ 0x1800BB98C (--$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA-AV-$basic_.c)
 *     ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x1800BD1EC (-Create@JsonGameMruManager@@SA-AV-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMr.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GameMRU@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010D810 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GameMRU@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?GetDefault@UserDataPaths@Storage@Windows@winrt@@SA@XZ @ 0x1802BE5BC (-GetDefault@UserDataPaths@Storage@Windows@winrt@@SA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     __std_fs_create_directory @ 0x1802D4158 (__std_fs_create_directory.c)
 *     ??R?$default_delete@VJsonGameMruManager@@@std@@QEBAXPEAVJsonGameMruManager@@@Z @ 0x1803156A4 (--R-$default_delete@VJsonGameMruManager@@@std@@QEBAXPEAVJsonGameMruManager@@@Z.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x180319D90 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=20
void __fastcall BroadcastDVRComponent::CompleteInitializationTask(BroadcastDVRComponent *this)
{
  _BYTE *v2; // rsi
  BroadcastDVRComponent *v3; // rcx
  int v4; // eax
  const char *v5; // r9
  _QWORD *v6; // rdi
  int IsGameManager; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 **Default; // rax
  winrt::hstring *v11; // rax
  const unsigned __int16 *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  const struct std::filesystem::path *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  const WCHAR *v23; // rcx
  unsigned __int64 v24; // rax
  const wchar_t *v25; // rax
  __int64 *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  const char *v29; // r9
  const wchar_t *v30; // [rsp+20h] [rbp-118h] BYREF
  __int64 v31; // [rsp+28h] [rbp-110h]
  HANDLE hObject; // [rsp+30h] [rbp-108h] BYREF
  volatile signed __int32 *v33; // [rsp+38h] [rbp-100h] BYREF
  char *v34; // [rsp+40h] [rbp-F8h]
  _QWORD v35[4]; // [rsp+48h] [rbp-F0h] BYREF
  _BYTE v36[32]; // [rsp+68h] [rbp-D0h] BYREF
  LPCWSTR lpFileName[4]; // [rsp+88h] [rbp-B0h] BYREF
  _BYTE v38[32]; // [rsp+A8h] [rbp-90h] BYREF
  _BYTE v39[32]; // [rsp+C8h] [rbp-70h] BYREF
  _BYTE v40[32]; // [rsp+E8h] [rbp-50h] BYREF
  _BYTE Src[32]; // [rsp+108h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v2 = (char *)this + 432;
  v34 = (char *)this + 432;
  if ( !*((_BYTE *)this + 432) && IsAllowedSku() && BroadcastDVRComponent::IsMRPInstalled(v3) )
  {
    v4 = GameDVR_OutputDebug::Initialize();
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xEC,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v4);
    GameDVRTraceProvider::BroadcastDVRComponent_CompleteInitializationTask_OnEntry();
    hObject = CreateEventW(0LL, 1, 0, L"Local\\BcastdvrStartup73BD1D72-A850-47FF-82E1-8F30D2C38FFE");
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
      (char *)this + 400,
      &hObject);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    if ( !*((_QWORD *)this + 50) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xF2,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        v5);
    v6 = (_QWORD *)((char *)this + 256);
    IsGameManager = CreateIsGameManager((struct IIsGameManager **)this + 32);
    if ( IsGameManager < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF4,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)IsGameManager);
    BroadcastDVRComponent::RegisterNotifications(this);
    if ( *v6 )
    {
      (*(void (__fastcall **)(_QWORD, void (__fastcall *)(void *), BroadcastDVRComponent *))(*(_QWORD *)*v6 + 80LL))(
        *v6,
        BroadcastDVRComponent::KGLRefreshedCallback,
        this);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 48LL))(*v6);
    }
    BroadcastDVRComponent::IsGameDVREnabled(this);
    if ( *v6 )
    {
      LOBYTE(v8) = *((_BYTE *)this + 444);
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v6 + 72LL))(*v6, v8);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x108,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)v9);
    }
    LOBYTE(v8) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameMRU>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_GameMRU>::GetImpl'::`2'::impl,
      v8);
    try
    {
      Default = (__int64 **)winrt::Windows::Storage::UserDataPaths::GetDefault();
      v11 = (winrt::hstring *)winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::Query(
                                Default,
                                &v33);
      v12 = winrt::hstring::c_str(v11);
      v30 = v12;
      v15 = -1LL;
      do
        ++v15;
      while ( v12[v15] );
      v31 = v15;
      std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v39, &v30, v13, v14);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v33);
      if ( hObject )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&hObject);
      v30 = L"Microsoft\\GameDVR";
      v31 = 17LL;
      std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v35, &v30, v16, v17);
      std::wstring::wstring(v36, v39);
      std::filesystem::operator/(Src, (__int64)v36, (std::filesystem::path *)v35);
      std::wstring::_Tidy_deallocate(v36);
      std::wstring::_Tidy_deallocate(v35);
      v30 = L"GameMRU";
      v31 = 7LL;
      std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v38, &v30, v18, v19);
      std::wstring::wstring(v36, Src);
      std::filesystem::operator/(lpFileName, (__int64)v36, (std::filesystem::path *)v38);
      std::wstring::_Tidy_deallocate(v36);
      std::wstring::_Tidy_deallocate(v38);
      if ( !std::filesystem::exists((std::filesystem *)lpFileName, v20) )
      {
        v23 = (const WCHAR *)lpFileName;
        if ( lpFileName[3] > (LPCWSTR)7 )
          v23 = lpFileName[0];
        v24 = (unsigned __int64)_std_fs_create_directory(v23) >> 32;
        if ( (_DWORD)v24 )
          std::filesystem::_Throw_fs_error("create_directory", (unsigned int)v24, lpFileName);
      }
      v30 = L"LocalMruGameList.json";
      v31 = 21LL;
      std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v36, &v30, v21, v22);
      std::wstring::wstring(v38, lpFileName);
      std::filesystem::operator/(v40, (__int64)v38, (std::filesystem::path *)v36);
      std::wstring::_Tidy_deallocate(v38);
      std::wstring::_Tidy_deallocate(v36);
      std::wstring::wstring(v35, v40);
      v25 = (const wchar_t *)v35;
      if ( v35[3] > 7uLL )
        v25 = (const wchar_t *)v35[0];
      v30 = v25;
      v31 = v35[2];
      v26 = (__int64 *)JsonGameMruManager::Create(&v33, &v30);
      v27 = *v26;
      *v26 = 0LL;
      v28 = *((_QWORD *)this + 70);
      *((_QWORD *)this + 70) = v27;
      if ( v28 )
        std::default_delete<JsonGameMruManager>::operator()();
      if ( v33 )
        std::default_delete<JsonGameMruManager>::operator()();
      std::wstring::_Tidy_deallocate(v35);
      std::wstring::_Tidy_deallocate(v40);
      std::wstring::_Tidy_deallocate(lpFileName);
      std::wstring::_Tidy_deallocate(Src);
      std::wstring::_Tidy_deallocate(v39);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x122,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        v29);
      v2 = v34;
    }
    *v2 = 1;
    GameDVRTraceProvider::BroadcastDVRComponent_CompleteInitializationTask_OnExit();
  }
}
