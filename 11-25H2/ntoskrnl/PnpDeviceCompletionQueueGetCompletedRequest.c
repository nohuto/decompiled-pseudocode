/*
 * XREFs of PnpDeviceCompletionQueueGetCompletedRequest @ 0x1404B45E4
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x140832F24 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

__int64 PnpDeviceCompletionQueueGetCompletedRequest()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  __int64 v2; // rdx

  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F8AE28);
  v1 = qword_140F8ADF8;
  v2 = *(_QWORD *)qword_140F8ADF8;
  if ( *(__int64 **)(qword_140F8ADF8 + 8) != &qword_140F8ADF8 || *(_QWORD *)(v2 + 8) != qword_140F8ADF8 )
    __fastfail(3u);
  qword_140F8ADF8 = *(_QWORD *)qword_140F8ADF8;
  *(_QWORD *)(v2 + 8) = &qword_140F8ADF8;
  KeReleaseSpinLock(&qword_140F8AE28, v0);
  return v1;
}
