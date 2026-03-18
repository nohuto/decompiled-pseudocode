/*
 * XREFs of ?_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x14001BF90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001C030 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x14001CB58 (-ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxDevicePwrRequirementMachine::_ProcessEventInner(
        FxPkgPnp *PkgPnp,
        FxPostProcessInfo *Info,
        void *WorkerContext)
{
  FxDevicePwrRequirementMachine *m_DevicePowerRequirementMachine; // rdi
  _FX_DRIVER_GLOBALS *v5; // rdx

  m_DevicePowerRequirementMachine = PkgPnp->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DevicePowerRequirementMachine;
  KeEnterCriticalRegion();
  if ( KeWaitForSingleObject(&m_DevicePowerRequirementMachine->m_StateMachineLock, Executive, 0, 0, 0LL) == 258 )
    KeLeaveCriticalRegion();
  else
    m_DevicePowerRequirementMachine->m_StateMachineLock.m_OwningThread = KeGetCurrentThread();
  FxDevicePwrRequirementMachine::ProcessEventInner(m_DevicePowerRequirementMachine, Info);
  FxWaitLockInternal::ReleaseLock(&m_DevicePowerRequirementMachine->m_StateMachineLock, v5);
}
