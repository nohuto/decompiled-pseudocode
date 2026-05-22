/*
 * XREFs of ?ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z @ 0x1800B22F0
 * Callers:
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18009259C (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18007819C (--$_Emplace_reallocate@AEBV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@-$v.c)
 *     ??0?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800782B8 (--0-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800B1AD4 (--$_Try_emplace@AEBK$$V@-$map@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800B2574 (-erase@-$_Tree@V-$_Tmap_traits@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1800B26B8 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil.c)
 */

void __fastcall MPCGestureHandlerManager::ReturnGestureHandlerForWorkspaceToPool(
        MPCGestureHandlerManager *this,
        int a2)
{
  __int64 *v2; // rbx
  const char *v4; // r9
  const char *v5; // r9
  __int64 *v6; // r8
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = (__int64 *)((char *)this + 8);
  if ( *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::find(
                    (char *)this + 8,
                    &v9,
                    &v10) == *((_QWORD *)this + 1) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xCB,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      v4);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Try_emplace<unsigned long const &,>(
                                             v2,
                                             (__int64)v7,
                                             &v10)
                              + 40LL)
                  + 168LL) & 0xFFFFFF7F) != 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xCD,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      v5);
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Try_emplace<unsigned long const &,>(
                                       v2,
                                       (__int64)v7,
                                       &v10)
                        + 40LL)
            + 912LL) = 0;
  v6 = (__int64 *)(*(_QWORD *)std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Try_emplace<unsigned long const &,>(
                                v2,
                                (__int64)v7,
                                &v10)
                 + 40LL);
  if ( *((_QWORD *)this + 6) == *((_QWORD *)this + 7) )
  {
    std::vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy> const &>(
      (__int64 *)this + 5,
      *((_QWORD *)this + 6),
      (__int64)v6);
  }
  else
  {
    wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>(
      *((__int64 **)this + 6),
      v6);
    *((_QWORD *)this + 6) += 8LL;
  }
  std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::erase(
    v2,
    &v10);
}
