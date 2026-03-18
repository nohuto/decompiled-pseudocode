/*
 * XREFs of ?QueueWorkItemForIsr@FxInterrupt@@QEAAEXZ @ 0x140046B48
 * Callers:
 *     imp_WdfInterruptQueueWorkItemForIsr @ 0x140046B10 (imp_WdfInterruptQueueWorkItemForIsr.c)
 * Callees:
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1400466C8 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 */

BOOLEAN __fastcall FxInterrupt::QueueWorkItemForIsr(FxInterrupt *this)
{
  if ( KeGetCurrentIrql() <= 2u )
    return FxSystemWorkItem::EnqueueWorker(
             this->m_SystemWorkItem,
             (void (__fastcall *)(void *))FxInterrupt::_InterruptWorkItemCallback,
             this,
             0);
  else
    return KeInsertQueueDpc(&this->m_Dpc, this, 0LL);
}
