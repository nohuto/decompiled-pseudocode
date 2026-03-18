/*
 * XREFs of imp_WdfUsbInterfaceGetConfiguredPipe @ 0x140067780
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x140055CD8 (WPP_IFR_SF_DDd.c)
 *     ?GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x14006782C (-GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

WDFUSBPIPE__ *__fastcall imp_WdfUsbInterfaceGetConfiguredPipe(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        unsigned __int8 PipeIndex,
        _WDF_USB_PIPE_INFORMATION *PipeInfo)
{
  unsigned __int8 v6; // dl
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxUsbInterface *pUsbInterface; // [rsp+68h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pUsbInterface = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbInterface,
    0x1204u,
    (void **)&pUsbInterface,
    &pFxDriverGlobals);
  if ( !PipeInfo || PipeInfo->Size == 20 )
    return FxUsbInterface::GetConfiguredPipe(pUsbInterface, PipeIndex, PipeInfo);
  WPP_IFR_SF_DDd(
    pFxDriverGlobals,
    v6,
    0xEu,
    0xEu,
    WPP_FxUsbInterfaceAPI_cpp_Traceguids,
    PipeInfo->Size,
    0x14u,
    -1073741820);
  FxVerifierDbgBreakPoint(pFxDriverGlobals);
  return 0LL;
}
