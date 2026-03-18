/*
 * XREFs of imp_WdfDeviceRetrieveDeviceName @ 0x140070750
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x140031510 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall imp_WdfDeviceRetrieveDeviceName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFSTRING__ *String)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  FxString *pString; // [rsp+40h] [rbp-18h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+78h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  pString = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( (int)result >= 0 )
  {
    FxObjectHandleGetPtr(pFxDriverGlobals, (unsigned __int64)String, 0x1007u, (void **)&pString);
    if ( pDevice->m_DeviceName.Buffer )
    {
      return (unsigned int)FxString::Assign(pString, &pDevice->m_DeviceName);
    }
    else
    {
      v6 = -1073741811;
      WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 0xCu, 0xAu, WPP_FxDeviceApi_cpp_Traceguids, Device, -1073741811);
    }
    return v6;
  }
  return result;
}
