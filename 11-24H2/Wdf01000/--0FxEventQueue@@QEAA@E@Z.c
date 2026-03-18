/*
 * XREFs of ??0FxEventQueue@@QEAA@E@Z @ 0x140045F8C
 * Callers:
 *     ??0FxPnpMachine@@QEAA@XZ @ 0x140043FFC (--0FxPnpMachine@@QEAA@XZ.c)
 *     ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x140045F4C (--0FxThreadedEventQueue@@QEAA@E@Z.c)
 * Callees:
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x140045FD4 (--0FxWaitLockInternal@@QEAA@XZ.c)
 */

void __fastcall FxEventQueue::FxEventQueue(FxEventQueue *this, unsigned __int8 QueueDepth)
{
  this->m_QueueLock.m_Lock = 0LL;
  this->m_QueueLock.m_DbgFlagIsInitialized = 1;
  FxWaitLockInternal::FxWaitLockInternal(&this->m_StateMachineLock);
  this->m_PkgPnp = 0LL;
  this->m_EventWorker = 0LL;
  this->m_WorkItemFinished = 0LL;
  *(_WORD *)&this->m_QueueFlags = 0;
  *(_DWORD *)&this->m_QueueHead = 0x80000;
}
