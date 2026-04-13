/*
 * XREFs of ?MakeSetDefaultApplicationService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180097770
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180059B44 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180090C38 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VSetDefaultApplicationService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VSetDefaultApplicationService@Actions@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x1800975C4 (--$make_shared@VSetDefaultApplicationService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA-.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::Actions::MakeSetDefaultApplicationService(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rax
  const wchar_t *v10; // [rsp+20h] [rbp-49h] BYREF
  const wchar_t *v11; // [rsp+30h] [rbp-39h] BYREF
  const wchar_t *v12; // [rsp+38h] [rbp-31h] BYREF
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  std::_Ref_count_base *v14; // [rsp+48h] [rbp-21h]
  _QWORD v15[4]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v16[4]; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v17[4]; // [rsp+90h] [rbp+27h] BYREF

  v10 = (const wchar_t *)a1;
  v5 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v17, a3);
  if ( *(_QWORD *)(v5 + 24) >= 8uLL )
    v5 = *(_QWORD *)v5;
  v11 = (const wchar_t *)v5;
  v6 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v16, a3);
  if ( *(_QWORD *)(v6 + 24) >= 8uLL )
    v6 = *(_QWORD *)v6;
  v12 = (const wchar_t *)v6;
  v7 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v15, a3);
  if ( *(_QWORD *)(v7 + 24) >= 8uLL )
    v7 = *(_QWORD *)v7;
  v10 = (const wchar_t *)v7;
  v8 = std::make_shared<CreativeFramework::Actions::SetDefaultApplicationService,wchar_t const *,wchar_t const *,wchar_t const *>(
         &v13,
         &v10,
         &v12,
         &v11);
  *(_QWORD *)a1 = *v8;
  *(_QWORD *)(a1 + 8) = v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  std::wstring::_Tidy(v15, 1, 0LL);
  std::wstring::_Tidy(v16, 1, 0LL);
  std::wstring::_Tidy(v17, 1, 0LL);
  return a1;
}
