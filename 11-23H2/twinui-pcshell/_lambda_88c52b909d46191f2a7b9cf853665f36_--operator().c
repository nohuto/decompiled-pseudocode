/*
 * XREFs of _lambda_88c52b909d46191f2a7b9cf853665f36_::operator() @ 0x1806429B8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&_::Run @ 0x180644B70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__-_--Run.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180090B34 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x18019366C (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$call@P6A?AUToastNotificationHistory@Notifications@UI@Windows@winrt@@AEBUIToastNotificationManagerStatics2@2345@@Z@?$factory_cache_entry@UToastNotificationManager@Notifications@UI@Windows@winrt@@UIToastNotificationManagerStatics2@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUToastNotificationHistory@Notifications@UI@Windows@2@AEBUIToastNotificationManagerStatics2@4562@@Z@Z @ 0x180641BDC (--$call@P6A-AUToastNotificationHistory@Notifications@UI@Windows@winrt@@AEBUIToastNotificationMan.c)
 *     ?History@?$consume_Windows_UI_Notifications_IToastNotificationManagerStatics2@UIToastNotificationManagerStatics2@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180644768 (-History@-$consume_Windows_UI_Notifications_IToastNotificationManagerStatics2@UIToastNotificatio.c)
 *     ?RemoveGroup@?$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHistory@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x180644B04 (-RemoveGroup@-$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHis.c)
 */

// Hidden C++ exception states: #wind=4
wil::details::in1diag3 **__fastcall lambda_88c52b909d46191f2a7b9cf853665f36_::operator()(_QWORD *a1)
{
  wil::details::in1diag3 **result; // rax
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  const unsigned __int16 *v5; // rsi
  const WCHAR *v6; // rax
  void *v7; // r14
  __int64 v8; // r15
  _QWORD *v9; // rax
  void *v10; // rcx
  __int64 v11; // rax
  const struct std::filesystem::path *v12; // rdx
  const WCHAR *v13; // rdx
  unsigned int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // r8
  _QWORD v17[2]; // [rsp+28h] [rbp-99h] BYREF
  const struct winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2 *(__fastcall *v18)(const struct winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2 *, __int64); // [rsp+38h] [rbp-89h] BYREF
  void *v19[2]; // [rsp+48h] [rbp-79h] BYREF
  void *v20[2]; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v21[32]; // [rsp+68h] [rbp-59h] BYREF
  _BYTE v22[32]; // [rsp+88h] [rbp-39h] BYREF
  _QWORD Src[4]; // [rsp+A8h] [rbp-19h] BYREF
  _QWORD v24[4]; // [rsp+C8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh] BYREF

  result = &retaddr;
  v3 = (_QWORD *)a1[1];
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v5 = (const unsigned __int16 *)(i + 2);
    v6 = (const WCHAR *)(i + 2);
    if ( i[5] >= 8uLL )
      v6 = *(const WCHAR **)v5;
    v7 = (void *)(v6 + 12);
    v8 = *a1;
    v9 = (_QWORD *)(*a1 + 64LL);
    v10 = *(void **)(*a1 + 80LL);
    if ( *(_QWORD *)(*a1 + 88LL) >= 8uLL )
      v9 = (_QWORD *)*v9;
    v19[0] = v9;
    v19[1] = v10;
    std::wstring::wstring(Src, v19);
    v20[0] = v7;
    v11 = -1LL;
    do
      ++v11;
    while ( *((_WORD *)v7 + v11) );
    v20[1] = (void *)v11;
    std::wstring::wstring(v24, v20);
    std::filesystem::path::operator/=((std::filesystem *)Src, (std::filesystem *)v24);
    std::wstring::_Tidy_deallocate((__int64)v24);
    if ( !std::filesystem::exists((std::filesystem *)Src, v12) )
    {
      v13 = (const WCHAR *)(i + 2);
      if ( i[5] >= 8uLL )
        v13 = *(const WCHAR **)v5;
      v14 = RegDeleteValueW(*(HKEY *)(v8 + 8), v13);
      v15 = retaddr;
      if ( v14 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          (void *)0x196,
          (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
          (const char *)v14);
      v17[1] = &qword_180991DE8;
      _InterlockedIncrement64(&qword_180991DE8);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2> )
      {
        winrt::impl::consume_Windows_UI_Notifications_IToastNotificationManagerStatics2<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2>::History(
          &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2>,
          v17);
        _InterlockedDecrement64(&qword_180991DE8);
      }
      else
      {
        _InterlockedDecrement64(&qword_180991DE8);
        v18 = _lambda_c0fabf41be1276bce350d62b8e95619d_::_lambda_invoker_cdecl_;
        winrt::impl::factory_cache_entry<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2>::call<winrt::Windows::UI::Notifications::ToastNotificationHistory (*)(winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2 const &)>(
          (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))v15,
          (__int64)v17,
          (void (__fastcall **)(__int64, __int64 *))&v18);
      }
      winrt::param::hstring::create_string_reference(
        (winrt::param::hstring *)v21,
        L"Windows.SystemToast.StartupApp",
        30);
      if ( i[5] >= 8uLL )
        v5 = *(const unsigned __int16 **)v5;
      v16 = -1LL;
      do
        ++v16;
      while ( v5[v16] );
      winrt::param::hstring::create_string_reference((winrt::param::hstring *)v22, v5, v16);
      winrt::impl::consume_Windows_UI_Notifications_IToastNotificationHistory<winrt::Windows::UI::Notifications::IToastNotificationHistory>::RemoveGroup(
        v17,
        v22,
        v21);
      if ( v17[0] )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v17);
    }
    result = (wil::details::in1diag3 **)std::wstring::_Tidy_deallocate((__int64)Src);
  }
  return result;
}
