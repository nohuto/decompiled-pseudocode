/*
 * XREFs of ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z @ 0x18001C2D4
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180041340 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180041EA8 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x180042850 (-TsSessionIdTerminate@@YAJK@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?TsSessionMayBeDeleted@@YA_NPEAVTSSession@@@Z @ 0x18001AB54 (-TsSessionMayBeDeleted@@YA_NPEAVTSSession@@@Z.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18003F328 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@st.c)
 */

void __fastcall TsSessionUpdateAudioProtocol(struct TSSession *a1, int a2)
{
  int v2; // esi
  _QWORD *i; // rbx
  unsigned int *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v10[2]; // [rsp+28h] [rbp-40h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h]
  int v12; // [rsp+40h] [rbp-28h]
  int v13; // [rsp+44h] [rbp-24h]

  v2 = 0;
  if ( a2 != 0xFFFF && a2 )
    v2 = ++dword_180067C08;
  if ( *((_DWORD *)a1 + 1) != a2 || *((_DWORD *)a1 + 2) != v2 )
  {
    *((_DWORD *)a1 + 1) = a2;
    *((_DWORD *)a1 + 2) = v2;
    for ( i = (_QWORD *)*((_QWORD *)a1 + 2); i; i = (_QWORD *)*i )
    {
      v6 = (unsigned int *)i[1];
      v10[0] = 32;
      v11 = 0LL;
      v10[1] = 0x2000;
      v7 = *v6;
      v12 = a2;
      v13 = v2;
      GenerateMediaEvent(v10, v7);
    }
  }
  if ( TsSessionMayBeDeleted(a1) )
  {
    EnterCriticalSection(&stru_180067AF8);
    v9 = &stru_180067AF8;
    std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Erase<unsigned long>(
      v8,
      a1);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
  }
}
