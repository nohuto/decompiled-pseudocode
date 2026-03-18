/*
 * XREFs of ?PowerPolicySubmitUsbIdleNotification@FxPkgPnp@@IEAAXXZ @ 0x14003C454
 * Callers:
 *     ?PowerPolTimerExpiredWakeCapableUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14003CB80 (-PowerPolTimerExpiredWakeCapableUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x14003C850 (-SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicySubmitUsbIdleNotification(FxPkgPnp *this)
{
  FxUsbIdleInfo *m_UsbIdle; // rbx
  unsigned __int8 v3; // [rsp+20h] [rbp-28h]
  unsigned __int8 v4; // [rsp+28h] [rbp-20h]
  unsigned __int8 v5; // [rsp+30h] [rbp-18h]

  this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_EventDropped = 0;
  m_UsbIdle = this->m_PowerPolicyMachine.m_Owner->m_UsbIdle;
  IoReuseIrp(m_UsbIdle->m_IdleIrp.m_Irp, 0);
  FxIrp::SetCompletionRoutineEx(
    &m_UsbIdle->m_IdleIrp,
    this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
    (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxPkgPnp::_PowerPolicyUsbSelectiveSuspendCompletionRoutine,
    this,
    v3,
    v4,
    v5);
  m_UsbIdle->m_IdleIrp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
  m_UsbIdle->m_IdleIrp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228263;
  m_UsbIdle->m_IdleIrp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Create.Options = 16;
  m_UsbIdle->m_IdleIrp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)&this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_CallbackInfo;
  IofCallDriver(
    this->m_DeviceBase->m_AttachedDevice.m_DeviceObject,
    this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_IdleIrp.m_Irp);
}
