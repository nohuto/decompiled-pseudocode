/*
 * XREFs of _lambda_7936b82dc4b721215efe4b8ef74a7a70_::operator() @ 0x180642824
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7936b82dc4b721215efe4b8ef74a7a70__&_::Run @ 0x180644B50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7936b82dc4b721215efe4b8ef74a7a70__-_--Run.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$call@P6A?AUToastNotificationHistory@Notifications@UI@Windows@winrt@@AEBUIToastNotificationManagerStatics2@2345@@Z@?$factory_cache_entry@UToastNotificationManager@Notifications@UI@Windows@winrt@@UIToastNotificationManagerStatics2@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUToastNotificationHistory@Notifications@UI@Windows@2@AEBUIToastNotificationManagerStatics2@4562@@Z@Z @ 0x180641BDC (--$call@P6A-AUToastNotificationHistory@Notifications@UI@Windows@winrt@@AEBUIToastNotificationMan.c)
 *     ?History@?$consume_Windows_UI_Notifications_IToastNotificationManagerStatics2@UIToastNotificationManagerStatics2@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180644768 (-History@-$consume_Windows_UI_Notifications_IToastNotificationManagerStatics2@UIToastNotificatio.c)
 *     ?RemoveGroup@?$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHistory@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x180644B04 (-RemoveGroup@-$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHis.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_7936b82dc4b721215efe4b8ef74a7a70_::operator()(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx
  const unsigned __int16 *v4; // rsi
  const WCHAR *v5; // rdx
  const WCHAR *v6; // rdx
  unsigned int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // r8
  _BYTE v10[32]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v11[32]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v13; // [rsp+A0h] [rbp+30h] BYREF
  const struct winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2 *(__fastcall *v14)(const struct winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2 *, __int64); // [rsp+A8h] [rbp+38h] BYREF
  __int64 *v15; // [rsp+B0h] [rbp+40h]

  v2 = (_QWORD *)a1[1];
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
  {
    v4 = (const unsigned __int16 *)(i + 2);
    v5 = (const WCHAR *)(i + 2);
    if ( i[5] >= 8uLL )
      v5 = *(const WCHAR **)v4;
    if ( RegQueryValueExW(*(HKEY *)(*a1 + 64LL), v5 + 12, 0LL, 0LL, 0LL, 0LL) == 2 )
    {
      v6 = (const WCHAR *)(i + 2);
      if ( i[5] >= 8uLL )
        v6 = *(const WCHAR **)v4;
      v7 = RegDeleteValueW(*(HKEY *)(*a1 + 8LL), v6);
      v8 = retaddr;
      if ( v7 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          (void *)0x103,
          (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
          (const char *)v7);
      v15 = &qword_180991DE8;
      _InterlockedIncrement64(&qword_180991DE8);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2> )
      {
        winrt::impl::consume_Windows_UI_Notifications_IToastNotificationManagerStatics2<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2>::History(
          &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2>,
          &v13);
        _InterlockedDecrement64(&qword_180991DE8);
      }
      else
      {
        _InterlockedDecrement64(&qword_180991DE8);
        v14 = _lambda_c0fabf41be1276bce350d62b8e95619d_::_lambda_invoker_cdecl_;
        winrt::impl::factory_cache_entry<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2>::call<winrt::Windows::UI::Notifications::ToastNotificationHistory (*)(winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2 const &)>(
          (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))v8,
          (__int64)&v13,
          (void (__fastcall **)(__int64, __int64 *))&v14);
      }
      winrt::param::hstring::create_string_reference(
        (winrt::param::hstring *)v10,
        L"Windows.SystemToast.StartupApp",
        30);
      if ( i[5] >= 8uLL )
        v4 = *(const unsigned __int16 **)v4;
      v9 = -1LL;
      do
        ++v9;
      while ( v4[v9] );
      winrt::param::hstring::create_string_reference((winrt::param::hstring *)v11, v4, v9);
      winrt::impl::consume_Windows_UI_Notifications_IToastNotificationHistory<winrt::Windows::UI::Notifications::IToastNotificationHistory>::RemoveGroup(
        &v13,
        v11,
        v10);
      if ( v13 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
    }
  }
}
