/*
 * XREFs of imp_VfWdfCxDeviceInitSetFileObjectConfig @ 0x1400DD580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfCxDeviceInitSetFileObjectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDFCX_FILEOBJECT_CONFIG *CxFileObjectConfig,
        _WDF_OBJECT_ATTRIBUTES *FileObjectAttributes)
{
  WdfVersion.Functions.pfnWdfCxDeviceInitSetFileObjectConfig(
    DriverGlobals,
    CxDeviceInit,
    CxFileObjectConfig,
    FileObjectAttributes);
}
