/*
 * XREFs of IoRegisterFileSystem @ 0x1407081F0
 * Callers:
 *     RawInitialize @ 0x140C25460 (RawInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14041D000 (IopIncrementDeviceObjectRefCount.c)
 *     IopSetFsRegistrationInProgress @ 0x140593890 (IopSetFsRegistrationInProgress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlSetDriverBacking @ 0x1407011A0 (FsRtlSetDriverBacking.c)
 */

void __stdcall IoRegisterFileSystem(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG DeviceType; // eax
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  ULONG Flags; // eax
  struct _LIST_ENTRY *v7; // rcx
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *p_Queue; // rax
  struct _LIST_ENTRY *Blink; // rdx
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v10; // rax
  struct _LIST_ENTRY *v11; // r8
  struct _LIST_ENTRY *Flink; // rdx
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v13; // rax
  PVOID *v14; // rdi

  FsRtlSetDriverBacking((__int64)DeviceObject->DriverObject, 1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  IopSetFsRegistrationInProgress(1);
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  DeviceType = DeviceObject->DeviceType;
  switch ( DeviceType )
  {
    case 0x14u:
      v4 = (__int64 *)IopNetworkFileSystemQueueHead;
      v5 = &IopNetworkFileSystemQueueHead;
      goto LABEL_9;
    case 3u:
      v5 = &IopCdRomFileSystemQueueHead;
      DeviceObject->DriverObject->Flags |= 0x80u;
      v4 = (__int64 *)IopCdRomFileSystemQueueHead;
      goto LABEL_9;
    case 8u:
      v5 = &IopDiskFileSystemQueueHead;
      DeviceObject->DriverObject->Flags |= 0x80u;
      v4 = (__int64 *)IopDiskFileSystemQueueHead;
      goto LABEL_9;
    case 0x20u:
      v5 = &IopTapeFileSystemQueueHead;
      DeviceObject->DriverObject->Flags |= 0x80u;
      v4 = (__int64 *)IopTapeFileSystemQueueHead;
LABEL_9:
      Flags = DeviceObject->Flags;
      if ( (Flags & 0x10000) != 0 )
      {
        v7 = (struct _LIST_ENTRY *)v5[1];
        p_Queue = &DeviceObject->Queue;
        Blink = v7->Blink;
        if ( Blink->Flink == v7 )
        {
          p_Queue->ListEntry.Flink = v7;
          DeviceObject->Queue.ListEntry.Blink = Blink;
          Blink->Flink = &p_Queue->ListEntry;
          v7->Blink = &p_Queue->ListEntry;
          break;
        }
      }
      else if ( (Flags & 0x200) != 0 )
      {
        v10 = &DeviceObject->Queue;
        if ( (__int64 *)v4[1] == v5 )
        {
          v10->ListEntry.Flink = (struct _LIST_ENTRY *)v4;
          DeviceObject->Queue.ListEntry.Blink = (struct _LIST_ENTRY *)v5;
          v4[1] = (__int64)v10;
          *v5 = (__int64)v10;
          break;
        }
      }
      else
      {
        v11 = (struct _LIST_ENTRY *)v5;
        while ( v4 != v5 && _bittest((const signed __int32 *)v4 - 8, 9u) )
        {
          v11 = (struct _LIST_ENTRY *)v4;
          v4 = (__int64 *)*v4;
        }
        Flink = v11->Flink;
        v13 = &DeviceObject->Queue;
        if ( v11->Flink->Blink == v11 )
        {
          v13->ListEntry.Flink = Flink;
          DeviceObject->Queue.ListEntry.Blink = v11;
          Flink->Blink = &v13->ListEntry;
          v11->Flink = &v13->ListEntry;
          break;
        }
      }
      __fastfail(3u);
  }
  ++IopFsRegistrationOps;
  DeviceObject->Flags &= ~0x80u;
  v14 = (PVOID *)IopFsNotifyChangeQueueHead;
  while ( v14 != &IopFsNotifyChangeQueueHead )
  {
    v14 = (PVOID *)*v14;
    guard_dispatch_icall_no_overrides(DeviceObject);
  }
  IopSetFsRegistrationInProgress(0);
  ExReleaseResourceLite(&IopDatabaseResource);
  IopSetFsRegistrationInProgress(0);
  KeLeaveCriticalRegion();
  IopIncrementDeviceObjectRefCount((ULONG_PTR)DeviceObject, 1);
}
