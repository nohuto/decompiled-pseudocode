/*
 * XREFs of ?IsDockDevice@DockProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x1801B7DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DockProcessor::IsDockDevice(const struct DeviceInfo *a1)
{
  return *((_DWORD *)a1 + 1) == 0x100000;
}
