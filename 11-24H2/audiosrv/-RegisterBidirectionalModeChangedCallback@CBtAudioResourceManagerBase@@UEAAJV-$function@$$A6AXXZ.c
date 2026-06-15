/*
 * XREFs of ?RegisterBidirectionalModeChangedCallback@CBtAudioResourceManagerBase@@UEAAJV?$function@$$A6AXXZ@std@@PEAI@Z @ 0x1800E00B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180027BB0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006C370 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??$_Try_emplace@_K$$V@?$map@_KV?$function@$$A6AXXZ@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@PEAX@std@@_N@1@$$QEA_K@Z @ 0x1800DA728 (--$_Try_emplace@_K$$V@-$map@_KV-$function@$$A6AXXZ@std@@U-$less@_K@2@V-$allocator@U-$pair@$$CB_K.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800DAF9C (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBtAudioResourceManagerBase::RegisterBidirectionalModeChangedCallback(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  RTL_SRWLOCK *v6; // rbx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  const char *v11; // r9
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  RTL_SRWLOCK *v15; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v17 = a2;
  v6 = (RTL_SRWLOCK *)(a1 + 192);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 192));
  try
  {
    v15 = v6;
    v8 = *(unsigned int *)(a1 + 200);
    *(_DWORD *)(a1 + 200) = v8 + 1;
    v14 = v8;
    v9 = (_QWORD *)std::map<unsigned __int64,std::function<void (void)>>::_Try_emplace<unsigned __int64,>(
                     (__int64 *)(a1 + 232),
                     (__int64)v16,
                     &v14,
                     v7);
    std::function<void (void)>::operator=(*v9 + 40LL, a2);
    *a3 = v8;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v15);
    std::_Func_class<void,>::_Tidy(a2, v10);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v14) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x4F5,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
                     v11);
    std::_Func_class<void,>::_Tidy(v17, v13);
    return (unsigned int)v14;
  }
  return result;
}
