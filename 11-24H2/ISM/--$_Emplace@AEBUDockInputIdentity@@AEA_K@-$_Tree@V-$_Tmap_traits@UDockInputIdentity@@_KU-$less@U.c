/*
 * XREFs of ??$_Emplace@AEBUDockInputIdentity@@AEA_K@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@AEA_K@Z @ 0x180192214
 * Callers:
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x1801934E8 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18004E104 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$set@V-$shared_ptr@UHotKeyInfo@@.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180096C74 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@V-$list@UKeyEventData@V.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800B1794 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$_Find_lower_bound@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@@1@AEBUDockInputIdentity@@@Z @ 0x18017EE50 (--$_Find_lower_bound@UDockInputIdentity@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UtagRECT@@.c)
 *     ??$_Lower_bound_duplicate@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@1@AEBUDockInputIdentity@@@Z @ 0x18017EEEC (--$_Lower_bound_duplicate@UDockInputIdentity@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@_KU-$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,unsigned __int64,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,unsigned __int64>>,0>>::_Emplace<DockInputIdentity const &,unsigned __int64 &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *lower; // rax
  __int128 v9; // xmm6
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // rbx
  _OWORD *v13; // rdi
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]

  lower = std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Find_lower_bound<DockInputIdentity>(
            a1,
            &v15,
            a3);
  v9 = *(_OWORD *)lower;
  v16 = lower[2];
  if ( std::_Tree<std::_Tmap_traits<DockInputIdentity,unsigned __int64,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,unsigned __int64>>,0>>::_Lower_bound_duplicate<DockInputIdentity>(
         v10,
         v16,
         a3) )
  {
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( a1[1] == 0x3FFFFFFFFFFFFFFLL )
      std::_Throw_tree_length_error();
    v12 = *a1;
    v15 = (unsigned __int64)a1;
    v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
    v13[2] = *(_OWORD *)a3;
    *((_QWORD *)v13 + 6) = *(_QWORD *)(a3 + 16);
    *((_QWORD *)v13 + 7) = *a4;
    *(_QWORD *)v13 = v12;
    *((_QWORD *)v13 + 1) = v12;
    *((_QWORD *)v13 + 2) = v12;
    *((_WORD *)v13 + 12) = 0;
    *((_QWORD *)&v15 + 1) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>((__int64)&v15);
    v15 = v9;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v15,
                      (__int64)v13);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
