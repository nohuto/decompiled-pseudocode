/*
 * XREFs of IoRegisterFileSystem @ 0x1407142F0
 * Callers:
 *     RawInitialize @ 0x140C36730 (RawInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14041A700 (IopIncrementDeviceObjectRefCount.c)
 *     IopSetFsRegistrationInProgress @ 0x140596F40 (IopSetFsRegistrationInProgress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlSetDriverBacking @ 0x14070D080 (FsRtlSetDriverBacking.c)
 */

void __stdcall IoRegisterFileSystem(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *Flink; // rdx
  struct _LIST_ENTRY *v4; // r8
  __int64 v5; // r9
  ULONG DeviceType; // eax
  __int64 *v7; // rcx
  ULONG Flags; // eax
  __int64 v9; // rcx
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *p_Queue; // rax
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v11; // rax
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v12; // rax
  PVOID *v13; // rdi

  FsRtlSetDriverBacking((__int64)DeviceObject->DriverObject, 1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  IopSetFsRegistrationInProgress(1);
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  DeviceType = DeviceObject->DeviceType;
  switch ( DeviceType )
  {
    case 0x14u:
      v7 = (__int64 *)IopNetworkFileSystemQueueHead;
      Flink = &IopNetworkFileSystemQueueHead;
      goto LABEL_9;
    case 3u:
      Flink = &IopCdRomFileSystemQueueHead;
      DeviceObject->DriverObject->Flags |= 0x80u;
      v7 = (__int64 *)IopCdRomFileSystemQueueHead;
      goto LABEL_9;
    case 8u:
      Flink = &IopDiskFileSystemQueueHead;
      DeviceObject->DriverObject->Flags |= 0x80u;
      v7 = (__int64 *)IopDiskFileSystemQueueHead;
      goto LABEL_9;
    case 0x20u:
      Flink = &IopTapeFileSystemQueueHead;
      DeviceObject->DriverObject->Flags |= 0x80u;
      v7 = (__int64 *)IopTapeFileSystemQueueHead;
LABEL_9:
      Flags = DeviceObject->Flags;
      if ( (Flags & 0x10000) != 0 )
      {
        v9 = Flink[1];
        p_Queue = &DeviceObject->Queue;
        Flink = *(__int64 **)(v9 + 8);
        if ( *Flink == v9 )
        {
          p_Queue->ListEntry.Flink = (struct _LIST_ENTRY *)v9;
          DeviceObject->Queue.ListEntry.Blink = (struct _LIST_ENTRY *)Flink;
          *Flink = (__int64)p_Queue;
          *(_QWORD *)(v9 + 8) = p_Queue;
          break;
        }
      }
      else if ( (Flags & 0x200) != 0 )
      {
        v11 = &DeviceObject->Queue;
        if ( (__int64 *)v7[1] == Flink )
        {
          v11->ListEntry.Flink = (struct _LIST_ENTRY *)v7;
          DeviceObject->Queue.ListEntry.Blink = (struct _LIST_ENTRY *)Flink;
          v7[1] = (__int64)v11;
          *Flink = (__int64)v11;
          break;
        }
      }
      else
      {
        v4 = (struct _LIST_ENTRY *)Flink;
        while ( v7 != Flink && _bittest((const signed __int32 *)v7 - 8, 9u) )
        {
          v4 = (struct _LIST_ENTRY *)v7;
          v7 = (__int64 *)*v7;
        }
        Flink = (__int64 *)v4->Flink;
        v12 = &DeviceObject->Queue;
        if ( v4->Flink->Blink == v4 )
        {
          v12->ListEntry.Flink = (struct _LIST_ENTRY *)Flink;
          DeviceObject->Queue.ListEntry.Blink = v4;
          Flink[1] = (__int64)v12;
          v4->Flink = &v12->ListEntry;
          break;
        }
      }
      __fastfail(3u);
  }
  ++IopFsRegistrationOps;
  DeviceObject->Flags &= ~0x80u;
  v13 = (PVOID *)IopFsNotifyChangeQueueHead;
  while ( v13 != &IopFsNotifyChangeQueueHead )
  {
    LOBYTE(Flink) = 1;
    v13 = (PVOID *)*v13;
    guard_dispatch_icall_no_overrides(DeviceObject, Flink, v4, v5);
  }
  IopSetFsRegistrationInProgress(0);
  ExReleaseResourceLite(&IopDatabaseResource);
  IopSetFsRegistrationInProgress(0);
  KeLeaveCriticalRegion();
  IopIncrementDeviceObjectRefCount((ULONG_PTR)DeviceObject, 1);
}
