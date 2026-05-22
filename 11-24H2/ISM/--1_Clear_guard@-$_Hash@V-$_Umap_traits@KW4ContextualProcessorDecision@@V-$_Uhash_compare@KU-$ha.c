/*
 * XREFs of ??1_Clear_guard@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18009A91C
 * Callers:
 *     _ContextualProcessorBuffer::MakeContextualProcessorDecision_::_1_::dtor$6 @ 0x1801D05F0 (_ContextualProcessorBuffer--MakeContextualProcessorDecision_--_1_--dtor$6.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_enum_ContextualProcessorDecision_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__enum_ContextualProcessorDecision____0___::operator__::_1_::dtor$0 @ 0x1801D0776 (_std--_Hash_std--_Umap_traits_unsigned_long_enum_ContextualProcessorDecision_std--_Uhash_compare.c)
 * Callees:
 *     ?clear@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18001F6F0 (-clear@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Clear_guard::~_Clear_guard(
        unsigned __int64 **a1)
{
  unsigned __int64 *v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::clear(v1);
}
