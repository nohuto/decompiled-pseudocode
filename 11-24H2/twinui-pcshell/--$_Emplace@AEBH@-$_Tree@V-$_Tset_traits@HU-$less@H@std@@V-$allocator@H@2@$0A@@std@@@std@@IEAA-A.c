/*
 * XREFs of ??$_Emplace@AEBH@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@HPEAX@std@@_N@1@AEBH@Z @ 0x18061D618
 * Callers:
 *     ?AreValidFastPathEnabledStates@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x1806226AC (-AreValidFastPathEnabledStates@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18006B894 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18022F22C (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@_N@std@@PEAX@st.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180319DF4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBH@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@HPEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@HPEAX@std@@@1@PEAU?$_Tree_node@HPEAX@1@AEBH@Z @ 0x18061C518 (--$-0AEBH@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@HPEAX@std@@@std@@@std@@QEAA@AEAV-$allocat.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<int,std::less<int>,std::allocator<int>,0>>::_Emplace<int const &>(
        __int64 *a1,
        __int64 a2,
        int *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // r9d
  _QWORD *v9; // rax
  __int64 v10; // rbx
  _QWORD v12[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF

  v5 = *a1;
  v6 = v5;
  v7 = *(_QWORD *)(v5 + 8);
  v13 = (unsigned __int64)v7;
  if ( !*(_BYTE *)(v7 + 25) )
  {
    v8 = *a3;
    do
    {
      *(_QWORD *)&v13 = v7;
      if ( *(_DWORD *)(v7 + 28) >= v8 )
      {
        v6 = v7;
        DWORD2(v13) = 1;
        v7 = *(_QWORD *)v7;
      }
      else
      {
        DWORD2(v13) = 0;
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
  }
  if ( *(_BYTE *)(v6 + 25) || *a3 < *(_DWORD *)(v6 + 28) )
  {
    if ( a1[1] == 0x7FFFFFFFFFFFFFFLL )
      std::_Throw_tree_length_error();
    v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<int,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<int,void *>>>(
           v12,
           (__int64)a1,
           v5,
           a3);
    v10 = v9[1];
    v9[1] = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>((__int64)v12);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      a1,
                      (__int64)&v13,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
