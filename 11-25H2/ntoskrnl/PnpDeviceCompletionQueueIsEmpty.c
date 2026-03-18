/*
 * XREFs of PnpDeviceCompletionQueueIsEmpty @ 0x14047ED90
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x140832F24 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

_BOOL8 PnpDeviceCompletionQueueIsEmpty()
{
  BOOL v0; // ebx
  KIRQL v1; // al

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140F8AE28);
  if ( *(ULONG **)&PnpDeviceCompletionQueue == &PnpDeviceCompletionQueue )
    v0 = qword_140F8ADF8 == (_QWORD)&qword_140F8ADF8;
  KeReleaseSpinLock(&qword_140F8AE28, v1);
  return v0;
}
