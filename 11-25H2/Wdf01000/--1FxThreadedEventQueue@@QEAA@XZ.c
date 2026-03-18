/*
 * XREFs of ??1FxThreadedEventQueue@@QEAA@XZ @ 0x14004C68C
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x14004BB3C (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??1FxPowerPolicyMachine@@QEAA@XZ @ 0x14004C63C (--1FxPowerPolicyMachine@@QEAA@XZ.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1400A9118 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x14004C4F8 (-Free@MxWorkItem@@QEAAXXZ.c)
 */

void __fastcall FxThreadedEventQueue::~FxThreadedEventQueue(FxWorkItemEventQueue *this)
{
  MxWorkItem::Free(&this->m_WorkItem);
  this->m_QueueLock.m_DbgFlagIsInitialized = 0;
}
