/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@std@@@std@@@2@@Z @ 0x1802C8E44
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IVCDDisplayFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1802C8F8C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IVCDDisplayFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@s.c)
 *     ??0?$unordered_map@IVCDDisplayFlipAwayFence@@U?$hash@I@std@@U?$equal_to@I@3@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@@std@@QEAA@XZ @ 0x1802CA498 (--0-$unordered_map@IVCDDisplayFlipAwayFence@@U-$hash@I@std@@U-$equal_to@I@3@V-$allocator@U-$pair.c)
 *     ??0?$unordered_map@IVCFlipAwayFence@@U?$hash@I@std@@U?$equal_to@I@3@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@@std@@QEAA@XZ @ 0x1802D29F0 (--0-$unordered_map@IVCFlipAwayFence@@U-$hash@I@std@@U-$equal_to@I@3@V-$allocator@U-$pair@$$CBIVC.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1802D32E0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$e.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18006BB80 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x1802C76C0 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIVCDDispla.c)
 */

unsigned __int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,CDDisplayFlipAwayFence>>>>>>::_Assign_grow(
        unsigned __int64 **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  SIZE_T size_of; // rax
  unsigned __int64 *v7; // rdi
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  if ( a1[1] - *a1 >= a2 )
    return std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,CDDisplayFlipAwayFence>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,CDDisplayFlipAwayFence>>>>>(
             *a1,
             a1[1],
             &v10);
  size_of = std::_Get_size_of_n<8>(a2);
  v7 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v8 = a1[2] - *a1;
  if ( v8 )
    std::_Deallocate<16,0>(*a1, 8 * v8);
  result = (unsigned __int64)&v7[a2];
  *a1 = v7;
  a1[1] = (unsigned __int64 *)result;
  a1[2] = (unsigned __int64 *)result;
  while ( v7 != (unsigned __int64 *)result )
    *v7++ = a3;
  return result;
}
