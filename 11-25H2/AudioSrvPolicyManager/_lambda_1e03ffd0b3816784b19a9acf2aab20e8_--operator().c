/*
 * XREFs of _lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator() @ 0x18002EF7C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1e03ffd0b3816784b19a9acf2aab20e8__void_::_Do_call @ 0x180031660 (std--_Func_impl_no_alloc__lambda_1e03ffd0b3816784b19a9acf2aab20e8__void_--_Do_call.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180006B20 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180013510 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015310 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D4AC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@@std@@QEAAAEAUCRenderEndpointDuckingManagerContext@@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18002EE80 (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UCRenderEndpoin.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180030664 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180030910 (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x180030E98 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBGAEA_J@Z @ 0x180030F14 (-RemoveDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBGAEA_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator()(_QWORD *a1)
{
  __int64 v2; // rdi
  unsigned __int16 *v3; // rbp
  __int64 v4; // rcx
  float *v5; // rsi
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  const unsigned __int16 *v11; // rax
  int v12; // eax
  const unsigned __int16 *v13; // rax
  int v14; // eax
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v17[32]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  Sleep(0x1F4u);
  v2 = *a1;
  v3 = (unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 72LL))(*a1);
  CWindowsPolicyManager::Lock(v4, &v16);
  v15 = 0LL;
  v5 = (float *)a1[1];
  v6 = CDuckingManager::RemoveDuckingGainStages((CDuckingManager *)v5, (struct IDuckingController *)a1[2], v3, &v15);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      165LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v6);
  CDuckingManager::RecalculateSessionVolumes((CDuckingManager *)v5, v3, &v15);
  std::wstring::wstring((__int64)v17, v3);
  v7 = *(_DWORD *)std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::operator[](
                    v5 + 44,
                    (__int64)v17);
  std::wstring::~wstring((__int64)v17, v8, v9, v10);
  if ( !v7 )
  {
    v11 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
    v12 = CDuckingManager::NotifyFilteredClientsAutoUnduck((CDuckingManager *)v5, v11);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        181LL,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
        (const char *)(unsigned int)v12);
  }
  v13 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  v14 = CDuckingManager::NotifyUnfilteredClientsAutoUnduck((CDuckingManager *)v5, v13);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      187LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v14);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
}
