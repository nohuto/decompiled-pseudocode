/*
 * XREFs of imp_WdfUsbTargetDeviceCyclePortSynchronously @ 0x14009C710
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x14009EEF8 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 */

int __fastcall imp_WdfUsbTargetDeviceCyclePortSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice)
{
  int result; // eax
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxUsbDevice *pUsbDevice; // [rsp+50h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pUsbDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice,
    &pFxDriverGlobals);
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( result >= 0 )
    return FxUsbDevice::CyclePort(pUsbDevice);
  return result;
}
