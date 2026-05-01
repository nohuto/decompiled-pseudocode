/*
 * XREFs of ??$_Emplace@U?$pair@IH@std@@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@_N@1@$$QEAU?$pair@IH@1@@Z @ 0x1805BCDA0
 * Callers:
 *     ?BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ @ 0x1805BD6C8 (-BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18006B894 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18029DDCC (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@V-$com_ptr_t@UIApplicationView@@Uerr_except.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180319DF4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0U?$pair@IH@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@$$QEAU?$pair@IH@1@@Z @ 0x1805BCCF8 (--$-0U-$pair@IH@std@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBII@std@@PEAX@std@.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@1@AEBI@Z @ 0x1805BD190 (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBII@std@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Emplace<std::pair<unsigned int,int>>(
        __int64 *a1,
        __int64 a2)
{
  __int64 lower; // rax
  _DWORD *v5; // r8
  __int128 v6; // xmm6
  __int64 v7; // rax
  __int64 v8; // rbx
  _BYTE v10[16]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]

  lower = std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Find_lower_bound<unsigned int>(
            a1,
            &v11);
  v6 = *(_OWORD *)lower;
  v12 = *(_QWORD *)(lower + 16);
  if ( *(_BYTE *)(v12 + 25) || *v5 < *(_DWORD *)(v12 + 28) )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::_Throw_tree_length_error();
    v7 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *>>>(
           (__int64)v10,
           (__int64)a1,
           *a1,
           v5);
    v8 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(v7 + 8) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>((__int64)v10);
    v11 = v6;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      a1,
                      (__int64)&v11,
                      v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
