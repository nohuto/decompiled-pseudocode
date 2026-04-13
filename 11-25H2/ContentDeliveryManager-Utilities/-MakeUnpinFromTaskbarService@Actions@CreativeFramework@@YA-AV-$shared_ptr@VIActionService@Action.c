/*
 * XREFs of ?MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18009CE20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800596A4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800907A4 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180090898 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W0$$QEA_N@Z @ 0x18009C630 (--$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_WPEB_W_N@std@@YA-AV-$shared_ptr.c)
 *     ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W$$QEA_N@Z @ 0x18009C71C (--$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA-AV-$shared_ptr@VTas.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

_QWORD *__fastcall CreativeFramework::Actions::MakeUnpinFromTaskbarService(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  char v11[8]; // [rsp+20h] [rbp-49h] BYREF
  _QWORD *v12; // [rsp+28h] [rbp-41h] BYREF
  _QWORD *v13; // [rsp+30h] [rbp-39h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-31h]
  __int64 v15; // [rsp+48h] [rbp-21h] BYREF
  std::_Ref_count_base *v16; // [rsp+50h] [rbp-19h]
  _QWORD v17[4]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v18[4]; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD v19[4]; // [rsp+98h] [rbp+2Fh] BYREF

  v13 = a1;
  CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)v17, a3);
  v11[0] = 0;
  if ( v17[2] )
  {
    v5 = v17;
    if ( v17[3] >= 8uLL )
      v5 = (_QWORD *)v17[0];
    v12 = v5;
    v6 = std::make_shared<CreativeFramework::Actions::TaskbarPinService,wchar_t const *,bool>(&v13, (__int64)&v12, v11);
    *a1 = *v6;
    a1[1] = v6[1];
    *v6 = 0LL;
    v6[1] = 0LL;
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
  else
  {
    v7 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v19, a3);
    if ( v7[3] >= 8uLL )
      v7 = (_QWORD *)*v7;
    v12 = v7;
    v8 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v18, a3);
    if ( v8[3] >= 8uLL )
      v8 = (_QWORD *)*v8;
    v13 = v8;
    v9 = std::make_shared<CreativeFramework::Actions::TaskbarPinService,wchar_t const *,wchar_t const *,bool>(
           &v15,
           (__int64)&v13,
           (__int64)&v12,
           v11);
    *a1 = *v9;
    a1[1] = v9[1];
    *v9 = 0LL;
    v9[1] = 0LL;
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    std::wstring::_Tidy(v18, 1, 0LL);
    std::wstring::_Tidy(v19, 1, 0LL);
  }
  std::wstring::_Tidy(v17, 1, 0LL);
  return a1;
}
