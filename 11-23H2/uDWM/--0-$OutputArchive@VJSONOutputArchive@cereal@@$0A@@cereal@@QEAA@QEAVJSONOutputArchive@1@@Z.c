/*
 * XREFs of ??0?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z @ 0x1800F03D8
 * Callers:
 *     ??0JSONOutputArchive@cereal@@QEAA@AEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEBVOptions@01@@Z @ 0x1800F08B4 (--0JSONOutputArchive@cereal@@QEAA@AEAV-$basic_ostream@DU-$char_traits@D@std@@@std@@AEBVOptions@0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180032448 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@PEBDIV?$_Uhash_compare@PEBDU?$hash@PEBD@std@@U?$equal_to@PEBD@2@@std@@V?$allocator@U?$pair@QEBDI@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEBDU?$hash@PEBD@std@@U?$equal_to@PEBD@2@@1@AEBV?$allocator@U?$pair@QEBDI@std@@@1@@Z @ 0x1800F053C (--0-$_Hash@V-$_Umap_traits@PEBDIV-$_Uhash_compare@PEBDU-$hash@PEBD@std@@U-$equal_to@PEBD@2@@std@.c)
 *     ??0?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@_K@1@@Z @ 0x1800F066C (--0-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 *     ??0?$unordered_set@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@V?$allocator@Ubase_class_id@detail@traits@cereal@@@7@@std@@QEAA@XZ @ 0x1800F085C (--0-$unordered_set@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U-$equal_to@Ubas.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBDI@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBDI@std@@@std@@@std@@@2@@Z @ 0x1800F2064 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800F2064.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::OutputArchive<cereal::JSONOutputArchive,0>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)a1 = &cereal::OutputArchive<cereal::JSONOutputArchive,0>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = a2;
  std::unordered_set<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,std::equal_to<cereal::traits::detail::base_class_id>,std::allocator<cereal::traits::detail::base_class_id>>::unordered_set<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,std::equal_to<cereal::traits::detail::base_class_id>,std::allocator<cereal::traits::detail::base_class_id>>(a1 + 40);
  v6 = a1 + 104;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v3 = v3;
  v3[1] = v3;
  *(_QWORD *)(a1 + 112) = v3;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 7LL;
  *(_QWORD *)(a1 + 160) = 8LL;
  *(_DWORD *)(a1 + 104) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<char const * const,unsigned int>>>>>>::_Assign_grow(
    a1 + 128,
    v4,
    *(_QWORD *)(a1 + 112));
  *(_DWORD *)(a1 + 168) = 1;
  HIDWORD(v6) = (unsigned __int64)(a1 + 176) >> 32;
  LODWORD(v6) = 0;
  std::_Hash<std::_Umap_traits<char const *,unsigned int,std::_Uhash_compare<char const *,std::hash<char const *>,std::equal_to<char const *>>,std::allocator<std::pair<char const * const,unsigned int>>,0>>::_Hash<std::_Umap_traits<char const *,unsigned int,std::_Uhash_compare<char const *,std::hash<char const *>,std::equal_to<char const *>>,std::allocator<std::pair<char const * const,unsigned int>>,0>>(
    a1 + 176,
    &v6);
  *(_DWORD *)(a1 + 240) = 1;
  HIDWORD(v6) = (unsigned __int64)(a1 + 248) >> 32;
  LODWORD(v6) = 0;
  std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>(
    a1 + 248,
    &v6);
  return a1;
}
