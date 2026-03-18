/*
 * XREFs of IoInitializeTimer @ 0x1407080E0
 * Callers:
 *     DifIoInitializeTimerWrapper @ 0x14061D4A0 (DifIoInitializeTimerWrapper.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x140354630 (ExInterlockedInsertTailList.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoInitializeTimer(PDEVICE_OBJECT DeviceObject, PIO_TIMER_ROUTINE TimerRoutine, PVOID Context)
{
  PIO_TIMER Timer; // rax

  Timer = DeviceObject->Timer;
  if ( !Timer )
  {
    Timer = (PIO_TIMER)ExAllocatePool2(0x40uLL);
    if ( !Timer )
      return -1073741670;
    Timer->Type = 9;
    Timer->DeviceObject = DeviceObject;
    DeviceObject->Timer = Timer;
  }
  Timer->TimerRoutine = (void (__fastcall *)(_DEVICE_OBJECT *, void *))TimerRoutine;
  Timer->Context = Context;
  ExInterlockedInsertTailList(&IopTimerQueueHead, &Timer->TimerList, &IopTimerLock);
  return 0;
}
