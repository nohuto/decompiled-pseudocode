/*
 * XREFs of ?MakeAppUninstallService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180092AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180059B44 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180090C38 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VAppUninstallService@Actions@CreativeFramework@@PEB_W@std@@YA?AV?$shared_ptr@VAppUninstallService@Actions@CreativeFramework@@@0@$$QEAPEB_W@Z @ 0x1800912FC (--$make_shared@VAppUninstallService@Actions@CreativeFramework@@PEB_W@std@@YA-AV-$shared_ptr@VApp.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CreativeFramework::Actions::MakeAppUninstallService(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // rax
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  std::_Ref_count_base *v7; // [rsp+38h] [rbp-40h]
  _QWORD v8[4]; // [rsp+40h] [rbp-38h] BYREF

  CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v8, a3);
  v4 = std::make_shared<CreativeFramework::Actions::AppUninstallService,wchar_t const *>(&v6);
  *a1 = *v4;
  a1[1] = v4[1];
  *v4 = 0LL;
  v4[1] = 0LL;
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  std::wstring::_Tidy(v8, 1, 0LL);
  return a1;
}
