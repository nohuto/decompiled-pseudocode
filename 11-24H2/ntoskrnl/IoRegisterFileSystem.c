/*
 * XREFs of IoRegisterFileSystem @ 0x140711E80
 * Callers:
 *     RawInitialize @ 0x140C38870 (RawInitialize.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14040A700 (IopIncrementDeviceObjectRefCount.c)
 *     IopSetFsRegistrationInProgress @ 0x140593F20 (IopSetFsRegistrationInProgress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlSetDriverBacking @ 0x14070AC20 (FsRtlSetDriverBacking.c)
 */

void __stdcall IoRegisterFileSystem(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *Flink; // rdx
  ULONG DeviceType; // eax
  __int64 *v5; // rcx
  ULONG Flags; // eax
  __int64 v7; // rcx
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *p_Queue; // rax
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v9; // rax
  struct _LIST_ENTRY *v10; // r8
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v11; // rax
  PVOID *v12; // rdi

  FsRtlSetDriverBacking((__int64)DeviceObject->DriverObject, 1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  IopSetFsRegistrationInProgress(1);
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  DeviceType = DeviceObject->DeviceType;
  switch ( DeviceType )
  {
    case 0x14u:
      v5 = (__int64 *)IopNetworkFileSystemQueueHead;
      Flink = &IopNetworkFileSystemQueueHead;
      goto LABEL_9;
    case 3u:
      Flink = &IopCdRomFileSystemQueueHead;
      DeviceObject->DriverObject->Flags |= 0x80u;
      v5 = (__int64 *)IopCdRomFileSystemQueueHead;
      goto LABEL_9;
    case 8u:
      Flink = &IopDiskFileSystemQueueHead;
      DeviceObject->DriverObject->Flags |= 0x80u;
      v5 = (__int64 *)IopDiskFileSystemQueueHead;
      goto LABEL_9;
    case 0x20u:
      Flink = &IopTapeFileSystemQueueHead;
      DeviceObject->DriverObject->Flags |= 0x80u;
      v5 = (__int64 *)IopTapeFileSystemQueueHead;
LABEL_9:
      Flags = DeviceObject->Flags;
      if ( (Flags & 0x10000) != 0 )
      {
        v7 = Flink[1];
        p_Queue = &DeviceObject->Queue;
        Flink = *(__int64 **)(v7 + 8);
        if ( *Flink == v7 )
        {
          p_Queue->ListEntry.Flink = (struct _LIST_ENTRY *)v7;
          DeviceObject->Queue.ListEntry.Blink = (struct _LIST_ENTRY *)Flink;
          *Flink = (__int64)p_Queue;
          *(_QWORD *)(v7 + 8) = p_Queue;
          break;
        }
      }
      else if ( (Flags & 0x200) != 0 )
      {
        v9 = &DeviceObject->Queue;
        if ( (__int64 *)v5[1] == Flink )
        {
          v9->ListEntry.Flink = (struct _LIST_ENTRY *)v5;
          DeviceObject->Queue.ListEntry.Blink = (struct _LIST_ENTRY *)Flink;
          v5[1] = (__int64)v9;
          *Flink = (__int64)v9;
          break;
        }
      }
      else
      {
        v10 = (struct _LIST_ENTRY *)Flink;
        while ( v5 != Flink && _bittest((const signed __int32 *)v5 - 8, 9u) )
        {
          v10 = (struct _LIST_ENTRY *)v5;
          v5 = (__int64 *)*v5;
        }
        Flink = (__int64 *)v10->Flink;
        v11 = &DeviceObject->Queue;
        if ( v10->Flink->Blink == v10 )
        {
          v11->ListEntry.Flink = (struct _LIST_ENTRY *)Flink;
          DeviceObject->Queue.ListEntry.Blink = v10;
          Flink[1] = (__int64)v11;
          v10->Flink = &v11->ListEntry;
          break;
        }
      }
      __fastfail(3u);
  }
  ++IopFsRegistrationOps;
  DeviceObject->Flags &= ~0x80u;
  v12 = (PVOID *)IopFsNotifyChangeQueueHead;
  while ( v12 != &IopFsNotifyChangeQueueHead )
  {
    LOBYTE(Flink) = 1;
    v12 = (PVOID *)*v12;
    guard_dispatch_icall_no_overrides(DeviceObject, Flink);
  }
  IopSetFsRegistrationInProgress(0);
  ExReleaseResourceLite(&IopDatabaseResource);
  IopSetFsRegistrationInProgress(0);
  KeLeaveCriticalRegion();
  IopIncrementDeviceObjectRefCount((ULONG_PTR)DeviceObject, 1);
}
