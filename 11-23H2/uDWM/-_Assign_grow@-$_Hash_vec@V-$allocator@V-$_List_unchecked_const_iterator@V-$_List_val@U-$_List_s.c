/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800F1FAC
 * Callers:
 *     ??0?$_Hash@V?$_Uset_traits@Ubase_class_id@detail@traits@cereal@@V?$_Uhash_compare@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@@std@@V?$allocator@Ubase_class_id@detail@traits@cereal@@@6@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@@1@AEBV?$allocator@Ubase_class_id@detail@traits@cereal@@@1@@Z @ 0x1800F05D0 (--0-$_Hash@V-$_Uset_traits@Ubase_class_id@detail@traits@cereal@@V-$_Uhash_compare@Ubase_class_id.c)
 *     ??0?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@_K@1@@Z @ 0x1800F066C (--0-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18001D1B4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180032448 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::_Assign_grow(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 size_of; // rax
  unsigned __int64 *v9; // rdi
  unsigned __int64 *result; // rax
  unsigned __int64 v11; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  v6 = v3 - *(_QWORD *)a1;
  v7 = v6 >> 3;
  if ( (unsigned __int64)(v6 >> 3) >= 0x10 )
  {
    result = 0LL;
    v11 = (unsigned __int64)(v6 + 7) >> 3;
    if ( *(_QWORD *)a1 > v3 )
      v11 = 0LL;
    if ( v11 )
    {
      result = (unsigned __int64 *)a3;
      memset64(*(void **)a1, a3, v11);
    }
  }
  else
  {
    size_of = std::_Get_size_of_n<8>(0x10uLL);
    v9 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    if ( v7 )
      std::_Deallocate<16,0>(*(void **)a1, 8 * v7);
    result = v9 + 16;
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = v9 + 16;
    *(_QWORD *)(a1 + 16) = v9 + 16;
    while ( v9 != result )
      *v9++ = a3;
  }
  return result;
}
