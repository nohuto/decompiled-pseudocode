/*
 * XREFs of ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x18003DFC8
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180018290 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@1@AEBUtagMsgRoutingInfo@@@Z @ 0x18003EDC0 (--$find@X@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V-$_Uhash_compare@UtagMs.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x180053230 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUI.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputRouter::CreateAndRegisterTarget(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  int v18; // [rsp+20h] [rbp-50h]
  __int64 v19[2]; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v20[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v19[1] = (__int64)a3;
  if ( *(_QWORD *)std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::find<void>(
                    a1 + 88,
                    v19,
                    a2) == *(_QWORD *)(a1 + 96) )
  {
    v8 = *(_QWORD *)(a1 + 56);
    v20[0] = *(_OWORD *)a2;
    v20[1] = *(_OWORD *)(a2 + 16);
    v21 = *(_QWORD *)(a2 + 32);
    v9 = (*(__int64 (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD))(v8 + 24))(a1 + 56, v20, 0LL, 0LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F4,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v9,
        v18);
      v11 = *a3;
      if ( *a3 )
      {
        *a3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      return v10;
    }
  }
  if ( !*a3 )
  {
    std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::find<void>(
      a1 + 88,
      v19,
      a2);
    if ( v19[0] == *(_QWORD *)(a1 + 96) )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x400,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)0x80004005LL,
        v18);
    v13 = *(_QWORD *)(v19[0] + 56);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    *a4 = v13;
    goto LABEL_10;
  }
  v19[0] = *a3;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v19);
  v15 = DWMInputTarget::Create(a2, v19, a4);
  v16 = v15;
  if ( v15 >= 0 )
  {
LABEL_10:
    v14 = *a3;
    if ( *a3 )
    {
      *a3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x412,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
    (const char *)(unsigned int)v15,
    v18);
  v17 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v16;
}
