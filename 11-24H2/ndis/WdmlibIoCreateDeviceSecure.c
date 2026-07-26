/*
 * XREFs of WdmlibIoCreateDeviceSecure @ 0x1401358C0
 * Callers:
 *     NdisRegisterDeviceEx @ 0x14006E3B0 (NdisRegisterDeviceEx.c)
 *     ?ndisLwmInitializeSubsystem@@YAJXZ @ 0x14018E9AC (-ndisLwmInitializeSubsystem@@YAJXZ.c)
 *     ?ndisKLoaderCreateControlDeviceObject@@YAPEAU_DEVICE_OBJECT@@PEAU_DRIVER_OBJECT@@@Z @ 0x14018EA84 (-ndisKLoaderCreateControlDeviceObject@@YAPEAU_DEVICE_OBJECT@@PEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     WdmlibInit @ 0x14014CC84 (WdmlibInit.c)
 */

NTSTATUS __stdcall WdmlibIoCreateDeviceSecure(
        PDRIVER_OBJECT DriverObject,
        ULONG DeviceExtensionSize,
        PUNICODE_STRING DeviceName,
        ULONG DeviceType,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        PCUNICODE_STRING DefaultSDDLString,
        LPCGUID DeviceClassGuid,
        PDEVICE_OBJECT *DeviceObject)
{
  if ( !WdmlibInitialized )
    WdmlibInit(DriverObject, DeviceExtensionSize, DeviceName, DeviceType);
  return ((__int64 (__fastcall *)(PDRIVER_OBJECT, _QWORD, PUNICODE_STRING, __int64, int, _BYTE, PCUNICODE_STRING, _QWORD, PDEVICE_OBJECT *))PfnIoCreateDeviceSecure)(
           DriverObject,
           DeviceExtensionSize,
           DeviceName,
           18LL,
           256,
           0,
           DefaultSDDLString,
           0LL,
           DeviceObject);
}
