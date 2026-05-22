/*
 * XREFs of ?clear@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAXXZ @ 0x18002283C
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18001F350 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x18002CF9C (--$_Destroy_range@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputS.c)
 */

ContextualProcessorBuffer::InputSample *__fastcall std::vector<ContextualProcessorBuffer::InputSample>::clear(
        __int64 a1)
{
  ContextualProcessorBuffer::InputSample *result; // rax

  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(*(ContextualProcessorBuffer::InputSample **)a1);
    result = *(ContextualProcessorBuffer::InputSample **)a1;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
  }
  return result;
}
