/*
 * XREFs of ?Init@FxPowerIdleMachine@@QEAAJXZ @ 0x140060D14
 * Callers:
 *     ?Init@FxPowerPolicyOwnerSettings@@QEAAJXZ @ 0x140060C3C (-Init@FxPowerPolicyOwnerSettings@@QEAAJXZ.c)
 * Callees:
 *     ?Reset@FxPowerIdleMachine@@QEAAXXZ @ 0x140060D78 (-Reset@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x140060ECC (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 */

int __fastcall FxPowerIdleMachine::Init(FxPowerIdleMachine *this)
{
  FxCREvent *p_m_D0NotificationEvent; // rbx
  int result; // eax

  p_m_D0NotificationEvent = &this->m_D0NotificationEvent;
  KeInitializeEvent(&this->m_D0NotificationEvent.m_Event.m_Event, NotificationEvent, 1u);
  p_m_D0NotificationEvent->m_Event.m_DbgFlagIsInitialized = 1;
  result = MxTimer::Initialize(&this->m_PowerTimeoutTimer, this, FxPowerIdleMachine::_PowerTimeoutDpcRoutine, 0);
  if ( result >= 0 )
  {
    FxPowerIdleMachine::Reset(this);
    return 0;
  }
  return result;
}
