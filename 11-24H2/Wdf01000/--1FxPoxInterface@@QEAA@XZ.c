/*
 * XREFs of ??1FxPoxInterface@@QEAA@XZ @ 0x14008427C
 * Callers:
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x14003EB98 (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 * Callees:
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1400A91E8 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 */

void __fastcall FxPoxInterface::~FxPoxInterface(FxPoxInterface *this, unsigned int a2)
{
  FxDevicePwrRequirementMachine *m_DevicePowerRequirementMachine; // rcx

  m_DevicePowerRequirementMachine = this->m_DevicePowerRequirementMachine;
  if ( m_DevicePowerRequirementMachine )
    FxWakeInterruptMachine::`scalar deleting destructor'(m_DevicePowerRequirementMachine, a2);
  this->m_DevicePowerRequiredLock.m_DbgFlagIsInitialized = 0;
}
