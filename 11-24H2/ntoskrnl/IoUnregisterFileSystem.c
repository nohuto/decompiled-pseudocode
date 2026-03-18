/*
 * XREFs of IoUnregisterFileSystem @ 0x140714D40
 * Callers:
 *     RawShutdown @ 0x14077CA40 (RawShutdown.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1403F1910 (IopDecrementDeviceObjectRefCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall IoUnregisterFileSystem(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r9
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *p_Queue; // r8
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  PVOID *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  p_Queue = &DeviceObject->Queue;
  Flink = DeviceObject->Queue.ListEntry.Flink;
  if ( Flink )
  {
    if ( (union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *)Flink->Blink != p_Queue
      || (Blink = DeviceObject->Queue.ListEntry.Blink,
          (union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *)Blink->Flink != p_Queue) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
  }
  v7 = (PVOID *)IopFsNotifyChangeQueueHead;
  while ( v7 != &IopFsNotifyChangeQueueHead )
  {
    v7 = (PVOID *)*v7;
    guard_dispatch_icall_no_overrides(DeviceObject, 0LL, p_Queue, v3);
  }
  ++IopFsRegistrationOps;
  ExReleaseResourceLite(&IopDatabaseResource);
  KeLeaveCriticalRegion();
  IopDecrementDeviceObjectRefCount((ULONG_PTR)DeviceObject, 1);
}
