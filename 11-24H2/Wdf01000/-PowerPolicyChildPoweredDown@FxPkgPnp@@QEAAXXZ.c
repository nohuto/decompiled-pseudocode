/*
 * XREFs of ?PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ @ 0x1400302A0
 * Callers:
 *     ?PowerParentPowerDereference@FxPkgPdo@@EEAAXXZ @ 0x140030270 (-PowerParentPowerDereference@FxPkgPdo@@EEAAXXZ.c)
 * Callees:
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x140023EB0 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x140032070 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140033950 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicyChildPoweredDown(FxPkgPnp *this, _FX_DRIVER_GLOBALS *a2)
{
  _FX_DRIVER_GLOBALS *v3; // rdx

  if ( this->m_PowerPolicyMachine.m_Owner )
  {
    FxWaitLockInternal::AcquireLock(&this->m_EnumInfo->m_PowerStateLock, a2, 0LL);
    --this->m_PowerPolicyMachine.m_Owner->m_ChildrenPoweredOnCount;
    FxWaitLockInternal::ReleaseLock(&this->m_EnumInfo->m_PowerStateLock, v3);
    FxPowerIdleMachine::IoDecrement(&this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
  }
}
