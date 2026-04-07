/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBDI@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBDI@std@@@std@@@std@@@2@@Z @ 0x1800F2064
 * Callers:
 *     ??0?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z @ 0x1800F03D8 (--0-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@PEBDIV?$_Uhash_compare@PEBDU?$hash@PEBD@std@@U?$equal_to@PEBD@2@@std@@V?$allocator@U?$pair@QEBDI@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEBDU?$hash@PEBD@std@@U?$equal_to@PEBD@2@@1@AEBV?$allocator@U?$pair@QEBDI@std@@@1@@Z @ 0x1800F053C (--0-$_Hash@V-$_Umap_traits@PEBDIV-$_Uhash_compare@PEBDU-$hash@PEBD@std@@U-$equal_to@PEBD@2@@std@.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18001D1B4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180032448 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<char const * const,unsigned int>>>>>>::_Assign_grow(
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
