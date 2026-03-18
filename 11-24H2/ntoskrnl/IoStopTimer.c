/*
 * XREFs of IoStopTimer @ 0x140596C70
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x140595FF0 (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer((__int64)DeviceObject->Timer);
}
