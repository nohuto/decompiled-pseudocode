/*
 * XREFs of ??1FxThreadedEventQueue@@QEAA@XZ @ 0x14004086C
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x14003FD1C (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??1FxPowerPolicyMachine@@QEAA@XZ @ 0x14004081C (--1FxPowerPolicyMachine@@QEAA@XZ.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1400A91E8 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1400406D8 (-Free@MxWorkItem@@QEAAXXZ.c)
 */

void __fastcall FxThreadedEventQueue::~FxThreadedEventQueue(FxWorkItemEventQueue *this)
{
  MxWorkItem::Free(&this->m_WorkItem);
  this->m_QueueLock.m_DbgFlagIsInitialized = 0;
}
