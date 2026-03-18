/*
 * XREFs of imp_WdfUsbTargetDeviceCreateIsochUrb @ 0x140072470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x14007252C (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfUsbTargetDeviceCreateIsochUrb(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned int NumberOfIsochPackets,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  FxUsbDevice *pUsbDevice; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF

  pFxDriverGlobals = 0LL;
  pUsbDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice,
    &pFxDriverGlobals);
  if ( !UrbMemory )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( pUsbDevice->m_USBDHandle )
    return FxUsbDevice::CreateIsochUrb(pUsbDevice, Attributes, NumberOfIsochPackets, UrbMemory, Urb);
  WPP_IFR_SF_D(pFxDriverGlobals, 2u, 0xEu, 0x1Fu, WPP_FxUsbDeviceAPI_cpp_Traceguids, 0xC0000184);
  return -1073741436;
}
