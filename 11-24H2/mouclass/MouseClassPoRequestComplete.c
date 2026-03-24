/*
 * XREFs of MouseClassPoRequestComplete @ 0x1C0004FD0
 * Callers:
 *     <none>
 * Callees:
 *     MouseClassCheckWaitWakeEnabled @ 0x1C00037A0 (MouseClassCheckWaitWakeEnabled.c)
 *     MouseClassLogError @ 0x1C00056A0 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_q @ 0x1C0005E78 (WPP_RECORDER_SF_q.c)
 */

void __fastcall MouseClassPoRequestComplete(
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
    *((POWER_STATE *)DeviceExtension + 44) = v6;
    PoStartNextPowerIrp(Context);
    ++Context->CurrentLocation;
    ++Context->Tail.Overlay.CurrentStackLocation;
    PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Context);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Context, 0x20u);
    return;
  }
  if ( *((int *)DeviceExtension + 67) > 1 && *((int *)DeviceExtension + 68) > 1 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeviceExtension + 9);
    if ( *((_QWORD *)DeviceExtension + 35) && !*((_BYTE *)DeviceExtension + 288) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)DeviceExtension + 9, v7);
      return;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)DeviceExtension + 9, v7);
    if ( (unsigned __int8)MouseClassCheckWaitWakeEnabled((__int64)DeviceExtension) )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1131769677LL);
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
            IoQueueWorkItem(v13, MouseClassCreateWaitWakeIrpWorker, DelayedWorkQueue, Pool2);
            return;
          }
          IoFreeWorkItem(v13);
        }
        ExFreePoolWithTag(Pool2, 0);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, v8, v10, 92);
      MouseClassLogError(*(_QWORD *)DeviceExtension, -2147155954, 2, -1073741670, 0, 0LL, 0);
    }
  }
}
