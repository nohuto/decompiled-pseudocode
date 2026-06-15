/*
 * XREFs of _lambda_0a903797054c4de60318e94de109d2f9_::operator() @ 0x18003D7CC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0a903797054c4de60318e94de109d2f9__void_::_Do_call @ 0x180040D70 (std--_Func_impl_no_alloc__lambda_0a903797054c4de60318e94de109d2f9__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000A540 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180013EA0 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z @ 0x180015930 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015F70 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_0a903797054c4de60318e94de109d2f9_::operator()(struct _RTL_CRITICAL_SECTION *a1)
{
  __int128 v1; // rdi
  __int64 v2; // rax
  _QWORD *v3; // rbx
  _DWORD *v4; // r8
  const char *v5; // r9
  void *v6; // rbx
  int *i; // r14
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+68h] [rbp+10h] BYREF

  v11 = a1;
  v8 = 0LL;
  v1 = 0LL;
  v9 = 0LL;
  CWindowsPolicyManager::Lock((__int64)a1, &v12);
  EnterCriticalSection(&stru_180064A78);
  v11 = &stru_180064A78;
  v2 = qword_180064AA8;
  v3 = *(_QWORD **)qword_180064AA8;
  while ( v3 != (_QWORD *)v2 )
  {
    v4 = (_DWORD *)v3[3];
    if ( *((_QWORD *)&v1 + 1) == (_QWORD)v1 )
    {
      try
      {
        std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>(&v8, *((_BYTE **)&v1 + 1), v4);
        *(_QWORD *)&v1 = v9;
        *((_QWORD *)&v1 + 1) = *((_QWORD *)&v8 + 1);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x5B1,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          v5);
        *(_QWORD *)&v1 = v9;
        *((_QWORD *)&v1 + 1) = *((_QWORD *)&v8 + 1);
        goto LABEL_7;
      }
    }
    else
    {
      **((_DWORD **)&v1 + 1) = *v4;
      *((_QWORD *)&v1 + 1) += 4LL;
      *((_QWORD *)&v8 + 1) = *((_QWORD *)&v1 + 1);
    }
    v3 = (_QWORD *)*v3;
    v2 = qword_180064AA8;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v12);
LABEL_7:
  v6 = (void *)v8;
  for ( i = (int *)v8; i != *((int **)&v1 + 1); ++i )
    CApplicationManager::ApplyPBMPolicyForAllAppsInSession(g_ApplicationManager, *i, 1);
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)((v1 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL));
}
