/*
 * XREFs of ?MakePinToStartService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180095BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800596A4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800907A4 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180090898 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VPinToStartService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VPinToStartService@Actions@CreativeFramework@@@0@$$QEAPEB_W00$$QEA_N@Z @ 0x1800933F8 (--$make_shared@VPinToStartService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W_N@std@@YA-AV-$share.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall CreativeFramework::Actions::MakePinToStartService(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *started; // rax
  char v11[8]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD *v12; // [rsp+38h] [rbp-61h] BYREF
  _QWORD *v13; // [rsp+48h] [rbp-51h] BYREF
  _QWORD *v14; // [rsp+50h] [rbp-49h] BYREF
  __int64 v15; // [rsp+58h] [rbp-41h] BYREF
  std::_Ref_count_base *v16; // [rsp+60h] [rbp-39h]
  _QWORD v17[4]; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v18[4]; // [rsp+88h] [rbp-11h] BYREF
  _QWORD v19[4]; // [rsp+A8h] [rbp+Fh] BYREF
  _QWORD v20[4]; // [rsp+C8h] [rbp+2Fh] BYREF

  v12 = a1;
  v5 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)v20, a3);
  if ( *(_QWORD *)(v5 + 24) >= 8uLL )
    v5 = *(_QWORD *)v5;
  v11[0] = CompareStringOrdinal((LPCWCH)v5, -1, L"true", -1, 1) == 2;
  v6 = (_QWORD *)CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)v19, a3);
  if ( v6[3] >= 8uLL )
    v6 = (_QWORD *)*v6;
  v13 = v6;
  v7 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v18, a3);
  if ( v7[3] >= 8uLL )
    v7 = (_QWORD *)*v7;
  v14 = v7;
  v8 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v17, a3);
  if ( v8[3] >= 8uLL )
    v8 = (_QWORD *)*v8;
  v12 = v8;
  started = std::make_shared<CreativeFramework::Actions::PinToStartService,wchar_t const *,wchar_t const *,wchar_t const *,bool>(
              &v15,
              (__int64)&v12,
              (__int64)&v14,
              (__int64)&v13,
              v11);
  *a1 = *started;
  a1[1] = started[1];
  *started = 0LL;
  started[1] = 0LL;
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  std::wstring::_Tidy(v17, 1, 0LL);
  std::wstring::_Tidy(v18, 1, 0LL);
  std::wstring::_Tidy(v19, 1, 0LL);
  std::wstring::_Tidy(v20, 1, 0LL);
  return a1;
}
