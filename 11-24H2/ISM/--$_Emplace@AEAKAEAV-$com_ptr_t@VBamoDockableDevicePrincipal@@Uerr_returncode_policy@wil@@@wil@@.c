/*
 * XREFs of ??$_Emplace@AEAKAEAV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEAKAEAV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18017EA54
 * Callers:
 *     ?OnDockableDeviceArrival@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z @ 0x18018049C (-OnDockableDeviceArrival@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18004E104 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$set@V-$shared_ptr@UHotKeyInfo@@.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@1@AEBK@Z @ 0x18007E6A4 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUContactState@MagnifierRecognizer@@U-$less@K@std.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800B1794 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18017F150 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$com_ptr_t@VBamoDockableDevicePri.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>>,0>>::_Emplace<unsigned long &,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy> &>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        void (__fastcall ****a4)(_QWORD))
{
  __int64 v8; // r12
  _DWORD *v9; // r14
  _DWORD *v10; // rbp
  void (__fastcall ***v11)(_QWORD); // rcx
  _QWORD *lower; // rax
  __int128 v13; // xmm6
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]

  v8 = *a1;
  *(_QWORD *)&v15 = a1;
  v9 = operator new(0x30uLL);
  *((_QWORD *)&v15 + 1) = v9;
  v10 = v9 + 8;
  v9[8] = *a3;
  v11 = *a4;
  *((_QWORD *)v9 + 5) = *a4;
  if ( v11 )
    (**v11)(v11);
  *(_QWORD *)v9 = v8;
  *((_QWORD *)v9 + 1) = v8;
  *((_QWORD *)v9 + 2) = v8;
  *((_WORD *)v9 + 12) = 0;
  lower = std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Find_lower_bound<unsigned long>(
            a1,
            &v16,
            v10);
  v13 = *(_OWORD *)lower;
  v17 = lower[2];
  if ( *(_BYTE *)(v17 + 25) || *v10 < *(_DWORD *)(v17 + 32) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    *((_QWORD *)&v15 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>,void *>>>(&v15);
    v15 = v13;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v15,
                      (__int64)v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v17;
    *(_BYTE *)(a2 + 8) = 0;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>,void *>>>(&v15);
  }
  return a2;
}
