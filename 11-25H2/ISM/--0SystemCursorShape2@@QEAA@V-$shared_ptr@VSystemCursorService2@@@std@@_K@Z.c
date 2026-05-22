/*
 * XREFs of ??0SystemCursorShape2@@QEAA@V?$shared_ptr@VSystemCursorService2@@@std@@_K@Z @ 0x1800F7244
 * Callers:
 *     ??$make_shared@VSystemCursorShape2@@V?$shared_ptr@VSystemCursorService2@@@std@@AEA_K@std@@YA?AV?$shared_ptr@VSystemCursorShape2@@@0@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@AEA_K@Z @ 0x1800F6E84 (--$make_shared@VSystemCursorShape2@@V-$shared_ptr@VSystemCursorService2@@@std@@AEA_K@std@@YA-AV-.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000CC20 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18006E8D8 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$?0VSystemCursorService2@@$0A@@?$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV?$shared_ptr@VSystemCursorService2@@@1@@Z @ 0x1800F4210 (--$-0VSystemCursorService2@@$0A@@-$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall SystemCursorShape2::SystemCursorShape2(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  size_t size_of; // rax
  _QWORD *v9; // rax
  std::_Ref_count_base *v10; // rcx

  std::weak_ptr<SystemCursorService2>::weak_ptr<SystemCursorService2>(a1, a2);
  v7 = v6 + 16;
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 24) = 0LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v9 = v9;
  v9[1] = v9;
  *(_QWORD *)(v7 + 8) = v9;
  *(_QWORD *)(v7 + 24) = 0LL;
  *(_QWORD *)(v7 + 32) = 0LL;
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 48) = 7LL;
  *(_QWORD *)(v7 + 56) = 8LL;
  *(_DWORD *)v7 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    v7 + 24,
    0x10uLL,
    *(_QWORD *)(v7 + 8));
  a1[10] = a3;
  v10 = (std::_Ref_count_base *)a2[1];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return a1;
}
