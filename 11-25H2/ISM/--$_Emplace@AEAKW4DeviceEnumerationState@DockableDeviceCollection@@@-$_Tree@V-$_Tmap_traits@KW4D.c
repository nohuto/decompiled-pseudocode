/*
 * XREFs of ??$_Emplace@AEAKW4DeviceEnumerationState@DockableDeviceCollection@@@?$_Tree@V?$_Tmap_traits@KW4DeviceEnumerationState@DockableDeviceCollection@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@PEAX@std@@_N@1@AEAK$$QEAW4DeviceEnumerationState@DockableDeviceCollection@@@Z @ 0x1800DAC4C
 * Callers:
 *     ?OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DB600 (-OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180032EAC (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$set@V-$shared_ptr@UHotKeyInfo@@.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800681FC (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@U-$pair@$$CBKUUsageList@MobileButtonDeviceC.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18006E8D8 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800B39D4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@KPEAX@std@@@1@AEBK@Z @ 0x1800D0000 (--$_Find_lower_bound@K@-$_Tree@V-$_Tset_traits@KU-$less@K@std@@V-$allocator@K@2@$0A@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,enum DockableDeviceCollection::DeviceEnumerationState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum DockableDeviceCollection::DeviceEnumerationState>>,0>>::_Emplace<unsigned long &,enum DockableDeviceCollection::DeviceEnumerationState>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4)
{
  _QWORD *lower; // rax
  _DWORD *v9; // r8
  __int128 v10; // xmm6
  __int64 v11; // rdi
  size_t size_of; // rax
  _DWORD *v13; // rbx
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]

  lower = std::_Tree<std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0>>::_Find_lower_bound<unsigned long>(
            a1,
            &v15,
            a3);
  v10 = *(_OWORD *)lower;
  v16 = lower[2];
  if ( *(_BYTE *)(v16 + 25) || *v9 < *(_DWORD *)(v16 + 28) )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::_Throw_tree_length_error();
    v11 = *a1;
    v15 = (unsigned __int64)a1;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v13[7] = *a3;
    v13[8] = *a4;
    *(_QWORD *)v13 = v11;
    *((_QWORD *)v13 + 1) = v11;
    *((_QWORD *)v13 + 2) = v11;
    *((_WORD *)v13 + 12) = 0;
    *((_QWORD *)&v15 + 1) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,MobileButtonDeviceCollection::UsageList>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,MobileButtonDeviceCollection::UsageList>,void *>>>((__int64)&v15);
    v15 = v10;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v15,
                      (__int64)v13);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v16;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
