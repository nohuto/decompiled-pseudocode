/*
 * XREFs of _lambda_88c52b909d46191f2a7b9cf853665f36_::operator() @ 0x180585C48
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&_::Run @ 0x180586240 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__-_--Run.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180056F50 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x180063074 (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0A@@path@filesystem@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@W4format@012@@Z @ 0x1800BAF24 (--$-0V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0A@@path@filesystem@std@@QEA.c)
 *     ??$?0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z @ 0x1800BC554 (--$-0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z.c)
 *     ?RemoveGroup@?$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHistory@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x1800BE8BC (-RemoveGroup@-$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHis.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE34 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?History@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@XZ @ 0x180586064 (-History@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_88c52b909d46191f2a7b9cf853665f36_::operator()(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdi
  _QWORD *i; // rbx
  const unsigned __int16 *v7; // rsi
  const WCHAR *v8; // rax
  __int64 v9; // r15
  std::filesystem::path *v10; // rax
  const struct std::filesystem::path *v11; // rdx
  const WCHAR *v12; // rdx
  unsigned int v13; // eax
  __int64 *v14; // [rsp+28h] [rbp-39h] BYREF
  const WCHAR *v15; // [rsp+30h] [rbp-31h] BYREF
  __int64 v16[4]; // [rsp+38h] [rbp-29h] BYREF
  void *Src[4]; // [rsp+58h] [rbp-9h] BYREF
  void *v18[4]; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v5 = (_QWORD *)a1[1];
  for ( i = (_QWORD *)*v5; i != v5; i = (_QWORD *)*i )
  {
    v7 = (const unsigned __int16 *)(i + 2);
    v8 = (const WCHAR *)(i + 2);
    if ( i[5] > 7uLL )
      v8 = *(const WCHAR **)v7;
    v15 = v8 + 12;
    v9 = *a1;
    std::filesystem::path::path((__int64)Src, (_QWORD *)(*a1 + 64LL), a3, a4);
    v10 = (std::filesystem::path *)std::filesystem::path::path(v18, (__int64 *)&v15);
    std::filesystem::path::operator/=((std::filesystem *)Src, v10);
    std::wstring::_Tidy_deallocate(v18);
    if ( !std::filesystem::exists((std::filesystem *)Src, v11) )
    {
      v12 = (const WCHAR *)(i + 2);
      if ( i[5] > 7uLL )
        v12 = *(const WCHAR **)v7;
      v13 = RegDeleteValueW(*(HKEY *)(v9 + 8), v12);
      if ( v13 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          406LL,
          (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
          (const char *)v13);
      winrt::Windows::UI::Notifications::ToastNotificationManager::History();
      winrt::param::hstring::hstring((winrt::param::hstring *)v18, L"Windows.SystemToast.StartupApp");
      if ( i[5] > 7uLL )
        v7 = *(const unsigned __int16 **)v7;
      winrt::param::hstring::hstring((winrt::param::hstring *)v16, v7);
      winrt::impl::consume_Windows_UI_Notifications_IToastNotificationHistory<winrt::Windows::UI::Notifications::IToastNotificationHistory>::RemoveGroup(
        &v14,
        v16,
        (__int64 *)v18);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    }
    std::wstring::_Tidy_deallocate(Src);
  }
}
