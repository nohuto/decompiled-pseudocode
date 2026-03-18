/*
 * XREFs of ?QueueToThread@FxWorkItemEventQueue@@QEAAXXZ @ 0x140006708
 * Callers:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x140005FE4 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 * Callees:
 *     ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1400362F0 (-QueueToThreadWorker@FxEventQueue@@IEAAEXZ.c)
 */

void __fastcall FxWorkItemEventQueue::QueueToThread(FxWorkItemEventQueue *this)
{
  if ( FxEventQueue::QueueToThreadWorker(this) )
  {
    ObfReferenceObject(this->m_PkgPnp->m_Globals->Driver->m_DriverObject.m_DriverObject);
    _InterlockedAdd(&this->m_PkgPnp->m_Globals->Refcnt, 1u);
    IoQueueWorkItem(this->m_WorkItem.m_WorkItem, FxWorkItemEventQueue::_WorkItemCallback, DelayedWorkQueue, this);
  }
}
