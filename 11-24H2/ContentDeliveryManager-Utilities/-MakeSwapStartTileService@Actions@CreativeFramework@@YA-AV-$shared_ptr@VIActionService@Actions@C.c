/*
 * XREFs of ?MakeSwapStartTileService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800960D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180059B44 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800673B8 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180090B44 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VSwapStartTileService@Actions@CreativeFramework@@PEB_WPEB_WAEAUSwapStartTileProperties@23@@std@@YA?AV?$shared_ptr@VSwapStartTileService@Actions@CreativeFramework@@@0@$$QEAPEB_W0AEAUSwapStartTileProperties@Actions@CreativeFramework@@@Z @ 0x180093874 (--$make_shared@VSwapStartTileService@Actions@CreativeFramework@@PEB_WPEB_WAEAUSwapStartTilePrope.c)
 *     ??1SwapStartTileProperties@Actions@CreativeFramework@@QEAA@XZ @ 0x180093F68 (--1SwapStartTileProperties@Actions@CreativeFramework@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::Actions::MakeSwapStartTileService(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *started; // rax
  const wchar_t *v15; // [rsp+20h] [rbp-E0h] BYREF
  const wchar_t *v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  std::_Ref_count_base *v18; // [rsp+40h] [rbp-C0h]
  _QWORD v19[4]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v20[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v21[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v22[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v23[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v24[4]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v25[4]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v26[4]; // [rsp+140h] [rbp+40h] BYREF

  v15 = (const wchar_t *)a1;
  v19[3] = 7LL;
  v19[2] = 0LL;
  LOWORD(v19[0]) = 0;
  v20[3] = 7LL;
  v20[2] = 0LL;
  LOWORD(v20[0]) = 0;
  v21[3] = 7LL;
  v21[2] = 0LL;
  LOWORD(v21[0]) = 0;
  v22[3] = 7LL;
  v22[2] = 0LL;
  LOWORD(v22[0]) = 0;
  v23[3] = 7LL;
  v23[2] = 0LL;
  LOWORD(v23[0]) = 0;
  v24[3] = 7LL;
  v24[2] = 0LL;
  LOWORD(v24[0]) = 0;
  v5 = (_QWORD *)CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)&v17, a3);
  std::wstring::operator=(v21, v5);
  std::wstring::_Tidy(&v17, 1, 0LL);
  v6 = (_QWORD *)CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)&v17, a3);
  std::wstring::operator=(v20, v6);
  std::wstring::_Tidy(&v17, 1, 0LL);
  v7 = (_QWORD *)CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)&v17, a3);
  std::wstring::operator=(v19, v7);
  std::wstring::_Tidy(&v17, 1, 0LL);
  v8 = (_QWORD *)CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)&v17, a3);
  std::wstring::operator=(v24, v8);
  std::wstring::_Tidy(&v17, 1, 0LL);
  v9 = (_QWORD *)CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)&v17, a3);
  std::wstring::operator=(v22, v9);
  std::wstring::_Tidy(&v17, 1, 0LL);
  v10 = (_QWORD *)CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)&v17, a3);
  std::wstring::operator=(v23, v10);
  std::wstring::_Tidy(&v17, 1, 0LL);
  v11 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)v26, a3);
  if ( *(_QWORD *)(v11 + 24) >= 8uLL )
    v11 = *(_QWORD *)v11;
  v16 = (const wchar_t *)v11;
  v12 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)v25, a3);
  if ( *(_QWORD *)(v12 + 24) >= 8uLL )
    v12 = *(_QWORD *)v12;
  v15 = (const wchar_t *)v12;
  started = std::make_shared<CreativeFramework::Actions::SwapStartTileService,wchar_t const *,wchar_t const *,CreativeFramework::Actions::SwapStartTileProperties &>(
              &v17,
              &v15,
              &v16,
              (const struct CreativeFramework::Actions::SwapStartTileProperties *)v19);
  *(_QWORD *)a1 = *started;
  *(_QWORD *)(a1 + 8) = started[1];
  *started = 0LL;
  started[1] = 0LL;
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  std::wstring::_Tidy(v25, 1, 0LL);
  std::wstring::_Tidy(v26, 1, 0LL);
  CreativeFramework::Actions::SwapStartTileProperties::~SwapStartTileProperties((CreativeFramework::Actions::SwapStartTileProperties *)v19);
  return a1;
}
