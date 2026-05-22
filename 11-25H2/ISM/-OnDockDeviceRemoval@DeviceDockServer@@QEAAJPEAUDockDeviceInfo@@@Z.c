/*
 * XREFs of ?OnDockDeviceRemoval@DeviceDockServer@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x18017E308
 * Callers:
 *     ?OnDeviceRemoval@DockProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801B0880 (-OnDeviceRemoval@DockProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180032A18 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$list@V-$shared_ptr@UHotKeyInfo@@@std.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180032CB0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1800B48F8 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18017D2F0 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$com_ptr_t@VBamoDockableDevicePrincipal@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DeviceDockServer::OnDockDeviceRemoval(DeviceDockServer *this, struct DockDeviceInfo *a2)
{
  __int64 **v2; // r14
  const char *v4; // r9
  __int64 *v5; // rbx
  __int64 v6; // rbp
  __int64 i; // rdi
  int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r9
  __int64 *v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v19; // [rsp+48h] [rbp+10h] BYREF

  v2 = (__int64 **)((char *)this + 104);
  LODWORD(v18) = *(_DWORD *)a2;
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::find(
    (__int64 *)this + 13,
    (__int64)&v19,
    &v18);
  v5 = v19;
  if ( v19 == *v2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x72,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
      v4);
  v6 = *((_QWORD *)this + 8);
  for ( i = *((_QWORD *)this + 7); i != v6; i += 8LL )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)i + 8LL) + 32LL))(
           *(_QWORD *)i + 8LL,
           *((unsigned int *)v5 + 8));
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x79,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v8);
  }
  v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Extract(
         v2,
         v5);
  std::_Tree_node<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>,void *>>>(
    v10,
    (__int64)v9);
  v13 = **((_QWORD **)this + 15);
LABEL_9:
  v18 = v13;
  while ( v13 != *((_QWORD *)this + 15) )
  {
    if ( *(_DWORD *)(v13 + 32) == *((_DWORD *)v5 + 8) )
    {
      v18 = v13;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(
        &v18,
        v11,
        v12,
        v13);
      v15 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Extract(
              (__int64 **)this + 15,
              v14);
      std::_Deallocate<16,0>((char *)v15, (const struct std::nothrow_t *)0x90);
      v13 = v18;
      goto LABEL_9;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(
      &v18,
      v11,
      v12,
      v13);
    v13 = v18;
  }
  return 0LL;
}
