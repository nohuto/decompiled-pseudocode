/*
 * XREFs of PnpDeviceCompletionQueueIsEmpty @ 0x14047F8D0
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x140A11544 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 PnpDeviceCompletionQueueIsEmpty()
{
  BOOL v0; // ebx
  KIRQL v1; // al

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140F8B5A8);
  if ( *(ULONG **)&PnpDeviceCompletionQueue == &PnpDeviceCompletionQueue )
    v0 = qword_140F8B578 == (_QWORD)&qword_140F8B578;
  KeReleaseSpinLock(&qword_140F8B5A8, v1);
  return v0;
}
