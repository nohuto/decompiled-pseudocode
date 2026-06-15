/*
 * XREFs of ?GetGroupingParam@CAudioSession@@UEAAJPEAU_GUID@@@Z @ 0x180077970
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrvPolicyManagerDeadLock@@@details@wil@@QEAA_NXZ @ 0x1800C2FF4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrvPolicyManagerDe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSession::GetGroupingParam(CAudioSession *this, struct _GUID *a2)
{
  _QWORD *v3; // rsi
  _QWORD *i; // rbx
  struct _RTL_CRITICAL_SECTION **v5; // rcx
  _QWORD *v6; // rsi
  _QWORD *j; // rbx
  unsigned int Pid; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+50h] [rbp+18h] BYREF
  char v11; // [rsp+58h] [rbp+20h] BYREF

  (*(void (__fastcall **)(char *, struct _GUID *))(*((_QWORD *)this + 1) + 104LL))((char *)this + 8, a2);
  Pid = 0;
  I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioSrvPolicyManagerDeadLock>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_AudioSrvPolicyManagerDeadLock>::GetImpl'::`2'::impl) )
  {
    (*(void (__fastcall **)(struct IAudioPolicyManager *, char *))(*(_QWORD *)g_PolicyManager + 184LL))(
      g_PolicyManager,
      &v11);
    if ( Pid == *((_DWORD *)this + 51) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 664));
      v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 664);
      v3 = (_QWORD *)*((_QWORD *)this + 89);
      for ( i = (_QWORD *)*((_QWORD *)this + 88); i != v3; ++i )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 456LL))(*i);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
    }
    v5 = (struct _RTL_CRITICAL_SECTION **)&v11;
    goto LABEL_13;
  }
  if ( Pid == *((_DWORD *)this + 51) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 664));
    v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 664);
    v6 = (_QWORD *)*((_QWORD *)this + 89);
    for ( j = (_QWORD *)*((_QWORD *)this + 88); j != v6; ++j )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*j + 456LL))(*j);
    v5 = &v10;
LABEL_13:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v5);
  }
  return 0LL;
}
