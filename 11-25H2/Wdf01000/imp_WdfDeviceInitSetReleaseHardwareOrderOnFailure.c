/*
 * XREFs of imp_WdfDeviceInitSetReleaseHardwareOrderOnFailure @ 0x140090620
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetReleaseHardwareOrderOnFailure(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        int ReleaseHardwareOrderOnFailure)
{
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( ReleaseHardwareOrderOnFailure && ReleaseHardwareOrderOnFailure <= 2 )
  {
    DeviceInit->ReleaseHardwareOrderOnFailure = ReleaseHardwareOrderOnFailure;
  }
  else
  {
    WPP_IFR_SF_D(
      DeviceInit->DriverGlobals,
      2u,
      0x12u,
      0x25u,
      WPP_FxDeviceInitApi_cpp_Traceguids,
      ReleaseHardwareOrderOnFailure);
    FxVerifierDbgBreakPoint(DeviceInit->DriverGlobals);
  }
}
