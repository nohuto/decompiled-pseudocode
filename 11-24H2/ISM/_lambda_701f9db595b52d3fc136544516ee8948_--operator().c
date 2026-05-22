/*
 * XREFs of _lambda_701f9db595b52d3fc136544516ee8948_::operator() @ 0x1800E30FC
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(IInspectable___unsigned_char)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_bool___lambda_701f9db595b52d3fc136544516ee8948___1_IInspectable___unsigned_char_::Invoke @ 0x1800E3930 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_1800E3930.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x180001330 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18005B4E4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 */

__int64 __fastcall lambda_701f9db595b52d3fc136544516ee8948_::operator()(ULONG_PTR *a1, const unsigned __int16 *a2)
{
  RTL_SRWLOCK *v3; // rbx
  _QWORD *v4; // r8
  _QWORD *i; // rax
  __int64 v6; // rdx
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp+8h] BYREF
  const char *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = (const char *)a2;
  if ( !*(_BYTE *)(*a1 + 184) )
  {
    v3 = (RTL_SRWLOCK *)(*a1 + 160);
    AcquireSRWLockExclusive(v3);
    v8 = v3;
    if ( (unsigned int)dword_18024E248 > 5 )
    {
      v9 = "AmbientServerDisconnected";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)&dword_18024E248,
        (__int64)&unk_1802133A5,
        0LL,
        0LL,
        (const unsigned __int16 **)&v9);
    }
    v4 = (_QWORD *)(*a1 + 72);
    for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
    {
      v6 = i[2];
      *(_DWORD *)(v6 + 216) = 0;
      *(_DWORD *)(v6 + 220) = 0;
      *(_BYTE *)(v6 + 224) = 0;
    }
    QueueUserAPC(LampArrayRawInputProvider::AmbientUpdateAPC, *(HANDLE *)(*a1 + 176), *a1);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v8);
  }
  return 0LL;
}
