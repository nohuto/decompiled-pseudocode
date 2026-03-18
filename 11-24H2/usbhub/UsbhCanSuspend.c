/*
 * XREFs of UsbhCanSuspend @ 0x1400495C4
 * Callers:
 *     UsbhFdoQuerySystemPowerSxIoCompletion @ 0x14004A4F0 (UsbhFdoQuerySystemPowerSxIoCompletion.c)
 *     UsbhFdoSxIoComplete_Action @ 0x14004A940 (UsbhFdoSxIoComplete_Action.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

bool __fastcall UsbhCanSuspend(__int64 a1, int a2)
{
  return FdoExt(a1)[a2 + 1252] == 3;
}
