/*
 * XREFs of ZwResetEvent @ 0x1406AA490
 * Callers:
 *     DifZwResetEventWrapper @ 0x140645B60 (DifZwResetEventWrapper.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140718298 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140A4AED8 (PfSnVolumeCheckIsSdBus.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140A4F244 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A73830 (PiDrvDbLoadNodeWorkerCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
