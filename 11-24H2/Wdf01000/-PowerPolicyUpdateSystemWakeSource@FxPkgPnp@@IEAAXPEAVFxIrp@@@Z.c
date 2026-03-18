/*
 * XREFs of ?PowerPolicyUpdateSystemWakeSource@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z @ 0x140003814
 * Callers:
 *     ?_PowerPolicyWaitWakeCompletionRoutine@FxPkgPnp@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140003510 (-_PowerPolicyWaitWakeCompletionRoutine@FxPkgPnp@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x140041538 (WPP_IFR_SF_qqq.c)
 */

void __fastcall FxPkgPnp::PowerPolicyUpdateSystemWakeSource(FxPkgPnp *this, FxIrp *Irp)
{
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a1; // rcx

  this->m_PowerPolicyMachine.m_Owner->m_SystemWakeSource = PoGetSystemWake(Irp->m_Irp);
  if ( this->m_PowerPolicyMachine.m_Owner->m_SystemWakeSource )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqq(
      this->m_Globals,
      4u,
      0xCu,
      0xAu,
      WPP_PowerPolicyStateMachineKM_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      Irp->m_Irp);
  }
}
