/*
 * XREFs of KeyboardClassPoRequestComplete @ 0x1C0005070
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardClassCheckWaitWakeEnabled @ 0x1C0003960 (KeyboardClassCheckWaitWakeEnabled.c)
 *     KeyboardClassLogError @ 0x1C0005970 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006414 (WPP_RECORDER_SF_q.c)
 */

void __fastcall KeyboardClassPoRequestComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context)
{
  PVOID DeviceExtension; // rsi
  POWER_STATE v6; // ebx
  KIRQL v7; // al
  int v8; // edx
  _QWORD *Pool2; // rdi
  int v10; // r8d
  PIO_WORKITEM WorkItem; // rax
  NTSTATUS v12; // eax
  struct _IO_WORKITEM *v13; // rcx

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( Context )
  {
    v6.SystemState = (SYSTEM_POWER_STATE)Context->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
    PoSetPowerState(*(PDEVICE_OBJECT *)DeviceExtension, SystemPowerState, v6);
    *((POWER_STATE *)DeviceExtension + 48) = v6;
    PoStartNextPowerIrp(Context);
    ++Context->CurrentLocation;
    ++Context->Tail.Overlay.CurrentStackLocation;
    PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Context);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Context, 0x20u);
    return;
  }
  if ( *((int *)DeviceExtension + 71) > 1 && *((int *)DeviceExtension + 72) > 1 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeviceExtension + 9);
    if ( *((_QWORD *)DeviceExtension + 37) && !*((_BYTE *)DeviceExtension + 304) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)DeviceExtension + 9, v7);
      return;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)DeviceExtension + 9, v7);
    if ( (unsigned __int8)KeyboardClassCheckWaitWakeEnabled((__int64)DeviceExtension) )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1130652235LL);
      if ( Pool2 )
      {
        WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)DeviceExtension);
        Pool2[2] = WorkItem;
        if ( WorkItem )
        {
          Pool2[1] = DeviceExtension;
          *Pool2 = 0LL;
          v12 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Pool2, File, 1u, 0x20u);
          v13 = (struct _IO_WORKITEM *)Pool2[2];
          if ( v12 >= 0 )
          {
            IoQueueWorkItem(v13, KeyboardClassCreateWaitWakeIrpWorker, DelayedWorkQueue, Pool2);
            return;
          }
          IoFreeWorkItem(v13);
        }
        ExFreePoolWithTag(Pool2, 0);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, v8, v10, 98);
      KeyboardClassLogError(*(_QWORD *)DeviceExtension, -2147155954, 1, -1073741670, 0, 0LL, 0);
    }
  }
}
