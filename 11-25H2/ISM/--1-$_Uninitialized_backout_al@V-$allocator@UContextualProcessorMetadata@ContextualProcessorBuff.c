/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18002B55C
 * Callers:
 *     _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&__::_1_::dtor$25 @ 0x1801C9B50 (_std--vector_ContextualProcessorBuffer--ContextualProcessorMetadata_std--allocator__ea_1801C9B50.c)
 *     _std::_Uninitialized_move_ContextualProcessorBuffer::ContextualProcessorMetadata___std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata____::_1_::dtor$0 @ 0x1801CCA33 (_std--_Uninitialized_move_ContextualProcessorBuffer--ContextualProcessorMetadata___std--allocato.c)
 * Callees:
 *     ??1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ @ 0x18002AE7C (--1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ.c)
 */

void __fastcall std::_Uninitialized_backout_al<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>::~_Uninitialized_backout_al<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(
        ContextualProcessorBuffer::ContextualProcessorMetadata **a1)
{
  ContextualProcessorBuffer::ContextualProcessorMetadata *v1; // rdi
  ContextualProcessorBuffer::ContextualProcessorMetadata *i; // rbx

  v1 = a1[1];
  for ( i = *a1; i != v1; i = (ContextualProcessorBuffer::ContextualProcessorMetadata *)((char *)i + 224) )
    ContextualProcessorBuffer::ContextualProcessorMetadata::~ContextualProcessorMetadata(i);
}
