/*
 * XREFs of CcIsThereDirtyDataEx @ 0x14057C090
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D84E0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 */

BOOLEAN __stdcall CcIsThereDirtyDataEx(PVPB Vpb, PULONG NumberOfDirtyPages)
{
  BOOLEAN v4; // bl
  __int64 *v5; // rax
  struct _DEVICE_OBJECT *DeviceObject; // rcx
  __int64 *v7; // rdi
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+38h] [rbp-20h] BYREF

  memset(&v12, 0, sizeof(v12));
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v12);
  v5 = (__int64 *)CcVolumeCacheMapList;
  if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
  {
    DeviceObject = Vpb->DeviceObject;
    do
    {
      v7 = v5 - 3;
      if ( (struct _DEVICE_OBJECT *)*(v5 - 1) == DeviceObject )
        break;
      v5 = (__int64 *)*v5;
      v7 = 0LL;
    }
    while ( v5 != &CcVolumeCacheMapList );
    if ( v7 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)PspSystemPartition + 1) + 768LL), &LockHandle);
      v9 = (_DWORD *)v7 + 51;
      if ( v7[5] || *v9 )
      {
        if ( NumberOfDirtyPages )
          *NumberOfDirtyPages = *v9 + *((_DWORD *)v7 + 10);
        v4 = 1;
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v8);
    }
  }
  KeReleaseInStackQueuedSpinLock(&v12);
  return v4;
}
