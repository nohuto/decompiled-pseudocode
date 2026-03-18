/*
 * XREFs of ??1FxPowerPolicyMachine@@QEAA@XZ @ 0x14004081C
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x14003FD1C (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x14003EB98 (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 *     ??1FxThreadedEventQueue@@QEAA@XZ @ 0x14004086C (--1FxThreadedEventQueue@@QEAA@XZ.c)
 */

void __fastcall FxPowerPolicyMachine::~FxPowerPolicyMachine(FxPowerPolicyMachine *this)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rdi

  m_Owner = this->m_Owner;
  if ( m_Owner )
  {
    FxPowerPolicyOwnerSettings::~FxPowerPolicyOwnerSettings(this->m_Owner);
    FxStump::operator delete(m_Owner);
    this->m_Owner = 0LL;
  }
  FxThreadedEventQueue::~FxThreadedEventQueue((FxWorkItemEventQueue *)this);
}
