/*
 * XREFs of imp_WdfUsbInterfaceSelectSetting @ 0x14007F9B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_DDd @ 0x140002768 (WPP_IFR_SF_DDd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x14004F8DC (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x140050644 (-SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x14009FA4C (-SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_D.c)
 */

__int64 __fastcall imp_WdfUsbInterfaceSelectSetting(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS *Params)
{
  __int64 result; // rax
  unsigned __int8 v7; // dl
  unsigned int _a2; // ecx
  unsigned int v9; // ebx
  _USB_INTERFACE_DESCRIPTOR *v10; // rax
  _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]
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
  if ( !Params )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( (int)result >= 0 )
  {
    _a2 = Params->Size;
    if ( Params->Size != 16 )
    {
      v9 = -1073741820;
      WPP_IFR_SF_DDd(pFxDriverGlobals, v7, 0xEu, 0xAu, WPP_FxUsbInterfaceAPI_cpp_Traceguids, _a2, 0x10u, -1073741820);
      return v9;
    }
    result = FxValidateObjectAttributes(pFxDriverGlobals, PipesAttributes, 1);
    if ( (int)result < 0 )
      return result;
    switch ( Params->Type )
    {
      case WdfUsbInterfaceSelectSettingTypeDescriptor:
        InterfaceDescriptor = Params->Types.Descriptor.InterfaceDescriptor;
        if ( !InterfaceDescriptor )
        {
          v9 = -1073741811;
          WPP_IFR_SF_D(pFxDriverGlobals, 2u, 0xEu, 0xBu, WPP_FxUsbInterfaceAPI_cpp_Traceguids, 0xC000000D);
          return v9;
        }
        return (unsigned int)FxUsbInterface::SelectSettingByDescriptor(
                               pUsbInterface,
                               PipesAttributes,
                               InterfaceDescriptor);
      case WdfUsbInterfaceSelectSettingTypeSetting:
        return (unsigned int)FxUsbInterface::SelectSettingByIndex(
                               pUsbInterface,
                               PipesAttributes,
                               Params->Types.Interface.SettingIndex);
      case WdfUsbInterfaceSelectSettingTypeUrb:
        v10 = Params->Types.Descriptor.InterfaceDescriptor;
        if ( !v10 || *(_WORD *)&v10->bInterfaceNumber != 1 || *(_WORD *)&v10->bLength < 0x38u )
        {
          v9 = -1073741811;
          WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 0xEu, 0xCu, WPP_FxUsbInterfaceAPI_cpp_Traceguids, v10, -1073741811);
          return v9;
        }
        return (unsigned int)FxUsbInterface::SelectSetting(pUsbInterface, PipesAttributes, Params->Types.Urb.Urb);
      default:
        return (unsigned int)-1073741811;
    }
  }
  return result;
}
