/*
 * XREFs of PnpDeviceCompletionQueueGetCompletedRequest @ 0x1404AE694
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1409BF954 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 */

__int64 PnpDeviceCompletionQueueGetCompletedRequest()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  __int64 v2; // rdx

  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F8B808);
  v1 = qword_140F8B7D8;
  v2 = *(_QWORD *)qword_140F8B7D8;
  if ( *(__int64 **)(qword_140F8B7D8 + 8) != &qword_140F8B7D8 || *(_QWORD *)(v2 + 8) != qword_140F8B7D8 )
    __fastfail(3u);
  qword_140F8B7D8 = *(_QWORD *)qword_140F8B7D8;
  *(_QWORD *)(v2 + 8) = &qword_140F8B7D8;
  KeReleaseSpinLock(&qword_140F8B808, v0);
  return v1;
}
