/*
 * XREFs of ?DispatchSystemSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x14001AE00
 * Callers:
 *     ?_DispatchSetPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x14001ADD0 (-_DispatchSetPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?SaveStateFromSystemPowerIrp@FxDevicePowerIrpTracker@@QEAAXPEAVFxIrp@@@Z @ 0x14001AA48 (-SaveStateFromSystemPowerIrp@FxDevicePowerIrpTracker@@QEAAXPEAVFxIrp@@@Z.c)
 *     ?_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x14003B5D0 (-_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x14003C850 (-SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z.c)
 */

NTSTATUS __fastcall FxPkgFdo::DispatchSystemSetPower(FxPkgFdo *this, FxIrp *Irp)
{
  _DEVICE_OBJECT *m_DeviceObject; // rbx
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v8; // rcx
  unsigned __int8 v9; // [rsp+20h] [rbp-28h]
  unsigned __int8 v10; // [rsp+28h] [rbp-20h]
  unsigned __int8 v11; // [rsp+30h] [rbp-18h]

  m_DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  this->m_SystemPowerState = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart;
  PoSetPowerState(
    m_DeviceObject,
    SystemPowerState,
    Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Power.State);
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( !m_Owner )
    return FxPkgFdo::_PowerPassDown(this, Irp);
  FxDevicePowerIrpTracker::SaveStateFromSystemPowerIrp(&m_Owner->m_DevicePowerIrpTracker, Irp);
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( this->m_SystemPowerState == 1 )
  {
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    FxIrp::SetCompletionRoutineEx(Irp, m_DeviceObject, FxPkgFdo::_SystemPowerS0Completion, this, v9, v10, v11);
    return PoCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
  }
  else
  {
    CurrentStackLocation->Control |= 1u;
    this->m_PendingSystemPowerIrp = Irp->m_Irp;
    v8 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
    *(_OWORD *)&v8[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v8->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v8[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v8->Parameters.SetQuota + 6);
    v8[-1].FileObject = v8->FileObject;
    v8[-1].Control = 0;
    FxIrp::SetCompletionRoutineEx(Irp, m_DeviceObject, FxPkgFdo::_SystemPowerSxCompletion, this, v9, v10, v11);
    PoCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
    return 259;
  }
}
