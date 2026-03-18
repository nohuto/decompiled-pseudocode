/*
 * XREFs of IoRegisterFsRegistrationChangeMountAware @ 0x1407144C0
 * Callers:
 *     IoRegisterFsRegistrationChange @ 0x1407144A0 (IoRegisterFsRegistrationChange.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x1403C5078 (IopIsKnownGoodLegacyFsFilter.c)
 *     IoGetActivityIdThread @ 0x14043F3F0 (IoGetActivityIdThread.c)
 *     IopGetFsRegistrationInProgress @ 0x140596EA8 (IopGetFsRegistrationInProgress.c)
 *     McTemplateK0hzr0_EtwWriteTransfer @ 0x140596F74 (McTemplateK0hzr0_EtwWriteTransfer.c)
 *     FsRtlSetDriverBacking @ 0x14070D080 (FsRtlSetDriverBacking.c)
 *     IopNotifyAlreadyRegisteredFileSystems @ 0x140714FE0 (IopNotifyAlreadyRegisteredFileSystems.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoRegisterFsRegistrationChangeMountAware(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine,
        BOOLEAN SynchronizeWithMounts)
{
  __int64 v6; // rbx
  struct _LIST_ENTRY *ActivityIdThread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v12; // ebx
  _QWORD *Pool2; // rax
  _QWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8

  if ( IopBlockLegacyFsFilters && !IopIsKnownGoodLegacyFsFilter((const void **)&DriverObject->DriverName) )
  {
    if ( (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0 )
    {
      v6 = DriverObject->DriverName.Length >> 1;
      ActivityIdThread = IoGetActivityIdThread();
      McTemplateK0hzr0_EtwWriteTransfer(
        v9,
        v8,
        (const GUID *)ActivityIdThread,
        v6,
        (__int64)DriverObject->DriverName.Buffer);
    }
    return -1073741637;
  }
  result = FsRtlSetDriverBacking((__int64)DriverObject, 1);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !SynchronizeWithMounts )
  {
LABEL_11:
    ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
    goto LABEL_12;
  }
  if ( !ExAcquireResourceExclusiveLite(&IopDatabaseResource, 0) )
  {
    if ( IopGetFsRegistrationInProgress() )
    {
      v12 = -1073741267;
LABEL_18:
      KeLeaveCriticalRegion();
      return v12;
    }
    goto LABEL_11;
  }
LABEL_12:
  if ( IopFsNotifyChangeQueueHead != &IopFsNotifyChangeQueueHead
    && *(PDRIVER_OBJECT *)(qword_140F8C628 + 16) == DriverObject
    && *(PDRIVER_FS_NOTIFICATION *)(qword_140F8C628 + 24) == DriverNotificationRoutine )
  {
    ExReleaseResourceLite(&IopDatabaseResource);
    v12 = -1073741768;
    goto LABEL_18;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
  {
    ExReleaseResourceLite(&IopDatabaseResource);
    v12 = -1073741670;
    goto LABEL_18;
  }
  Pool2[2] = DriverObject;
  Pool2[3] = DriverNotificationRoutine;
  v14 = (_QWORD *)qword_140F8C628;
  if ( *(PVOID **)qword_140F8C628 != &IopFsNotifyChangeQueueHead )
    __fastfail(3u);
  *Pool2 = &IopFsNotifyChangeQueueHead;
  Pool2[1] = v14;
  *v14 = Pool2;
  qword_140F8C628 = (__int64)Pool2;
  if ( SynchronizeWithMounts == 1 )
  {
    while ( IopMountsInProgress )
    {
      ++IopMountCompletionWaiters;
      ExReleaseResourceLite(&IopDatabaseResource);
      KeWaitForSingleObject(&IopMountCompletionEvent, Executive, 0, 0, 0LL);
      ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
      if ( --IopMountCompletionWaiters )
      {
        if ( !IopMountsInProgress )
          break;
      }
      KeResetEvent(&IopMountCompletionEvent);
    }
  }
  IopNotifyAlreadyRegisteredFileSystems(&IopNetworkFileSystemQueueHead, DriverNotificationRoutine, 0LL);
  LOBYTE(v15) = 1;
  IopNotifyAlreadyRegisteredFileSystems(&IopCdRomFileSystemQueueHead, DriverNotificationRoutine, v15);
  LOBYTE(v16) = 1;
  IopNotifyAlreadyRegisteredFileSystems(&IopDiskFileSystemQueueHead, DriverNotificationRoutine, v16);
  LOBYTE(v17) = 1;
  IopNotifyAlreadyRegisteredFileSystems(&IopTapeFileSystemQueueHead, DriverNotificationRoutine, v17);
  ExReleaseResourceLite(&IopDatabaseResource);
  KeLeaveCriticalRegion();
  PsReferenceSiloContext(DriverObject);
  return 0;
}
