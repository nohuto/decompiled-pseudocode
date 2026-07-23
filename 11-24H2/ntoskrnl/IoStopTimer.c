/*
 * XREFs of IoStopTimer @ 0x140593C50
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x140593020 (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer((__int64)DeviceObject->Timer);
}
