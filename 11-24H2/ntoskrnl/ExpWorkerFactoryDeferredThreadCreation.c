/*
 * XREFs of ExpWorkerFactoryDeferredThreadCreation @ 0x140493E00
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x14065AA40 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1403BEB10 (ExpWorkerFactoryCheckCreate.c)
 *     RtlpInterlockedFlushSList @ 0x1406B3910 (RtlpInterlockedFlushSList.c)
 */

LONG_PTR ExpWorkerFactoryDeferredThreadCreation()
{
  LONG_PTR result; // rax
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  ExpWorkerFactoryThreadCreationState = 0;
  result = (LONG_PTR)RtlpInterlockedFlushSList(&ExpWorkerFactoryThreadCreationList);
  v1 = (_QWORD *)result;
  if ( result )
  {
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2[2], &LockHandle);
      *((_DWORD *)v2 + 102) &= ~8u;
      ExpWorkerFactoryCheckCreate((char *)v2, &LockHandle, 1);
      result = ObfDereferenceObjectWithTag(v2, 0x746C6644u);
    }
    while ( v1 );
  }
  return result;
}
