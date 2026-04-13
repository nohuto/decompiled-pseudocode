/*
 * XREFs of ?MakeAddTileToCollectionService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800958D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AB80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800596A4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800907A4 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180090898 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartProperties@23@@std@@YA?AV?$shared_ptr@VAddTileToCollectionService@Actions@CreativeFramework@@@0@$$QEAPEB_WAEAUPinToStartProperties@Actions@CreativeFramework@@@Z @ 0x180093374 (--$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartPropert.c)
 *     ??1PinToStartProperties@Actions@CreativeFramework@@QEAA@XZ @ 0x180093B20 (--1PinToStartProperties@Actions@CreativeFramework@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CreativeFramework::Actions::MakeAddTileToCollectionService(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  int v6; // ebx
  BOOL v7; // r14d
  __int64 v8; // rax
  int v9; // ebx
  int v10; // r15d
  __int64 v11; // rax
  _QWORD *started; // rax
  const wchar_t *v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v16; // [rsp+48h] [rbp-B8h]
  _QWORD v17[4]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v19[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v20[32]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v21[32]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v22[32]; // [rsp+100h] [rbp+0h] BYREF
  int v23; // [rsp+120h] [rbp+20h]
  int v24; // [rsp+124h] [rbp+24h]

  v14 = (const wchar_t *)a1;
  v5 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)&v15, a3);
  if ( *(_QWORD *)(v5 + 24) >= 8uLL )
    v5 = *(_QWORD *)v5;
  v6 = CompareStringOrdinal((LPCWCH)v5, -1, L"true", -1, 1);
  std::wstring::_Tidy(&v15, 1, 0LL);
  v7 = v6 == 2;
  v8 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)&v15, a3);
  if ( *(_QWORD *)(v8 + 24) >= 8uLL )
    v8 = *(_QWORD *)v8;
  v9 = CompareStringOrdinal((LPCWCH)v8, -1, L"true", -1, 1);
  std::wstring::_Tidy(&v15, 1, 0LL);
  v10 = v7 | 2;
  if ( v9 != 2 )
    v10 = v7;
  CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)&v15, a3);
  std::wstring::wstring((__int64)v18);
  std::wstring::_Tidy(&v15, 1, 0LL);
  CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v17, a3);
  std::wstring::wstring((__int64)v19);
  std::wstring::_Tidy(v17, 1, 0LL);
  CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)&v15, a3);
  std::wstring::wstring((__int64)v20);
  std::wstring::_Tidy(&v15, 1, 0LL);
  CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v17, a3);
  std::wstring::wstring((__int64)v21);
  std::wstring::_Tidy(v17, 1, 0LL);
  CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)&v15, a3);
  std::wstring::wstring((__int64)v22);
  std::wstring::_Tidy(&v15, 1, 0LL);
  v23 = v10;
  v24 = 0;
  v11 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v17, a3);
  if ( *(_QWORD *)(v11 + 24) >= 8uLL )
    v11 = *(_QWORD *)v11;
  v14 = (const wchar_t *)v11;
  started = std::make_shared<CreativeFramework::Actions::AddTileToCollectionService,wchar_t const *,CreativeFramework::Actions::PinToStartProperties &>(
              &v15,
              &v14,
              (const struct CreativeFramework::Actions::PinToStartProperties *)v18);
  *(_QWORD *)a1 = *started;
  *(_QWORD *)(a1 + 8) = started[1];
  *started = 0LL;
  started[1] = 0LL;
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  std::wstring::_Tidy(v17, 1, 0LL);
  CreativeFramework::Actions::PinToStartProperties::~PinToStartProperties((CreativeFramework::Actions::PinToStartProperties *)v18);
  return a1;
}
