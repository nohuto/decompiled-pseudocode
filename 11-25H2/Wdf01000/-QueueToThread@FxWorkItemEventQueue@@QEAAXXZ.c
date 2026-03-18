/*
 * XREFs of ?QueueToThread@FxWorkItemEventQueue@@QEAAXXZ @ 0x14003D798
 * Callers:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x14003D074 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 * Callees:
 *     ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x14001EAD0 (-QueueToThreadWorker@FxEventQueue@@IEAAEXZ.c)
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
