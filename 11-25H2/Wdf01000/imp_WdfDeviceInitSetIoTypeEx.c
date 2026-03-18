/*
 * XREFs of imp_WdfDeviceInitSetIoTypeEx @ 0x140090410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_DDd @ 0x140055CD8 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AssignIoType@WDFDEVICE_INIT@@QEAAXPEAU_WDF_IO_TYPE_CONFIG@@@Z @ 0x140083B04 (-AssignIoType@WDFDEVICE_INIT@@QEAAXPEAU_WDF_IO_TYPE_CONFIG@@@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetIoTypeEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_IO_TYPE_CONFIG *IoTypeConfig)
{
  _FX_DRIVER_GLOBALS *v3; // rcx
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !DeviceInit )
    FxVerifierNullBugCheck(v3, retaddr);
  if ( IoTypeConfig->Size == 16 )
    WDFDEVICE_INIT::AssignIoType(DeviceInit, IoTypeConfig);
  else
    WPP_IFR_SF_DDd(
      v3,
      (unsigned __int8)DeviceInit,
      0xCu,
      0xAu,
      WPP_FxDeviceInitApi_cpp_Traceguids,
      IoTypeConfig->Size,
      0x10u,
      -1073741820);
}
