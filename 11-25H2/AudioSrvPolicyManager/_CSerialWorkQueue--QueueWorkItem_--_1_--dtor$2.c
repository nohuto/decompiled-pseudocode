/*
 * XREFs of _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$2 @ 0x18004D201
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CSerialWorkQueue::QueueWorkItem_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::unique_ptr<_WorkTask>::~unique_ptr<_WorkTask>((_WorkTask **)(a2 + 176), a2);
}
