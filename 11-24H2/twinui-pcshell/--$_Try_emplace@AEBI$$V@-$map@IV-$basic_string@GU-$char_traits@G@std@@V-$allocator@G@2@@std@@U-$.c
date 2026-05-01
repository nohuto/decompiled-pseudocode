/*
 * XREFs of ??$_Try_emplace@AEBI$$V@?$map@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18014036C
 * Callers:
 *     ?LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z @ 0x18014002C (-LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z.c)
 *     ?OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x18014B260 (-OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x1804872D4 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18006B894 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18022E1C4 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@1@V-$tuple@$$V@1@@-$_Tree_temp_no_ea_18022E1C4.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180319DF4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1804855EC (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@s.c)
 */

__int64 __fastcall std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>(
        __int64 **a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int a4)
{
  __int64 *v6; // rcx
  __int64 *v7; // rdx
  __int64 *v8; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  _BYTE v12[16]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  unsigned int *v14; // [rsp+70h] [rbp+10h] BYREF

  v6 = *a1;
  v7 = v6;
  v8 = (__int64 *)v6[1];
  v13 = (unsigned __int64)v8;
  if ( !*((_BYTE *)v8 + 25) )
  {
    a4 = *a3;
    do
    {
      *(_QWORD *)&v13 = v8;
      if ( *((_DWORD *)v8 + 8) < a4 )
      {
        DWORD2(v13) = 0;
        v8 = (__int64 *)v8[2];
      }
      else
      {
        v7 = v8;
        DWORD2(v13) = 1;
        v8 = (__int64 *)*v8;
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
  }
  if ( *((_BYTE *)v7 + 25) || *a3 < *((_DWORD *)v7 + 8) )
  {
    if ( a1[1] == (__int64 *)0x38E38E38E38E38ELL )
      std::_Throw_tree_length_error();
    v14 = a3;
    v10 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::wstring>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::wstring>,void *>>>(
            (unsigned int)v12,
            (_DWORD)a1,
            (_DWORD)v6,
            a4,
            (__int64)&v14);
    v11 = *(_QWORD *)(v10 + 8);
    *(_QWORD *)(v10 + 8) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::wstring>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::wstring>,void *>>>(v12);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      a1,
                      (__int64)&v13,
                      v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
