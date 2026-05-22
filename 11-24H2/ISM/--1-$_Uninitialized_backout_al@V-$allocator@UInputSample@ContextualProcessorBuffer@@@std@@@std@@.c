/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18009C3E4
 * Callers:
 *     _std::_Uninitialized_move_ContextualProcessorBuffer::InputSample___std::allocator_ContextualProcessorBuffer::InputSample____::_1_::dtor$0 @ 0x1801D3B03 (_std--_Uninitialized_move_ContextualProcessorBuffer--InputSample___std--allocator_ContextualProc.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<std::allocator<ContextualProcessorBuffer::InputSample>>::~_Uninitialized_backout_al<std::allocator<ContextualProcessorBuffer::InputSample>>(
        ContextualProcessorBuffer::InputSample **a1)
{
  std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(*a1, a1[1]);
}
