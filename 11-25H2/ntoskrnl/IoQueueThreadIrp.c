/*
 * XREFs of IoQueueThreadIrp @ 0x1404B0B80
 * Callers:
 *     PiPagePathSetState @ 0x140716860 (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x140729FD4 (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253BB0 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  IopQueueThreadIrp((__int64)Irp);
}
