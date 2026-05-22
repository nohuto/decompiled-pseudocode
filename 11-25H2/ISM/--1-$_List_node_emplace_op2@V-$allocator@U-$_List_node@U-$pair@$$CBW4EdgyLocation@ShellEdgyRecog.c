/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009B870
 * Callers:
 *     _std::_Hash_std::_Umap_traits_enum_ShellEdgyRecognizer::EdgyLocation_std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration____std::_Uhash_compare_enum_ShellEdgyRecognizer::EdgyLocation_std::hash_enum_ShellEdgyRecognizer::EdgyLocation__std::equal_to_enum_ShellEdgyRecognizer::EdgyLocation____std::allocator_std::pair_enum_ShellEdgyRecognizer::EdgyLocation_const__std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration________0___::_Try_emplace_enum_ShellEdgyRecognizer::EdgyLocation_const_&__::_1_::dtor$0 @ 0x1801C98C4 (_std--_Hash_std--_Umap_traits_enum_ShellEdgyRecognizer--EdgyLocation_std--vector_ShellGesturesPr.c)
 * Callees:
 *     ?_Tidy@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAXXZ @ 0x18002851C (-_Tidy@-$vector@UGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegistration@S.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::vector<ShellGesturesProcessor::GestureRegistration>::_Tidy(v2 + 24);
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<_GUID,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<_GUID,void *>>>(a1);
}
