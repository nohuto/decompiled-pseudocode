/*
 * XREFs of ExpDeleteWorkerFactory @ 0x14047C610
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     IoFreeMiniCompletionPacket @ 0x1409A7190 (IoFreeMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDeleteWorkerFactory(PVOID *a1)
{
  KSPIN_LOCK *v2; // rcx
  _QWORD *v3; // rax
  void *v4; // rbx
  char v5; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)a1[2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  *((_BYTE *)a1[2] + 34) = 1;
  v3 = a1[2];
  v4 = (void *)v3[1];
  v5 = *((_BYTE *)v3 + 32);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ObfDereferenceObjectWithTag(a1[6], 0x66577845u);
  ObCloseHandle(a1[5], 0);
  ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  if ( !v5 )
  {
    IoFreeMiniCompletionPacket(*((_QWORD *)a1[2] + 2));
    ExFreePoolWithTag(a1[2], 0);
  }
}
