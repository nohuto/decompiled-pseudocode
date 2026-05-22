/*
 * XREFs of ?OnDockDeviceRemoval@DeviceDockServer@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x18017FED8
 * Callers:
 *     ?OnDeviceRemoval@DockProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801B7E10 (-OnDeviceRemoval@DockProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18004DC70 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$list@V-$shared_ptr@UHotKeyInfo@@@std.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18004DF08 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1800B26B8 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18017EEC0 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$com_ptr_t@VBamoDockableDevicePrincipal@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DeviceDockServer::OnDockDeviceRemoval(DeviceDockServer *this, struct DockDeviceInfo *a2)
{
  __int64 **v2; // r14
  const char *v4; // r9
  __int64 *v5; // rbx
  unsigned int v6; // r15d
  __int64 v7; // rbp
  __int64 i; // rdi
  int v9; // eax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // r9
  __int64 *v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v2 = (__int64 **)((char *)this + 104);
  LODWORD(v19) = *(_DWORD *)a2;
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::find(
    (__int64 *)this + 13,
    (__int64)&v20,
    &v19);
  v5 = (__int64 *)v20;
  if ( (__int64 *)v20 == *v2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x72,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
      v4);
  v6 = *(_DWORD *)(v20 + 32);
  v7 = *((_QWORD *)this + 8);
  for ( i = *((_QWORD *)this + 7); i != v7; i += 8LL )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)i + 8LL) + 32LL))(*(_QWORD *)i + 8LL, v6);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x79,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v9);
  }
  v10 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Extract(
          v2,
          v5);
  std::_Tree_node<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>,void *>>>(
    v11,
    (__int64)v10);
  v14 = **((_QWORD **)this + 15);
LABEL_9:
  v19 = v14;
  while ( v14 != *((_QWORD *)this + 15) )
  {
    if ( *(_DWORD *)(v14 + 32) == v6 )
    {
      v19 = v14;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
        &v19,
        v12,
        v13,
        v14);
      v16 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Extract(
              (__int64 **)this + 15,
              v15);
      std::_Deallocate<16,0>((char *)v16, (const struct std::nothrow_t *)0x90);
      v14 = v19;
      goto LABEL_9;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
      &v19,
      v12,
      v13,
      v14);
    v14 = v19;
  }
  return 0LL;
}
