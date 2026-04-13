/*
 * XREFs of ?MakePublishWindowsTipService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800A0430
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180059B44 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180090C38 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA?AV?$shared_ptr@VPublishWindowsTipService@Actions@CreativeFramework@@@0@$$QEAPEB_W0@Z @ 0x1800A0268 (--$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA-AV-$share.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Actions::MakePublishWindowsTipService(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rax
  const wchar_t *v9; // [rsp+20h] [rbp-78h] BYREF
  const wchar_t *v10; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+38h] [rbp-60h] BYREF
  std::_Ref_count_base *v12; // [rsp+40h] [rbp-58h]
  _QWORD v13[4]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v14[4]; // [rsp+68h] [rbp-30h] BYREF

  v9 = (const wchar_t *)a1;
  v5 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v14, a3);
  if ( *(_QWORD *)(v5 + 24) >= 8uLL )
    v5 = *(_QWORD *)v5;
  v10 = (const wchar_t *)v5;
  v6 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v13, a3);
  if ( *(_QWORD *)(v6 + 24) >= 8uLL )
    v6 = *(_QWORD *)v6;
  v9 = (const wchar_t *)v6;
  v7 = std::make_shared<CreativeFramework::Actions::PublishWindowsTipService,wchar_t const *,wchar_t const *>(
         &v11,
         &v9,
         &v10);
  *(_QWORD *)a1 = *v7;
  *(_QWORD *)(a1 + 8) = v7[1];
  *v7 = 0LL;
  v7[1] = 0LL;
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  std::wstring::_Tidy(v13, 1, 0LL);
  std::wstring::_Tidy(v14, 1, 0LL);
  return a1;
}
