/*
 * XREFs of IoRegisterShutdownNotification @ 0x140714780
 * Callers:
 *     DifIoRegisterShutdownNotificationWrapper @ 0x14062A510 (DifIoRegisterShutdownNotificationWrapper.c)
 *     RawInitialize @ 0x140C36730 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140C3C9C0 (WmipDriverEntry.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     IopInterlockedInsertHeadList @ 0x140596498 (IopInterlockedInsertHeadList.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x140714F18 (IopLogAuditIoRegisterNotificationEvent.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoRegisterShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rdi

  Pool2 = ExAllocatePool2(0x40uLL);
  v3 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return -1073741670;
  *(_QWORD *)(Pool2 + 16) = DeviceObject;
  PsReferenceSiloContext(DeviceObject);
  IopInterlockedInsertHeadList((__int64 *)&IopNotifyShutdownQueueHead, v3);
  DeviceObject->Flags |= 0x800u;
  IopLogAuditIoRegisterNotificationEvent(&KERNEL_AUDIT_API_IOREGISTERSHUTDOWNNOTIFICATION);
  return 0;
}
