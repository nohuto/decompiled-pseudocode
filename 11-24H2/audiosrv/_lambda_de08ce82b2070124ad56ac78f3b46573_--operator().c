/*
 * XREFs of _lambda_de08ce82b2070124ad56ac78f3b46573_::operator() @ 0x18010A7DC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_de08ce82b2070124ad56ac78f3b46573__void_::_Do_call @ 0x18010B040 (std--_Func_impl_no_alloc__lambda_de08ce82b2070124ad56ac78f3b46573__void_--_Do_call.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180001598 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_de08ce82b2070124ad56ac78f3b46573_::operator()(int *a1)
{
  _DWORD *v2; // rcx
  __int64 v3; // rbx
  int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r9
  const WCHAR **v7; // rax
  const WCHAR *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 *v11; // rax
  int v12; // [rsp+40h] [rbp+8h] BYREF
  const WCHAR *v13; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+18h] BYREF

  v2 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  v3 = 0LL;
  if ( *v2 > 4u && tlgKeywordOn((__int64)v2, 32LL) )
  {
    v7 = (const WCHAR **)*((_QWORD *)a1 + 1);
    if ( v7 )
      v8 = *v7;
    else
      v8 = 0LL;
    v13 = v8;
    v12 = *a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v4,
      (int)&unk_1801AD6E0,
      v5,
      v6,
      (__int64)&v12,
      &v13);
  }
  v9 = (__int64 *)*((_QWORD *)a1 + 1);
  if ( v9 )
    v10 = *v9;
  else
    v10 = 0LL;
  (*(void (__fastcall **)(char *, struct _RTL_CRITICAL_SECTION **, __int64))(*((_QWORD *)g_PolicyConfig + 1) + 24LL))(
    (char *)g_PolicyConfig + 8,
    &v14,
    v10);
  v11 = (__int64 *)*((_QWORD *)a1 + 1);
  if ( v11 )
    v3 = *v11;
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)g_PolicyConfig + 1) + 32LL))((char *)g_PolicyConfig + 8, v3);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
}
