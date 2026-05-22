/*
 * XREFs of ?IsSupportedDevice@HIDDeviceCollection@@MEAA_NPEAVRIMDevice@@@Z @ 0x1800DC930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall HIDDeviceCollection::IsSupportedDevice(HIDDeviceCollection *this, struct RIMDevice *a2)
{
  return *((_DWORD *)a2 + 6) == 2;
}
