/*
 * XREFs of IoUnregisterFsRegistrationChange @ 0x140708D00
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterFsRegistrationChange(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rcx
  PVOID *v6; // rdx
  PVOID **v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  for ( i = (PVOID *)IopFsNotifyChangeQueueHead; i != &IopFsNotifyChangeQueueHead; i = (PVOID *)*i )
  {
    if ( i[2] == DriverObject && i[3] == DriverNotificationRoutine )
    {
      v6 = (PVOID *)*i;
      if ( *((PVOID **)*i + 1) != i || (v7 = (PVOID **)i[1], *v7 != i) )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = v7;
      ExFreePoolWithTag(i, 0);
      break;
    }
  }
  ExReleaseResourceLite(&IopDatabaseResource);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(DriverObject);
}
