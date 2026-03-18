/*
 * XREFs of IoUnregisterFsRegistrationChange @ 0x140714E00
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
