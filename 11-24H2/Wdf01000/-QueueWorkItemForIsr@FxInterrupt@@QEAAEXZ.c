/*
 * XREFs of ?QueueWorkItemForIsr@FxInterrupt@@QEAAEXZ @ 0x14004C3E8
 * Callers:
 *     imp_WdfInterruptQueueWorkItemForIsr @ 0x14004C3B0 (imp_WdfInterruptQueueWorkItemForIsr.c)
 * Callees:
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x14004BF68 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 */

BOOLEAN __fastcall FxInterrupt::QueueWorkItemForIsr(FxInterrupt *this)
{
  if ( KeGetCurrentIrql() <= 2u )
    return FxSystemWorkItem::EnqueueWorker(this->m_SystemWorkItem, FxInterrupt::_InterruptWorkItemCallback, this, 0);
  else
    return KeInsertQueueDpc(&this->m_Dpc, this, 0LL);
}
