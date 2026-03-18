/*
 * XREFs of IoQueueThreadIrp @ 0x1404B1B90
 * Callers:
 *     PiPagePathSetState @ 0x140722960 (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x140736264 (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  IopQueueThreadIrp((__int64)Irp, v1, v2);
}
