/*
 * XREFs of WdmlibIoCreateDeviceSecure @ 0x1401408C0
 * Callers:
 *     NdisRegisterDeviceEx @ 0x14008A8B0 (NdisRegisterDeviceEx.c)
 *     ?ndisLwmInitializeSubsystem@@YAJXZ @ 0x140199A14 (-ndisLwmInitializeSubsystem@@YAJXZ.c)
 *     ?ndisKLoaderCreateControlDeviceObject@@YAPEAU_DEVICE_OBJECT@@PEAU_DRIVER_OBJECT@@@Z @ 0x140199AEC (-ndisKLoaderCreateControlDeviceObject@@YAPEAU_DEVICE_OBJECT@@PEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     WdmlibInit @ 0x140157954 (WdmlibInit.c)
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
