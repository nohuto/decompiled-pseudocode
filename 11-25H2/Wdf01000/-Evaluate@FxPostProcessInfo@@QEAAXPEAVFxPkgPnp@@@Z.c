/*
 * XREFs of ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x14003C05C
 * Callers:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x14003BE8C (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x14003CC50 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x14003D074 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 * Callees:
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1400A6428 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxPostProcessInfo::Evaluate(FxPostProcessInfo *this, FxPkgPnp *PkgPnp)
{
  _IRP *m_FireAndForgetIrp; // rax
  FxCREvent *m_DeviceRemoveProcessed; // rcx
  FxIrp irp; // [rsp+30h] [rbp+8h] BYREF

  if ( this->m_SetRemovedEvent )
  {
    m_DeviceRemoveProcessed = (FxCREvent *)PkgPnp->m_DeviceRemoveProcessed;
LABEL_7:
    KeSetEvent(&m_DeviceRemoveProcessed->m_Event.m_Event, 0, 0);
    return;
  }
  m_FireAndForgetIrp = this->m_FireAndForgetIrp;
  if ( m_FireAndForgetIrp )
  {
    this->m_FireAndForgetIrp = 0LL;
    irp.m_Irp = m_FireAndForgetIrp;
    PkgPnp->FireAndForgetIrp(PkgPnp, &irp);
  }
  if ( this->m_DeleteObject )
    FxPkgPnp::ProcessDelayedDeletion(PkgPnp);
  m_DeviceRemoveProcessed = this->m_Event;
  if ( this->m_Event )
    goto LABEL_7;
}
