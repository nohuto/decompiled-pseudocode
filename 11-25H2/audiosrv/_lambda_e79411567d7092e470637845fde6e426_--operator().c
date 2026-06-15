/*
 * XREFs of _lambda_e79411567d7092e470637845fde6e426_::operator() @ 0x18007CDB4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e79411567d7092e470637845fde6e426__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x180082690 (std--_Func_impl_no_alloc__lambda_e79411567d7092e470637845fde6e426__long_wil--com_ptr_t_CEndpoint.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180041978 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_e79411567d7092e470637845fde6e426_::operator()(_DWORD **a1, __int64 a2)
{
  __int64 v4; // rax
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rcx
  struct AudioSrvTelemetryProvider *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  const WCHAR *v11; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = std::wstring::c_str(*(_QWORD *)a2 + 16LL);
  if ( (unsigned int)GetSessionIdFromEndpointId(v4) == **a1 )
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)a2 + 112LL);
    EnterCriticalSection(v5);
    v12 = v5;
    v6 = *(_QWORD *)(*(_QWORD *)a2 + 152LL);
    if ( v6 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6) != *a1[1] )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a2 + 152LL) + 264LL))(*(_QWORD *)(*(_QWORD *)a2 + 152LL));
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)a2 + 152LL));
        v7 = AudioSrvTelemetryProvider::Instance();
        if ( **((_DWORD **)v7 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v7 + 1), 2LL) )
        {
          v11 = (const WCHAR *)std::wstring::c_str(*(_QWORD *)a2 + 16LL);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
            v8,
            byte_1801A330D,
            v8,
            v9,
            &v11);
        }
      }
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v12);
  }
  return 0LL;
}
