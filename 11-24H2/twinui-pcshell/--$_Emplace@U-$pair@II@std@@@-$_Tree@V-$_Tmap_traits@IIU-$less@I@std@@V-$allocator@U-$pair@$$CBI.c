/*
 * XREFs of ??$_Emplace@U?$pair@II@std@@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@_N@1@$$QEAU?$pair@II@1@@Z @ 0x1805BCE68
 * Callers:
 *     ?BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ @ 0x1805BD6C8 (-BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18006B894 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18029DDCC (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@V-$com_ptr_t@UIApplicationView@@Uerr_except.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180319DF4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@1@@Z @ 0x1805BD630 (--0-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@$$CBII@std@@PEAX@std@@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,1>>::_Emplace<std::pair<unsigned int,unsigned int>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 *v9; // rcx
  unsigned int v10; // eax
  char v12[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+28h] [rbp-28h]
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF

  v6 = *a1;
  std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *>>>(
    v12,
    a1);
  v7 = v13;
  *(_DWORD *)(v13 + 28) = *a3;
  *(_DWORD *)(v7 + 32) = a3[1];
  *(_QWORD *)v13 = v6;
  *(_QWORD *)(v13 + 8) = v6;
  *(_QWORD *)(v13 + 16) = v6;
  *(_BYTE *)(v13 + 24) = 0;
  *(_BYTE *)(v13 + 25) = 0;
  v8 = v13;
  v9 = *(__int64 **)(*a1 + 8LL);
  v14 = (unsigned __int64)v9;
  if ( !*((_BYTE *)v9 + 25) )
  {
    v10 = *(_DWORD *)(v13 + 28);
    do
    {
      *(_QWORD *)&v14 = v9;
      if ( v10 >= *((_DWORD *)v9 + 7) )
      {
        DWORD2(v14) = 0;
        v9 = (__int64 *)v9[2];
      }
      else
      {
        DWORD2(v14) = 1;
        v9 = (__int64 *)*v9;
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
  }
  if ( a1[1] == 0x666666666666666LL )
    std::_Throw_tree_length_error();
  v13 = 0LL;
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>((__int64)v12);
  *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                    a1,
                    (__int64)&v14,
                    v8);
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
