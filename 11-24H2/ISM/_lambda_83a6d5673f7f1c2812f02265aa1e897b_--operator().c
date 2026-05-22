/*
 * XREFs of _lambda_83a6d5673f7f1c2812f02265aa1e897b_::operator() @ 0x1800E31DC
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::IAmbientManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs_____::_)(Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs_____lambda_83a6d5673f7f1c2812f02265aa1e897b___1_Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs___::Invoke @ 0x1800E3960 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800E3960.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18005B4E4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006913C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800ABBBC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_83a6d5673f7f1c2812f02265aa1e897b_::operator()(ULONG_PTR *a1, RTL_SRWLOCK *a2, __int64 a3)
{
  __int64 *v5; // rax
  const char *v6; // r9
  __int64 *v7; // rdi
  __int64 v8; // rcx
  RTL_SRWLOCK *v9; // rbx
  ULONG_PTR v10; // r8
  __int64 v11; // rax
  __int64 **v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = a2;
  if ( !*(_BYTE *)(*a1 + 184) )
  {
    v5 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v5;
    if ( v5 )
    {
      *v5 = 0LL;
      v5[1] = 0LL;
      v5[2] = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    if ( !v7 )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        672LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        v6);
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    v15 = 0LL;
    v8 = v7[2];
    v7[2] = a3;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v15);
    v9 = (RTL_SRWLOCK *)(*a1 + 152);
    AcquireSRWLockExclusive(v9);
    v15 = v9;
    v10 = *a1;
    v11 = *a1 + 120;
    v12 = *(__int64 ***)(*a1 + 128);
    if ( *v12 != (__int64 *)v11 )
      __fastfail(3u);
    *v7 = v11;
    v7[1] = (__int64)v12;
    *v12 = v7;
    *(_QWORD *)(v11 + 8) = v7;
    ++*(_DWORD *)(v11 + 16);
    QueueUserAPC(LampArrayRawInputProvider::AmbientUpdateAPC, *(HANDLE *)(v10 + 176), v10);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v15);
  }
  return 0LL;
}
