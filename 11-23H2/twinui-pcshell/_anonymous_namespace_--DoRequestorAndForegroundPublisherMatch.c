/*
 * XREFs of _anonymous_namespace_::DoRequestorAndForegroundPublisherMatch @ 0x1806A0DFC
 * Callers:
 *     _anonymous_namespace_::DoesRequestorMeetPinningForegroundRequirements @ 0x1806A0F94 (_anonymous_namespace_--DoesRequestorMeetPinningForegroundRequirements.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180084CC4 (-reset@-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@det.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18008FC14 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A54F0 (-RequestorImagePath@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@X.c)
 *     _anonymous_namespace_::TryGetFilePublisher @ 0x1806A740C (_anonymous_namespace_--TryGetFilePublisher.c)
 *     _anonymous_namespace_::TryGetProcessPublisher @ 0x1806A7E18 (_anonymous_namespace_--TryGetProcessPublisher.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall anonymous_namespace_::DoRequestorAndForegroundPublisherMatch(_QWORD *a1)
{
  HWND ForegroundWindow; // rax
  HANDLE v3; // rax
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-19h] BYREF
  DWORD dwProcessId; // [rsp+40h] [rbp-9h] BYREF
  _QWORD *v12; // [rsp+48h] [rbp-1h]
  HANDLE hObject; // [rsp+50h] [rbp+7h] BYREF
  _QWORD v14[4]; // [rsp+58h] [rbp+Fh] BYREF
  _QWORD v15[2]; // [rsp+78h] [rbp+2Fh] BYREF
  __int64 v16; // [rsp+88h] [rbp+3Fh]
  unsigned __int64 v17; // [rsp+90h] [rbp+47h]

  v12 = a1;
  ForegroundWindow = GetForegroundWindow();
  GetWindowThreadProcessId(ForegroundWindow, &dwProcessId);
  hObject = 0LL;
  v3 = OpenProcess(0x1000u, 0, dwProcessId);
  wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    v3);
  if ( hObject )
  {
    v9 = *(_OWORD *)PinRequestContext::RequestorImagePath(*a1, v10);
    anonymous_namespace_::TryGetFilePublisher(v15, &v9);
    anonymous_namespace_::TryGetProcessPublisher(v14);
    if ( v16 )
    {
      v4 = v14;
      if ( v14[3] >= 8uLL )
        v4 = (_QWORD *)v14[0];
      v5 = v15;
      if ( v17 >= 8 )
        v5 = (_QWORD *)v15[0];
      if ( std::_Traits_equal<std::char_traits<unsigned short>>((__int64)v5, v16, (__int64)v4, v14[2]) )
      {
        std::wstring::_Tidy_deallocate((__int64)v14);
        std::wstring::_Tidy_deallocate((__int64)v15);
        CloseHandle(hObject);
        v6 = (std::_Ref_count_base *)a1[1];
        if ( v6 )
          std::_Ref_count_base::_Decref(v6);
        return 1;
      }
    }
    std::wstring::_Tidy_deallocate((__int64)v14);
    std::wstring::_Tidy_deallocate((__int64)v15);
  }
  if ( hObject )
    CloseHandle(hObject);
  v8 = (std::_Ref_count_base *)a1[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return 0;
}
