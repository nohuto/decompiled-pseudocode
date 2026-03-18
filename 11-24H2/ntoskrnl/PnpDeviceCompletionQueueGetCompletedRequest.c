/*
 * XREFs of PnpDeviceCompletionQueueGetCompletedRequest @ 0x1404B3E84
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x140A11544 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 */

__int64 PnpDeviceCompletionQueueGetCompletedRequest()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  __int64 v2; // rdx

  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F8B5A8);
  v1 = qword_140F8B578;
  v2 = *(_QWORD *)qword_140F8B578;
  if ( *(__int64 **)(qword_140F8B578 + 8) != &qword_140F8B578 || *(_QWORD *)(v2 + 8) != qword_140F8B578 )
    __fastfail(3u);
  qword_140F8B578 = *(_QWORD *)qword_140F8B578;
  *(_QWORD *)(v2 + 8) = &qword_140F8B578;
  KeReleaseSpinLock(&qword_140F8B5A8, v0);
  return v1;
}
