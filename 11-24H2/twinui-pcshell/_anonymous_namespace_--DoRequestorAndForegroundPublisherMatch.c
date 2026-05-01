/*
 * XREFs of _anonymous_namespace_::DoRequestorAndForegroundPublisherMatch @ 0x1805E56E0
 * Callers:
 *     _anonymous_namespace_::DoesRequestorMeetPinningForegroundRequirements @ 0x1805E5840 (_anonymous_namespace_--DoesRequestorMeetPinningForegroundRequirements.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180057688 (--1-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18010EB48 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C650C (-RequestorImagePath@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@X.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?reset@?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1802EDE28 (-reset@-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@det.c)
 *     _anonymous_namespace_::TryGetFilePublisher @ 0x1805EAE38 (_anonymous_namespace_--TryGetFilePublisher.c)
 *     _anonymous_namespace_::TryGetProcessPublisher @ 0x1805EB594 (_anonymous_namespace_--TryGetProcessPublisher.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall anonymous_namespace_::DoRequestorAndForegroundPublisherMatch(__int64 *a1)
{
  HWND ForegroundWindow; // rax
  HANDLE v3; // rax
  __int128 *v4; // r8
  void **v5; // rcx
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v8; // rcx
  __int128 v9; // [rsp+28h] [rbp-21h] BYREF
  DWORD dwProcessId; // [rsp+38h] [rbp-11h] BYREF
  void *v11[2]; // [rsp+40h] [rbp-9h] BYREF
  __int128 v12; // [rsp+50h] [rbp+7h] BYREF
  __int64 v13; // [rsp+60h] [rbp+17h]
  unsigned __int64 v14; // [rsp+68h] [rbp+1Fh]
  void *v15[2]; // [rsp+70h] [rbp+27h] BYREF
  __int64 v16; // [rsp+80h] [rbp+37h]
  unsigned __int64 v17; // [rsp+88h] [rbp+3Fh]

  dwProcessId = 0;
  ForegroundWindow = GetForegroundWindow();
  GetWindowThreadProcessId(ForegroundWindow, &dwProcessId);
  v11[0] = 0LL;
  v3 = OpenProcess(0x1000u, 0, dwProcessId);
  wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    v11,
    v3);
  if ( v11[0] )
  {
    v12 = *PinRequestContext::RequestorImagePath(*a1, &v9);
    anonymous_namespace_::TryGetFilePublisher(v15, &v12);
    anonymous_namespace_::TryGetProcessPublisher(&v12);
    if ( v16 )
    {
      v4 = &v12;
      if ( v14 > 7 )
        v4 = (__int128 *)v12;
      v5 = v15;
      if ( v17 > 7 )
        v5 = (void **)v15[0];
      if ( std::_Traits_equal<std::char_traits<unsigned short>>((__int64)v5, v16, v4, v13) )
      {
        std::wstring::_Tidy_deallocate((void **)&v12);
        std::wstring::_Tidy_deallocate(v15);
        wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v11);
        v6 = (std::_Ref_count_base *)a1[1];
        if ( v6 )
          std::_Ref_count_base::_Decref(v6);
        return 1;
      }
    }
    std::wstring::_Tidy_deallocate((void **)&v12);
    std::wstring::_Tidy_deallocate(v15);
  }
  wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v11);
  v8 = (std::_Ref_count_base *)a1[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return 0;
}
