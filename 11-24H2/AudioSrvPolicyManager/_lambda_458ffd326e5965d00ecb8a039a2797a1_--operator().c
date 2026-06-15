/*
 * XREFs of _lambda_458ffd326e5965d00ecb8a039a2797a1_::operator() @ 0x18003DA5C
 * Callers:
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18003F7E8 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18000D6B0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionMayBeDeleted@@YA_NPEAVTSSession@@@Z @ 0x18001AC84 (-TsSessionMayBeDeleted@@YA_NPEAVTSSession@@@Z.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18003CB08 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@st.c)
 *     ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18003D784 (--1_Flist_node_remove_op@-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil.c)
 */

__int64 __fastcall lambda_458ffd326e5965d00ecb8a039a2797a1_::operator()(__int64 **a1)
{
  __int64 *v1; // rax
  int v3; // eax
  unsigned int v4; // ebx
  __int64 *v6; // rax
  struct TSSession *v7; // rbx
  __int64 v8; // r9
  __int64 **v9; // rcx
  __int64 *v10; // rax
  __int64 *v11; // r8
  __int64 *v12; // rax
  __int64 v13; // rcx
  char *v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  __int64 *v16; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  struct TSSession *v18; // [rsp+50h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+58h] [rbp+18h] BYREF

  v1 = *a1;
  v18 = 0LL;
  v3 = TsSessionFromSessionId(*(_DWORD *)(*v1 + 164), 0, &v18);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = *a1;
    v7 = v18;
    v15 = 0LL;
    v8 = *v6;
    v9 = (__int64 **)((char *)v18 + 40);
    v16 = &v15;
    v10 = (__int64 *)*((_QWORD *)v18 + 5);
    v14 = (char *)v18 + 40;
    while ( v10 )
    {
      if ( v10[1] == v8 )
      {
        v11 = *v9;
        v10 = (__int64 *)**v9;
        *v11 = 0LL;
        *v9 = v10;
        *v16 = (__int64)v11;
        v16 = v11;
      }
      else
      {
        v9 = (__int64 **)v10;
        v10 = (__int64 *)*v10;
      }
    }
    std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v14);
    if ( TsSessionMayBeDeleted(v7) )
    {
      EnterCriticalSection(&stru_180064A78);
      v12 = *a1;
      v19 = &stru_180064A78;
      v13 = *v12;
      LODWORD(v18) = *(_DWORD *)(*v12 + 164);
      std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Erase<unsigned long>(
        v13,
        (__int64)&v18);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x589,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
