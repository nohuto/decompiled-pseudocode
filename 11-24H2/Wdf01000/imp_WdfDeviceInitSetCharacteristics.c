/*
 * XREFs of imp_WdfDeviceInitSetCharacteristics @ 0x14007E2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfDeviceInitSetCharacteristics(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        unsigned int DeviceCharacteristics,
        unsigned __int8 OrInValues)
{
  unsigned int v5; // eax
  FxString *DeviceName; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = DeviceCharacteristics;
  if ( OrInValues )
    v5 = DeviceInit->Characteristics | DeviceCharacteristics;
  DeviceInit->Characteristics = v5 | 0x100;
  if ( (DeviceCharacteristics & 0x80u) != 0 )
  {
    DeviceName = DeviceInit->DeviceName;
    if ( DeviceName )
    {
      DeviceName->Release(DeviceName, 0LL, 279, "minkernel\\wdf\\framework\\shared\\core\\fxdeviceinitapi.cpp");
      DeviceInit->DeviceName = 0LL;
    }
  }
}
