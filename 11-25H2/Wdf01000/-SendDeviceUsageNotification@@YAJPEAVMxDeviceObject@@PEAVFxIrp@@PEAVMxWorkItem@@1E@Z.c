/*
 * XREFs of ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1400A9F40
 * Callers:
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140077D68 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1400167FC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x140039E90 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z @ 0x1400A9FF0 (-SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z.c)
 */

int __fastcall SendDeviceUsageNotification(
        MxDeviceObject *RelatedDevice,
        FxIrp *RelatedIrp,
        MxWorkItem *Workitem,
        FxIrp *OriginalIrp,
        unsigned __int8 Revert)
{
  struct _IO_WORKITEM *m_WorkItem; // rcx
  FxUsageWorkitemParameters param; // [rsp+20h] [rbp-58h] BYREF

  if ( !Workitem->m_WorkItem )
    return SendDeviceUsageNotificationWorker(RelatedDevice, RelatedIrp, OriginalIrp, Revert);
  FxCREvent::FxCREvent(&param.Event, (unsigned __int8)RelatedIrp);
  m_WorkItem = Workitem->m_WorkItem;
  param.Revert = Revert;
  param.Status = -1073741823;
  param.RelatedDevice = RelatedDevice;
  param.RelatedIrp = RelatedIrp;
  param.OriginalIrp = OriginalIrp;
  IoQueueWorkItem(m_WorkItem, _DeviceUsageNotificationWorkItem, DelayedWorkQueue, &param);
  FxCREvent::EnterCRAndWaitAndLeave(&param.Event);
  return param.Status;
}
