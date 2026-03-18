/*
 * XREFs of ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x140045F4C
 * Callers:
 *     ??0FxPowerPolicyMachine@@QEAA@XZ @ 0x140043F98 (--0FxPowerPolicyMachine@@QEAA@XZ.c)
 *     ??0FxPowerMachine@@QEAA@XZ @ 0x14004405C (--0FxPowerMachine@@QEAA@XZ.c)
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1400A9210 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1400AA6D0 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ??0FxEventQueue@@QEAA@E@Z @ 0x140045F8C (--0FxEventQueue@@QEAA@E@Z.c)
 */

void __fastcall FxThreadedEventQueue::FxThreadedEventQueue(FxThreadedEventQueue *this, unsigned __int8 QueueDepth)
{
  FxEventQueue::FxEventQueue(this, QueueDepth);
  this->m_WorkItem.m_WorkItem = 0LL;
  this->m_EventWorkQueueItem.List.Flink = 0LL;
  this->m_EventWorkQueueItem.WorkerRoutine = FxThreadedEventQueue::_WorkerThreadRoutine;
  this->m_EventWorkQueueItem.Parameter = this;
}
