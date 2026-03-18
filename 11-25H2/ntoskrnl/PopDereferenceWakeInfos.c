/*
 * XREFs of PopDereferenceWakeInfos @ 0x1405CE874
 * Callers:
 *     PopGetWakeSource @ 0x140AA084C (PopGetWakeSource.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     PopWakeInfoDereference @ 0x1404BD2EC (PopWakeInfoDereference.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopDereferenceWakeInfos(unsigned int a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 *v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  if ( (_DWORD)v2 )
  {
    v4 = a2;
    do
    {
      PopWakeInfoDereference(*v4++);
      --v2;
    }
    while ( v2 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ExFreePoolWithTag(a2, 0x206D654Du);
}
