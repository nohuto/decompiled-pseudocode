/*
 * XREFs of ??$_Emplace@AEBUDockInputIdentity@@AEAUtagRECT@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@AEAUtagRECT@@@Z @ 0x18017EB88
 * Callers:
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18017FFF4 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18004E104 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$set@V-$shared_ptr@UHotKeyInfo@@.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009BA80 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800B1794 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBUDockInputIdentity@@AEAUtagRECT@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@1@AEBUDockInputIdentity@@AEAUtagRECT@@@Z @ 0x18017E884 (--$-0AEBUDockInputIdentity@@AEAUtagRECT@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$.c)
 *     ??$_Find_lower_bound@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@@1@AEBUDockInputIdentity@@@Z @ 0x18017EE50 (--$_Find_lower_bound@UDockInputIdentity@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UtagRECT@@.c)
 *     ??$_Lower_bound_duplicate@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@1@AEBUDockInputIdentity@@@Z @ 0x18017EEEC (--$_Lower_bound_duplicate@UDockInputIdentity@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@_KU-$.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Emplace<DockInputIdentity const &,tagRECT &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4)
{
  __int64 lower; // rax
  __int128 v8; // xmm6
  __int64 v9; // rcx
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // r11
  _QWORD *v13; // rax
  __int64 v14; // rbx
  _QWORD v16[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]

  lower = std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Find_lower_bound<DockInputIdentity>(
            a1,
            &v17);
  v8 = *(_OWORD *)lower;
  v18 = *(_QWORD *)(lower + 16);
  if ( (unsigned __int8)std::_Tree<std::_Tmap_traits<DockInputIdentity,unsigned __int64,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,unsigned __int64>>,0>>::_Lower_bound_duplicate<DockInputIdentity>(
                          v9,
                          v18,
                          v10) )
  {
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      std::_Throw_tree_length_error();
    v13 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,tagRECT>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,tagRECT>,void *>>>(
            v16,
            (__int64)a1,
            *a1,
            v12,
            a4);
    v14 = v13[1];
    v13[1] = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>,void *>>>((__int64)v16);
    v17 = v8;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v17,
                      v14);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
