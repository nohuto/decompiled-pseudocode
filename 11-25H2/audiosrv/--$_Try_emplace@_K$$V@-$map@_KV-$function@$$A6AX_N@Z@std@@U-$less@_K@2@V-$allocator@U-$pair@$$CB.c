/*
 * XREFs of ??$_Try_emplace@_K$$V@?$map@_KV?$function@$$A6AX_N@Z@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@_N@1@$$QEA_K@Z @ 0x1800D3040
 * Callers:
 *     ?RegisterCallback@CBtAudioResourceManagerBase@@UEAAJV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x1800DA310 (-RegisterCallback@CBtAudioResourceManagerBase@@UEAAJV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002203C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$construct@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@AEBUpiecewise_construct_t@2@V?$tuple@$$QEA_K@2@V?$tuple@$$V@2@@?$_Default_allocator_traits@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@1@QEAU?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEA_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800D321C (--$construct@U-$pair@$$CB_KV-$function@$$A6AX_N@Z@std@@@std@@AEBUpiecewise_construct_t@2@V-$tupl.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800D3560 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$function@$$A6AX_N@Z@std@@@std@@.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800DD67C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800DD8A0 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<unsigned __int64,std::function<void (bool)>>::_Try_emplace<unsigned __int64,>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v5; // r14
  __int64 *v6; // rax
  __int64 *v7; // rdx
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h]
  unsigned __int64 *v15; // [rsp+80h] [rbp+20h] BYREF

  v5 = (__int64 *)*a1;
  v6 = *(__int64 **)(*a1 + 8LL);
  v14 = (unsigned __int64)v6;
  v7 = v5;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v8 = *a3;
    do
    {
      *(_QWORD *)&v14 = v6;
      if ( v6[4] >= v8 )
      {
        DWORD2(v14) = 1;
        v7 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        DWORD2(v14) = 0;
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( *((_BYTE *)v7 + 25) || *a3 < v7[4] )
  {
    if ( a1[1] == 0x276276276276276LL )
      std::_Throw_tree_length_error();
    v15 = a3;
    *(_QWORD *)&v13 = a1;
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x68uLL);
    std::_Default_allocator_traits<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::function<void (bool)>>,void *>>>::construct<std::pair<unsigned __int64 const,std::function<void (bool)>>,std::piecewise_construct_t const &,std::tuple<unsigned __int64 &&>,std::tuple<>>(
      v10,
      v9 + 4,
      v11,
      &v15);
    *v9 = v5;
    v9[1] = v5;
    v9[2] = v5;
    *((_WORD *)v9 + 12) = 0;
    *((_QWORD *)&v13 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::function<void (bool)>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::function<void (bool)>>,void *>>>(&v13);
    v13 = v14;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,APPLICATION_REF_DATA>>>::_Insert_node(
                      a1,
                      &v13,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
