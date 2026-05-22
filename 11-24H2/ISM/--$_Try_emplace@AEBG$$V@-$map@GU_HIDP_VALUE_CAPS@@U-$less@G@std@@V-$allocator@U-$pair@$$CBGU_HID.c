/*
 * XREFs of ??$_Try_emplace@AEBG$$V@?$map@GU_HIDP_VALUE_CAPS@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@_N@1@AEBG@Z @ 0x180199874
 * Callers:
 *     ?QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ @ 0x180199EC8 (-QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ.c)
 * Callees:
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009BAA4 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@s.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800B1794 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CAFA0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$cha_ea_1800CAFA0.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBG@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBG@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801990F8 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBG@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$allocat.c)
 */

__int64 __fastcall std::map<unsigned short,_HIDP_VALUE_CAPS>::_Try_emplace<unsigned short const &,>(
        __int64 *a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rbx
  _QWORD v12[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  _WORD *v14; // [rsp+70h] [rbp+10h] BYREF

  v6 = *a1;
  v7 = v6;
  v8 = *(_QWORD *)(v6 + 8);
  v13 = (unsigned __int64)v8;
  if ( !*(_BYTE *)(v8 + 25) )
  {
    a4 = (unsigned __int16)*a3;
    do
    {
      *(_QWORD *)&v13 = v8;
      if ( *(_WORD *)(v8 + 28) >= (unsigned __int16)a4 )
      {
        v7 = v8;
        DWORD2(v13) = 1;
        v8 = *(_QWORD *)v8;
      }
      else
      {
        DWORD2(v13) = 0;
        v8 = *(_QWORD *)(v8 + 16);
      }
    }
    while ( !*(_BYTE *)(v8 + 25) );
  }
  if ( *(_BYTE *)(v7 + 25) || *a3 < *(_WORD *)(v7 + 28) )
  {
    if ( a1[1] == 0x276276276276276LL )
      std::_Throw_tree_length_error();
    v14 = a3;
    v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned short const,_HIDP_VALUE_CAPS>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned short const,_HIDP_VALUE_CAPS>,void *>>>(
           v12,
           (__int64)a1,
           v6,
           a4,
           &v14);
    v10 = v9[1];
    v9[1] = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *>>>((__int64)v12);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>::_Insert_node(
                      a1,
                      (__int64)&v13,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
