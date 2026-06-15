/*
 * XREFs of ?RegisterCallback@CBtAudioResourceManagerBase@@UEAAJV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x1800DA310
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ @ 0x180023650 (-_Tidy@-$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18007E518 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??$_Try_emplace@_K$$V@?$map@_KV?$function@$$A6AX_N@Z@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@_N@1@$$QEA_K@Z @ 0x1800D3040 (--$_Try_emplace@_K$$V@-$map@_KV-$function@$$A6AX_N@Z@std@@U-$less@_K@2@V-$allocator@U-$pair@$$CB.c)
 *     ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800D371C (--4-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBtAudioResourceManagerBase::RegisterCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  RTL_SRWLOCK *v6; // rbx
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  const char *v10; // r9
  __int64 result; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  RTL_SRWLOCK *v14; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v16 = a2;
  v6 = (RTL_SRWLOCK *)(a1 + 192);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 192));
  try
  {
    v14 = v6;
    v7 = *(unsigned int *)(a1 + 200);
    *(_DWORD *)(a1 + 200) = v7 + 1;
    v13 = v7;
    v8 = (_QWORD *)std::map<unsigned __int64,std::function<void (bool)>>::_Try_emplace<unsigned __int64,>(
                     (_QWORD *)(a1 + 208),
                     (__int64)v15,
                     &v13);
    std::function<void (bool)>::operator=(*v8 + 40LL, a2);
    *a3 = v7;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v14);
    std::_Func_class<void,IAudioStreamInfo *>::_Tidy(a2, v9);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v13) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x596,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
                     v10);
    std::_Func_class<void,IAudioStreamInfo *>::_Tidy(v16, v12);
    return (unsigned int)v13;
  }
  return result;
}
