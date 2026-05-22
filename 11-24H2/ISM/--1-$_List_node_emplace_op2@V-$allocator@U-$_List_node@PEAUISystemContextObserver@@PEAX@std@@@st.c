/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@PEAUISystemContextObserver@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009C47C
 * Callers:
 *     _ContextualProcessorBuffer::ProcessContextualProcessorDecision_::_1_::dtor$5 @ 0x1801D0561 (_ContextualProcessorBuffer--ProcessContextualProcessorDecision_--_1_--dtor$5.c)
 *     _ContextualProcessorBuffer::MakeContextualProcessorDecision_::_1_::dtor$17 @ 0x1801D0720 (_ContextualProcessorBuffer--MakeContextualProcessorDecision_--_1_--dtor$17.c)
 *     _std::unordered_map_unsigned_long_unsigned_short_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_std::pair_unsigned_long_const__unsigned_short_____::_Insert_or_assign_unsigned_long_unsigned_short_&__::_1_::dtor$0 @ 0x1801D09C0 (_std--unordered_map_unsigned_long_unsigned_short_std--hash_unsigned_long__std--equal_to_unsigned.c)
 *     _std::unordered_map_unsigned_long_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_std::pair_unsigned_long_const__unsigned_long_____::_Insert_or_assign_unsigned_long_int__::_1_::dtor$0 @ 0x1801D0CE6 (_std--unordered_map_unsigned_long_unsigned_long_std--hash_unsigned_long__std--equal_to_unsigned_.c)
 *     _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&__::_1_::dtor$21 @ 0x1801D0FA0 (_std--vector_ContextualProcessorBuffer--ContextualProcessorMetadata_std--allocator__ea_1801D0FA0.c)
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$19 @ 0x1801D1138 (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$19.c)
 *     _ControllerProcessor::SetVirtualKeyState_::_1_::dtor$0 @ 0x1801D29C0 (_ControllerProcessor--SetVirtualKeyState_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<ISystemContextObserver *,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<ISystemContextObserver *,void *>>>(
        __int64 a1)
{
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<unsigned __int64,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<unsigned __int64,void *>>>(a1);
}
