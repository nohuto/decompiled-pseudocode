/*
 * XREFs of imp_WdfDeviceInitSetDeviceClass @ 0x1400903D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetDeviceClass(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _GUID *DeviceClassGuid)
{
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( !DeviceClassGuid )
    FxVerifierNullBugCheck(DeviceInit->DriverGlobals, retaddr);
  DeviceInit->Security.DeviceClassSet = 1;
  DeviceInit->Security.DeviceClass = *DeviceClassGuid;
}
