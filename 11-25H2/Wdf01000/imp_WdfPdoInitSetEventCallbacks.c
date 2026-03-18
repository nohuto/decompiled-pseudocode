/*
 * XREFs of imp_WdfPdoInitSetEventCallbacks @ 0x140078F40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_dd @ 0x140005770 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfPdoInitSetEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_PDO_EVENT_CALLBACKS *DispatchTable)
{
  _FX_DRIVER_GLOBALS *v5; // rsi
  _FX_DRIVER_GLOBALS *v6; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = DeviceInit->DriverGlobals;
  v6 = DeviceInit->DriverGlobals;
  if ( !DispatchTable )
    FxVerifierNullBugCheck(v6, retaddr);
  if ( (int)FxVerifierCheckIrqlLevel(v6, 0) >= 0 )
  {
    if ( DeviceInit->InitType == FxDeviceInitTypePdo )
    {
      if ( ((DispatchTable->Size - 56) & 0xFFFFFFF7) == 0 )
      {
        *(_OWORD *)&DeviceInit->Pdo.EventCallbacks.Size = *(_OWORD *)&DispatchTable->Size;
        *(_OWORD *)&DeviceInit->Pdo.EventCallbacks.EvtDeviceResourceRequirementsQuery = *(_OWORD *)&DispatchTable->EvtDeviceResourceRequirementsQuery;
        *(_OWORD *)&DeviceInit->Pdo.EventCallbacks.EvtDeviceSetLock = *(_OWORD *)&DispatchTable->EvtDeviceSetLock;
        *(_OWORD *)&DeviceInit->Pdo.EventCallbacks.EvtDeviceDisableWakeAtBus = *(_OWORD *)&DispatchTable->EvtDeviceDisableWakeAtBus;
        return;
      }
      WPP_IFR_SF_dd(v5, 2u, 0x12u, 0x36u, WPP_FxDeviceInitApi_cpp_Traceguids, DispatchTable->Size, 64);
    }
    else
    {
      WPP_IFR_SF_(v5, 2u, 0x12u, 0x35u, WPP_FxDeviceInitApi_cpp_Traceguids);
    }
    FxVerifierDbgBreakPoint(v5);
  }
}
