/*
 * XREFs of WdmlibIoCreateDeviceSecure @ 0x1400DB5F0
 * Callers:
 *     ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140048B00 (-CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     WdmlibInit @ 0x1400D954C (WdmlibInit.c)
 */

__int64 __fastcall WdmlibIoCreateDeviceSecure(
        _DRIVER_OBJECT *DriverObject,
        unsigned int DeviceName,
        _UNICODE_STRING *DeviceType,
        unsigned int DeviceCharacteristics,
        unsigned int Exclusive,
        unsigned __int8 DefaultSDDLString,
        const _UNICODE_STRING *DeviceClassGuid,
        const _GUID *DeviceObject,
        _DEVICE_OBJECT **DriverObject_0)
{
  if ( !WdmlibInitialized )
    WdmlibInit();
  return ((__int64 (__fastcall *)(_DRIVER_OBJECT *, __int64, _UNICODE_STRING *, _QWORD, unsigned int, unsigned __int8, const _UNICODE_STRING *, const _GUID *, _DEVICE_OBJECT **))PfnIoCreateDeviceSecure)(
           DriverObject,
           40LL,
           DeviceType,
           DeviceCharacteristics,
           Exclusive,
           DefaultSDDLString,
           DeviceClassGuid,
           DeviceObject,
           DriverObject_0);
}
