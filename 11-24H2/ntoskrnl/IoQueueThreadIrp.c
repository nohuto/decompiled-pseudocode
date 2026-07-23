/*
 * XREFs of IoQueueThreadIrp @ 0x1404AC420
 * Callers:
 *     PiPagePathSetState @ 0x1407204F0 (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x140734194 (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  IopQueueThreadIrp((__int64)Irp);
}
