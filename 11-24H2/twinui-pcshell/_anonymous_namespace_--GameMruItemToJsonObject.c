/*
 * XREFs of _anonymous_namespace_::GameMruItemToJsonObject @ 0x1800BE01C
 * Callers:
 *     ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x1800BDD3C (-SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     _anonymous_namespace_::TimePointToTimeString @ 0x1800BE5A8 (_anonymous_namespace_--TimePointToTimeString.c)
 *     ?CreateSeparator@?$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800BE728 (-CreateSeparator@-$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@.c)
 *     ??0JsonObject@Json@Data@Windows@winrt@@QEAA@XZ @ 0x1800BE78C (--0JsonObject@Json@Data@Windows@winrt@@QEAA@XZ.c)
 *     ?RemoveGroup@?$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHistory@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x1800BE8BC (-RemoveGroup@-$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHis.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@?$factory_cache_entry@UJsonValue@Json@Data@Windows@winrt@@UIJsonValueStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@Z @ 0x18031BDB8 (--$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@-$factory_cache_entry@UJsonValue@Json@Da.c)
 */

// Hidden C++ exception states: #wind=11
_QWORD *__fastcall anonymous_namespace_::GameMruItemToJsonObject(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  const char *v13; // r9
  __int64 v14; // rcx
  std::_Ref_count_base *v15; // rcx
  _QWORD *result; // rax
  std::_Ref_count_base *v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v19; // [rsp+28h] [rbp-1C0h] BYREF
  __int64 v20; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v21; // [rsp+38h] [rbp-1B0h] BYREF
  __int64 v22; // [rsp+40h] [rbp-1A8h] BYREF
  _QWORD *v23; // [rsp+48h] [rbp-1A0h]
  _DWORD **v24; // [rsp+58h] [rbp-190h] BYREF
  _DWORD **v25; // [rsp+60h] [rbp-188h] BYREF
  _DWORD **v26; // [rsp+68h] [rbp-180h] BYREF
  _DWORD **v27; // [rsp+70h] [rbp-178h] BYREF
  _QWORD *v28; // [rsp+78h] [rbp-170h]
  _DWORD *v29; // [rsp+80h] [rbp-168h] BYREF
  _DWORD v30[4]; // [rsp+88h] [rbp-160h] BYREF
  _QWORD *v31; // [rsp+98h] [rbp-150h]
  _DWORD *v32; // [rsp+A0h] [rbp-148h] BYREF
  _DWORD v33[4]; // [rsp+A8h] [rbp-140h] BYREF
  _QWORD *v34; // [rsp+B8h] [rbp-130h]
  _DWORD *v35; // [rsp+C0h] [rbp-128h] BYREF
  _DWORD v36[4]; // [rsp+C8h] [rbp-120h] BYREF
  _QWORD *v37; // [rsp+D8h] [rbp-110h]
  _DWORD *v38; // [rsp+E0h] [rbp-108h] BYREF
  _DWORD v39[4]; // [rsp+E8h] [rbp-100h] BYREF
  _QWORD *v40; // [rsp+F8h] [rbp-F0h]
  _DWORD *v41; // [rsp+100h] [rbp-E8h] BYREF
  _DWORD v42[4]; // [rsp+108h] [rbp-E0h] BYREF
  const wchar_t *v43; // [rsp+118h] [rbp-D0h]
  _DWORD *v44; // [rsp+120h] [rbp-C8h] BYREF
  _DWORD v45[4]; // [rsp+128h] [rbp-C0h] BYREF
  const WCHAR *v46; // [rsp+138h] [rbp-B0h]
  _DWORD *v47; // [rsp+140h] [rbp-A8h] BYREF
  _DWORD v48[4]; // [rsp+148h] [rbp-A0h] BYREF
  const wchar_t *v49; // [rsp+158h] [rbp-90h]
  _DWORD *v50; // [rsp+160h] [rbp-88h] BYREF
  _DWORD v51[4]; // [rsp+168h] [rbp-80h] BYREF
  const wchar_t *v52; // [rsp+178h] [rbp-70h]
  __int64 *v53; // [rsp+180h] [rbp-68h]
  __int64 *v54; // [rsp+188h] [rbp-60h]
  __int64 *v55; // [rsp+190h] [rbp-58h]
  __int64 *v56; // [rsp+198h] [rbp-50h]
  void *v57[4]; // [rsp+1A0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  try
  {
    v23 = a1;
    v28 = a2;
    winrt::Windows::Data::Json::JsonObject::JsonObject((winrt::Windows::Data::Json::JsonObject *)&v18);
    v4 = (_QWORD *)anonymous_namespace_::TimePointToTimeString(v57, *a2);
    v5 = v4;
    v6 = v4[2];
    if ( v4[3] > 7uLL )
      v5 = (_QWORD *)*v4;
    if ( (_DWORD)v6 )
    {
      if ( *((_WORD *)v5 + (unsigned int)v6) )
        abort();
      v30[0] = 1;
      v30[1] = v6;
      v31 = v5;
      v29 = v30;
    }
    else
    {
      v29 = 0LL;
    }
    v24 = &v29;
    v53 = &qword_1808CA1A8;
    _InterlockedAdd64(&qword_1808CA1A8, 1uLL);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics> )
    {
      winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateSeparator(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>,
        &v19,
        &v29);
      _InterlockedDecrement64(&qword_1808CA1A8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808CA1A8);
      winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>::call<_lambda_ca425077811c26dd994b3d0531fe1de0_ &>(
        v5,
        &v19,
        &v24);
    }
    if ( aLastlaunched[12] )
      abort();
    v42[0] = 1;
    v42[1] = 12;
    v43 = L"LastLaunched";
    v41 = v42;
    winrt::impl::consume_Windows_UI_Notifications_IToastNotificationHistory<winrt::Windows::UI::Notifications::IToastNotificationHistory>::RemoveGroup(
      &v18,
      &v41,
      &v19);
    if ( v19 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v19);
    std::wstring::_Tidy_deallocate(v57);
    v7 = (_QWORD *)(*a2 + 8LL);
    v8 = *(_QWORD *)(*a2 + 24LL);
    if ( *(_QWORD *)(*a2 + 32LL) > 7uLL )
      v7 = (_QWORD *)*v7;
    if ( (_DWORD)v8 )
    {
      if ( *((_WORD *)v7 + (unsigned int)v8) )
        abort();
      v33[0] = 1;
      v33[1] = v8;
      v34 = v7;
      v32 = v33;
    }
    else
    {
      v32 = 0LL;
    }
    v25 = &v32;
    v54 = &qword_1808CA1A8;
    _InterlockedAdd64(&qword_1808CA1A8, 1uLL);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics> )
    {
      winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateSeparator(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>,
        &v20,
        &v32);
      _InterlockedDecrement64(&qword_1808CA1A8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808CA1A8);
      winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>::call<_lambda_ca425077811c26dd994b3d0531fe1de0_ &>(
        v7,
        &v20,
        &v25);
    }
    if ( aTitle[5] )
      abort();
    v45[0] = 1;
    v45[1] = 5;
    v46 = L"Title";
    v44 = v45;
    winrt::impl::consume_Windows_UI_Notifications_IToastNotificationHistory<winrt::Windows::UI::Notifications::IToastNotificationHistory>::RemoveGroup(
      &v18,
      &v44,
      &v20);
    if ( v20 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v20);
    v9 = (_QWORD *)(*a2 + 40LL);
    v10 = *(_QWORD *)(*a2 + 56LL);
    if ( *(_QWORD *)(*a2 + 64LL) > 7uLL )
      v9 = (_QWORD *)*v9;
    if ( (_DWORD)v10 )
    {
      if ( *((_WORD *)v9 + (unsigned int)v10) )
        abort();
      v36[0] = 1;
      v36[1] = v10;
      v37 = v9;
      v35 = v36;
    }
    else
    {
      v35 = 0LL;
    }
    v26 = &v35;
    v55 = &qword_1808CA1A8;
    _InterlockedAdd64(&qword_1808CA1A8, 1uLL);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics> )
    {
      winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateSeparator(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>,
        &v21,
        &v35);
      _InterlockedDecrement64(&qword_1808CA1A8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808CA1A8);
      winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>::call<_lambda_ca425077811c26dd994b3d0531fe1de0_ &>(
        v9,
        &v21,
        &v26);
    }
    if ( aAumid[5] )
      abort();
    v48[0] = 1;
    v48[1] = 5;
    v49 = L"Aumid";
    v47 = v48;
    winrt::impl::consume_Windows_UI_Notifications_IToastNotificationHistory<winrt::Windows::UI::Notifications::IToastNotificationHistory>::RemoveGroup(
      &v18,
      &v47,
      &v21);
    if ( v21 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v21);
    v11 = (_QWORD *)(*a2 + 72LL);
    v12 = *(_QWORD *)(*a2 + 88LL);
    if ( *(_QWORD *)(*a2 + 96LL) > 7uLL )
      v11 = (_QWORD *)*v11;
    if ( (_DWORD)v12 )
    {
      if ( *((_WORD *)v11 + (unsigned int)v12) )
        abort();
      v39[0] = 1;
      v39[1] = v12;
      v40 = v11;
      v38 = v39;
    }
    else
    {
      v38 = 0LL;
    }
    v27 = &v38;
    v56 = &qword_1808CA1A8;
    _InterlockedAdd64(&qword_1808CA1A8, 1uLL);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics> )
    {
      winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateSeparator(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>,
        &v22,
        &v38);
      _InterlockedDecrement64(&qword_1808CA1A8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808CA1A8);
      winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonValue,winrt::Windows::Data::Json::IJsonValueStatics>::call<_lambda_ca425077811c26dd994b3d0531fe1de0_ &>(
        v11,
        &v22,
        &v27);
    }
    if ( aExepath[7] )
      abort();
    v51[0] = 1;
    v51[1] = 7;
    v52 = L"ExePath";
    v50 = v51;
    winrt::impl::consume_Windows_UI_Notifications_IToastNotificationHistory<winrt::Windows::UI::Notifications::IToastNotificationHistory>::RemoveGroup(
      &v18,
      &v50,
      &v22);
    if ( v22 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v22);
    v14 = v18;
    v18 = 0LL;
    *a1 = v14;
    v15 = (std::_Ref_count_base *)a2[1];
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    result = a1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x5E,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
      v13);
    *v23 = 0LL;
    v17 = (std::_Ref_count_base *)v28[1];
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    return v23;
  }
  return result;
}
