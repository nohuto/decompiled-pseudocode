/*
 * XREFs of ??0FxPowerIdleMachine@@QEAA@XZ @ 0x1400830D4
 * Callers:
 *     ??0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z @ 0x14007476C (--0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z.c)
 * Callees:
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1400141B0 (--0FxCREvent@@QEAA@E@Z.c)
 */

void __fastcall FxPowerIdleMachine::FxPowerIdleMachine(FxPowerIdleMachine *this, unsigned __int8 a2)
{
  this->m_Lock.m_Lock = 0LL;
  this->m_Lock.m_DbgFlagIsInitialized = 1;
  this->m_PowerTimeoutTimer.m_Timer.m_TimerContext = 0LL;
  this->m_PowerTimeoutTimer.m_Timer.m_TimerCallback = 0LL;
  this->m_PowerTimeoutTimer.m_Timer.m_Period = 0;
  this->m_PowerTimeoutTimer.m_Timer.m_KernelExTimer = 0LL;
  FxCREvent::FxCREvent(&this->m_D0NotificationEvent, a2);
  this->m_PowerTimeout.QuadPart = 0LL;
  *(_WORD *)&this->m_EventHistoryIndex = 0;
  this->m_CurrentIdleState = FxIdleStopped;
  *(_OWORD *)this->m_EventHistory = 0LL;
  *(_OWORD *)&this->m_EventHistory[4] = 0LL;
  *(_OWORD *)this->m_StateHistory = 0LL;
  *(_OWORD *)&this->m_StateHistory[4] = 0LL;
  this->m_TagTracker = 0LL;
}
