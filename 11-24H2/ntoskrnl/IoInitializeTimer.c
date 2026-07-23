/*
 * XREFs of IoInitializeTimer @ 0x140711D70
 * Callers:
 *     DifIoInitializeTimerWrapper @ 0x140627A20 (DifIoInitializeTimerWrapper.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x140420930 (ExInterlockedInsertTailList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoInitializeTimer(PDEVICE_OBJECT DeviceObject, PIO_TIMER_ROUTINE TimerRoutine, PVOID Context)
{
  PIO_TIMER Timer; // rax

  Timer = DeviceObject->Timer;
  if ( !Timer )
  {
    Timer = (PIO_TIMER)ExAllocatePool2(0x40uLL, 0x30uLL, 0x69546F49u);
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
