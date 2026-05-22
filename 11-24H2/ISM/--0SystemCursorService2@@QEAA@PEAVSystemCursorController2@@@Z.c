/*
 * XREFs of ??0SystemCursorService2@@QEAA@PEAVSystemCursorController2@@@Z @ 0x1800F8E20
 * Callers:
 *     ??$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA?AV?$shared_ptr@VSystemCursorService2@@@0@$$QEAPEAVSystemCursorController2@@@Z @ 0x1800F62C4 (--$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA-AV-$shared_ptr@VSyst.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000D380 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18006E668 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??0?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA@XZ @ 0x1800A69A8 (--0-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 *     ??0?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursorShape2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape2@@@std@@@std@@@1@@Z @ 0x1800F8CCC (--0-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursorShape2@@@std@@V-$_Uhash_compare@_KU-$has.c)
 */

// Hidden C++ exception states: #wind=7
SystemCursorService2 *__fastcall SystemCursorService2::SystemCursorService2(
        SystemCursorService2 *this,
        struct SystemCursorController2 *a2)
{
  char *v3; // rbx
  size_t size_of; // rax
  _QWORD *v5; // rax
  char *v7; // [rsp+38h] [rbp+10h] BYREF

  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &SystemCursorService2::`vftable'{for `ICursorManagerClient'};
  *((_QWORD *)this + 1) = &SystemCursorService2::`vftable'{for `SystemCursorServiceBase'};
  *((_QWORD *)this + 6) = 0LL;
  v3 = (char *)this + 56;
  v7 = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v5 = v5;
  v5[1] = v5;
  *((_QWORD *)v3 + 1) = v5;
  *((_QWORD *)v3 + 3) = 0LL;
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)v3 + 6) = 7LL;
  *((_QWORD *)v3 + 7) = 8LL;
  *(_DWORD *)v3 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)(v3 + 24),
    0x10uLL,
    *((_QWORD *)v3 + 1));
  v7 = (char *)this + 120;
  LODWORD(v7) = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape2>>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape2>>>,0>>(
    (__int64)this + 120,
    &v7);
  std::unordered_map<unsigned __int64,unsigned __int64>::unordered_map<unsigned __int64,unsigned __int64>((__int64)this + 184);
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  return this;
}
