/*
 * XREFs of NtWorkerFactoryWorkerReady @ 0x140463A40
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtWorkerFactoryWorkerReady(HANDLE WorkerFactoryHandle)
{
  int v1; // edi
  _DWORD *v2; // rbx
  int v3; // eax
  int v4; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  v1 = ObReferenceObjectByHandle(
         WorkerFactoryHandle,
         0x10u,
         ExpWorkerFactoryObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  if ( v1 >= 0 )
  {
    v2 = Object;
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
    v3 = v2[100];
    if ( v3 )
    {
      v2[100] = v3 - 1;
      v4 = v2[98];
      if ( v4 )
      {
        ++v2[96];
        ++v2[97];
        v2[98] = v4 - 1;
      }
      else
      {
        v1 = -1073741558;
      }
    }
    else
    {
      v1 = -1073741823;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  }
  return v1;
}
