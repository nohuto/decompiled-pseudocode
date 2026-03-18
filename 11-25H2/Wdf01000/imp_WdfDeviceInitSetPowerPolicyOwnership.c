/*
 * XREFs of imp_WdfDeviceInitSetPowerPolicyOwnership @ 0x1400905E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetPowerPolicyOwnership(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        unsigned __int8 IsPowerPolicyOwner)
{
  _WDF_TRI_STATE v3; // eax
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = WdfFalse;
  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  LOBYTE(v3) = IsPowerPolicyOwner != 0;
  DeviceInit->PnpPower.PowerPolicyOwner = v3;
}
