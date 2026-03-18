/*
 * XREFs of CcQueueAsyncGetDeviceGuid @ 0x14057D6C4
 * Callers:
 *     CcInitializeVolumeCacheMap @ 0x1402CDF18 (CcInitializeVolumeCacheMap.c)
 * Callees:
 *     CcDecrementVolumeUseCountWithDelete @ 0x1402CD480 (CcDecrementVolumeUseCountWithDelete.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140B72010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcQueueAsyncGetDeviceGuid(__int64 a1, void *a2)
{
  char *PoolWithTag; // rbx

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1536, 0x30uLL, 0x65546343u);
  if ( PoolWithTag )
  {
    ObfReferenceObjectWithTag(a2, 0x746C6644u);
    *((_QWORD *)PoolWithTag + 1) = a2;
    *(_QWORD *)PoolWithTag = a1;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = CcGetDeviceGuidAsync;
    *((_QWORD *)PoolWithTag + 5) = PoolWithTag;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(PoolWithTag + 16), NormalWorkQueue);
    return 0LL;
  }
  else
  {
    CcDecrementVolumeUseCountWithDelete(a1);
    return 3221225626LL;
  }
}
