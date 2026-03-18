/*
 * XREFs of ??0FxPnpMachine@@QEAA@XZ @ 0x140050728
 * Callers:
 *     ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x140050800 (--0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 * Callees:
 *     ??0FxEventQueue@@QEAA@E@Z @ 0x14005219C (--0FxEventQueue@@QEAA@E@Z.c)
 */

void __fastcall FxPnpMachine::FxPnpMachine(FxPnpMachine *this, unsigned __int8 a2)
{
  __int64 m_HistoryIndex; // r8

  FxEventQueue::FxEventQueue(this, a2);
  this->m_WorkItem.m_WorkItem = 0LL;
  *(_OWORD *)this->m_Queue = 0LL;
  *(_OWORD *)&this->m_Queue[4] = 0LL;
  this->m_States.S = 0LL;
  m_HistoryIndex = this->m_HistoryIndex;
  this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_QueueDepth;
  this->m_States.History[m_HistoryIndex] = 256;
  this->m_FireAndForget = 0;
}
