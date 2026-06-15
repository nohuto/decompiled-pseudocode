/*
 * XREFs of _lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator() @ 0x18002F478
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_aa732a8a991b7eb0f1632fe44cffa677__void_::_Do_call @ 0x180031730 (std--_Func_impl_no_alloc__lambda_aa732a8a991b7eb0f1632fe44cffa677__void_--_Do_call.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180006B20 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180013510 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015310 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D4AC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@@std@@QEAAAEAUCRenderEndpointDuckingManagerContext@@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18002EE80 (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UCRenderEndpoin.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z @ 0x18002FAE0 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x1800304C4 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x1800307EC (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x180030E98 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator()(_QWORD *a1)
{
  __int64 v2; // r14
  unsigned __int16 *v3; // rdi
  float *v4; // rsi
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  const unsigned __int16 *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  const unsigned __int16 *v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v21[32]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  CWindowsPolicyManager::Lock((__int64)a1, &v20);
  v2 = *a1;
  v3 = (unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 72LL))(*a1);
  v4 = (float *)a1[1];
  v5 = CDuckingManager::ApplyDuckingGainStages((CDuckingManager *)v4, (struct IDuckingController *)a1[2], v3);
  v6 = retaddr;
  if ( v5 >= 0 )
  {
    v5 = CDuckingManager::RecalculateSessionVolumes((CDuckingManager *)v4, v3, 0LL);
    v6 = retaddr;
    if ( v5 >= 0 )
      goto LABEL_6;
    v7 = 111LL;
  }
  else
  {
    v7 = 108LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v6,
    v7,
    (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_6:
  std::wstring::wstring((__int64)v21, v3);
  v8 = *(_DWORD *)std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::operator[](
                    v4 + 44,
                    (__int64)v21);
  v9 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  v10 = CDuckingManager::NotifyFilteredClientsAutoDuck((CDuckingManager *)v4, v9, v3, v8);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      117LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v10);
  std::wstring::~wstring((__int64)v21, v11, v12, v13);
  std::wstring::wstring((__int64)v21, v3);
  v14 = *(_DWORD *)std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::operator[](
                     v4 + 44,
                     (__int64)v21);
  v15 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  v16 = CDuckingManager::NotifyUnfilteredClientsAutoDuck((CDuckingManager *)v4, v15, v14);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      120LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v16);
  std::wstring::~wstring((__int64)v21, v17, v18, v19);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
}
