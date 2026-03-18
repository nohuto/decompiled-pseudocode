/*
 * XREFs of IoStopTimer @ 0x1405935C0
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x140592990 (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer((__int64)DeviceObject->Timer);
}
