/*
 * XREFs of imp_WdfDeviceInitFree @ 0x14008FF00
 * Callers:
 *     <none>
 * Callees:
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x14007CE60 (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitFree(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( !DeviceInit->CreatedOnStack )
    WDFDEVICE_INIT::`scalar deleting destructor'(DeviceInit);
}
