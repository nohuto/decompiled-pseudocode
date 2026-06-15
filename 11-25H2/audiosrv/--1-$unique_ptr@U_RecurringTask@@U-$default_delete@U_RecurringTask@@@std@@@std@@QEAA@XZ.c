/*
 * XREFs of ??1?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAA@XZ @ 0x18007F630
 * Callers:
 *     _CSerialWorkQueue::QueueRecurringItem_::_1_::dtor$2 @ 0x18015F840 (_CSerialWorkQueue--QueueRecurringItem_--_1_--dtor$2.c)
 *     _CBtAudioResourceManagerBase::CBtAudioResourceManagerBase_::_1_::dtor$7 @ 0x180166485 (_CBtAudioResourceManagerBase--CBtAudioResourceManagerBase_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

void __fastcall std::unique_ptr<_RecurringTask>::~unique_ptr<_RecurringTask>(__int64 *a1)
{
  if ( *a1 )
    std::default_delete<_RecurringTask>::operator()((__int64)a1, *a1);
}
