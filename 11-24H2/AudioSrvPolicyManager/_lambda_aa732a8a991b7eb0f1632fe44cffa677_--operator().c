/*
 * XREFs of _lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator() @ 0x18002CA9C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_aa732a8a991b7eb0f1632fe44cffa677__void_::_Do_call @ 0x18002ED50 (std--_Func_impl_no_alloc__lambda_aa732a8a991b7eb0f1632fe44cffa677__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180009830 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180013EA0 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015760 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002B05C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@@std@@QEAAAEAUCRenderEndpointDuckingManagerContext@@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18002C4A4 (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UCRenderEndpoin.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z @ 0x18002D100 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18002DAE4 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x18002DE0C (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x18002E4B8 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator()(_QWORD *a1)
{
  __int64 v2; // r14
  const unsigned __int16 *v3; // rdi
  float *v4; // rsi
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  const unsigned __int16 *v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  const unsigned __int16 *v12; // rax
  int v13; // eax
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v15[32]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  CWindowsPolicyManager::Lock((__int64)a1, &v14);
  v2 = *a1;
  v3 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 72LL))(*a1);
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
  std::wstring::wstring((__int64)v15, (__int64)v3);
  v8 = *(_DWORD *)std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::operator[](
                    v4 + 44,
                    (__int64)v15);
  v9 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  v10 = CDuckingManager::NotifyFilteredClientsAutoDuck((CDuckingManager *)v4, v9, v3, v8);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      117LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v10);
  std::wstring::~wstring((__int64)v15);
  std::wstring::wstring((__int64)v15, (__int64)v3);
  v11 = *(_DWORD *)std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::operator[](
                     v4 + 44,
                     (__int64)v15);
  v12 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  v13 = CDuckingManager::NotifyUnfilteredClientsAutoDuck((CDuckingManager *)v4, v12, v11);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      120LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v13);
  std::wstring::~wstring((__int64)v15);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
}
