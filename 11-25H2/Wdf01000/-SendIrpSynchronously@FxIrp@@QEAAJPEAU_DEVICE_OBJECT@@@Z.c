/*
 * XREFs of ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1400412E4
 * Callers:
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x140018534 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x14004087C (-QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ.c)
 *     ?_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z @ 0x14004120C (-_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140077D68 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z @ 0x140082584 (-PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z.c)
 *     ?SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z @ 0x1400A9FF0 (-SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall FxIrp::SendIrpSynchronously(FxIrp *this, _DEVICE_OBJECT *DeviceObject)
{
  _IRP *m_Irp; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  NTSTATUS result; // eax
  FxCREvent event; // [rsp+30h] [rbp-28h] BYREF

  event.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&event.m_Event.m_Event, SynchronizationEvent, 0);
  m_Irp = this->m_Irp;
  event.m_Event.m_DbgFlagIsInitialized = 1;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = FxIrp::_IrpSynchronousCompletion;
  CurrentStackLocation[-1].Context = &event;
  CurrentStackLocation[-1].Control = -32;
  result = IofCallDriver(DeviceObject, this->m_Irp);
  if ( result == 259 )
  {
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&event, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
    return this->m_Irp->IoStatus.Status;
  }
  return result;
}
