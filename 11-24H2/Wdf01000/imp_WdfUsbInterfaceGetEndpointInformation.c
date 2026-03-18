/*
 * XREFs of imp_WdfUsbInterfaceGetEndpointInformation @ 0x14009C880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_DDd @ 0x140002768 (WPP_IFR_SF_DDd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x14009F970 (-GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 */

void __fastcall imp_WdfUsbInterfaceGetEndpointInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        unsigned __int8 SettingIndex,
        unsigned __int8 EndpointIndex,
        _WDF_USB_PIPE_INFORMATION *EndpointInfo)
{
  unsigned __int8 v7; // dl
  FxUsbInterface *pUsbInterface; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF

  pFxDriverGlobals = 0LL;
  pUsbInterface = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbInterface,
    0x1204u,
    (void **)&pUsbInterface,
    &pFxDriverGlobals);
  if ( !EndpointInfo )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( EndpointInfo->Size == 20 )
  {
    FxUsbInterface::GetEndpointInformation(pUsbInterface, SettingIndex, EndpointIndex, EndpointInfo);
  }
  else
  {
    WPP_IFR_SF_DDd(
      pFxDriverGlobals,
      v7,
      0xEu,
      0xDu,
      WPP_FxUsbInterfaceAPI_cpp_Traceguids,
      EndpointInfo->Size,
      0x14u,
      -1073741820);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
  }
}
