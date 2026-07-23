/*
 * XREFs of IoRegisterShutdownNotification @ 0x140712310
 * Callers:
 *     DifIoRegisterShutdownNotificationWrapper @ 0x140628AD0 (DifIoRegisterShutdownNotificationWrapper.c)
 *     RawInitialize @ 0x140C38870 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140C3EB10 (WmipDriverEntry.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     IopInterlockedInsertHeadList @ 0x1405934C8 (IopInterlockedInsertHeadList.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x140712AA8 (IopLogAuditIoRegisterNotificationEvent.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoRegisterShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rdi

  Pool2 = ExAllocatePool2(0x40uLL, 0x18uLL, 0x68536F49u);
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
