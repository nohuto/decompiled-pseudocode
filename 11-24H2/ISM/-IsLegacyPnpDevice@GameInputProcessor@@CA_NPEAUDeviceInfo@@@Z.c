/*
 * XREFs of ?IsLegacyPnpDevice@GameInputProcessor@@CA_NPEAUDeviceInfo@@@Z @ 0x18004C49C
 * Callers:
 *     ?OnDeviceAttach@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x18004C3A0 (-OnDeviceAttach@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x180091B90 (-OnDeviceRemoval@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall GameInputProcessor::IsLegacyPnpDevice(struct DeviceInfo *a1)
{
  return *((_DWORD *)a1 + 2) >= 0x60Cu && *((_WORD *)a1 + 38) != 0;
}
