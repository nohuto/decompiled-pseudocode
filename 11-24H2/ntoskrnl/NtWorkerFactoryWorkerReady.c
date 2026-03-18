/*
 * XREFs of NtWorkerFactoryWorkerReady @ 0x14046AFC0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtWorkerFactoryWorkerReady(void *a1)
{
  NTSTATUS v1; // edi
  _DWORD *v2; // rbx
  int v3; // eax
  int v4; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  v1 = ObReferenceObjectByHandle(
         a1,
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
  return (unsigned int)v1;
}
