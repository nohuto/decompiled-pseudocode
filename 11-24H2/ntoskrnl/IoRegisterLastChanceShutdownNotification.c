/*
 * XREFs of IoRegisterLastChanceShutdownNotification @ 0x140714700
 * Callers:
 *     <none>
 * Callees:
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     IopInterlockedInsertHeadList @ 0x140596498 (IopInterlockedInsertHeadList.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x140714F18 (IopLogAuditIoRegisterNotificationEvent.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoRegisterLastChanceShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  _QWORD *Pool2; // rdi

  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return -1073741670;
  PsReferenceSiloContext(DeviceObject);
  Pool2[2] = DeviceObject;
  IopInterlockedInsertHeadList((__int64 *)&IopNotifyLastChanceShutdownQueueHead, Pool2);
  DeviceObject->Flags |= 0x800u;
  IopLogAuditIoRegisterNotificationEvent(&KERNEL_AUDIT_API_IOREGISTERLASTCHANCESHUTDOWNNOTIFICATION);
  return 0;
}
