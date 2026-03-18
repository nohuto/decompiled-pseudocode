/*
 * XREFs of DpIndicateConnectorChange @ 0x14004D250
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x140027534 (DpiFdoHandleDisplayDetectControl.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x140027A48 (DpiFdoQueueConnectionChangePackage.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037E164 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpIndicateConnectorChange(PDEVICE_OBJECT DeviceObject)
{
  unsigned int v1; // ebx
  char v3; // r15
  char v4; // bp
  char *DeviceExtension; // rdi
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v7; // rcx
  struct _IO_WORKITEM *WorkItem; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  v3 = 0;
  v4 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( DeviceObject )
  {
    DeviceExtension = (char *)DeviceObject->DeviceExtension;
    if ( DeviceExtension && *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v7 = (KSPIN_LOCK *)(DeviceExtension + 3656);
      if ( CurrentIrql >= 2u )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel(v7, &LockHandle);
      }
      else
      {
        v3 = 1;
        KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
      }
      if ( (*((_DWORD *)DeviceExtension + 913) & 2) == 0 )
      {
        v4 = 1;
        KeClearEvent((PRKEVENT)(DeviceExtension + 3664));
      }
      *((_DWORD *)DeviceExtension + 913) |= 1u;
      if ( v3 )
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      else
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( v4 )
      {
        WorkItem = IoAllocateWorkItem(DeviceObject);
        if ( WorkItem )
        {
          IoQueueWorkItemEx(WorkItem, DpiIndicateConnectorChangeWorkItem, DelayedWorkQueue, 0LL);
        }
        else
        {
          WdLogSingleEntry1(6LL, 0LL);
          WdLogGlobalForLineNumber = 1521;
        }
      }
    }
    else
    {
      v1 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 1466;
    }
  }
  else
  {
    v1 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1453;
  }
  return v1;
}
