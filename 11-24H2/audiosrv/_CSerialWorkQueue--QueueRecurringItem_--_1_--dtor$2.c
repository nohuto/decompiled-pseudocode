/*
 * XREFs of _CSerialWorkQueue::QueueRecurringItem_::_1_::dtor$2 @ 0x18016A1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSerialWorkQueue::QueueRecurringItem_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::unique_ptr<_RecurringTask>::~unique_ptr<_RecurringTask>((__int64 *)(a2 + 176));
}
