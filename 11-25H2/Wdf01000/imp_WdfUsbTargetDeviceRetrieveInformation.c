/*
 * XREFs of imp_WdfUsbTargetDeviceRetrieveInformation @ 0x14009D380
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x140055CD8 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceRetrieveInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_USB_DEVICE_INFORMATION *Information)
{
  unsigned __int8 v4; // dl
  FxUsbDevice *v6; // rcx
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxUsbDevice *pUsbDevice; // [rsp+60h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pUsbDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice,
    &pFxDriverGlobals);
  if ( !Information )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( Information->Size == 20 )
  {
    v6 = pUsbDevice;
    Information->Traits = pUsbDevice->m_Traits;
    Information->HcdPortCapabilities = v6->m_HcdPortCapabilities;
    Information->UsbdVersionInformation = v6->m_UsbdVersionInformation;
    return 0LL;
  }
  else
  {
    WPP_IFR_SF_DDd(
      pFxDriverGlobals,
      v4,
      0xEu,
      0xBu,
      WPP_FxUsbDeviceAPI_cpp_Traceguids,
      Information->Size,
      0x14u,
      -1073741820);
    return 3221225476LL;
  }
}
