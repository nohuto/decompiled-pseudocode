/*
 * XREFs of ??$_Construct_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1805851AC
 * Callers:
 *     ??0?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180585854 (--0-$list@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_st.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800D519C (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18022F59C (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@.c)
 *     ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1805850C4 (--$_Append_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List__ea_1805850C4.c)
 *     ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180585A78 (--1-$_List_node_insert_op2@V-$allocator@U-$_List_node@V-$basic_string@GU-$char_traits@G@std@@V-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::list<std::wstring>::_Construct_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  size_t size_of; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h]
  _QWORD *v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h]
  __int128 v15; // [rsp+40h] [rbp-10h]

  v13 = a1;
  v14 = 0LL;
  v15 = 0LL;
  std::_List_node_insert_op2<std::allocator<std::_List_node<std::wstring,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>>(
    (__int64 *)&v13,
    a2,
    a3);
  v11 = (__int64)v13;
  v12 = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v6 = v5;
  v7 = v14;
  v14 = 0LL;
  if ( v7 )
  {
    v8 = *((_QWORD *)&v15 + 1);
    *v5 = *((_QWORD *)&v15 + 1);
    v9 = (_QWORD *)v15;
    v6[1] = v15;
    *(_QWORD *)(v8 + 8) = v6;
    *v9 = v6;
  }
  else
  {
    *v5 = v5;
    v5[1] = v5;
  }
  a1[1] = v7;
  v12 = 0LL;
  *a1 = v6;
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>((__int64)&v11);
  return std::_List_node_insert_op2<std::allocator<std::_List_node<std::wstring,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<std::wstring,void *>>>(&v13);
}
