/*
 * XREFs of imp_WdfUsbInterfaceGetDescriptor @ 0x14009C710
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfUsbInterfaceGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        unsigned __int8 SettingIndex,
        _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor)
{
  __int64 v5; // rdi
  unsigned __int8 iInterface; // al
  _USB_INTERFACE_DESCRIPTOR *v7; // rax
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]
  FxUsbInterface *pUsbInterface; // [rsp+40h] [rbp+8h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+58h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pUsbInterface = 0LL;
  v5 = SettingIndex;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbInterface,
    0x1204u,
    (void **)&pUsbInterface,
    &pFxDriverGlobals);
  if ( !InterfaceDescriptor )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( (unsigned __int8)v5 < pUsbInterface->m_NumSettings )
  {
    _mm_lfence();
    v7 = pUsbInterface->m_Settings[v5].InterfaceDescriptor;
    *(_QWORD *)&InterfaceDescriptor->bLength = *(_QWORD *)&v7->bLength;
    iInterface = v7->iInterface;
  }
  else
  {
    iInterface = 0;
    *(_QWORD *)&InterfaceDescriptor->bLength = 0LL;
  }
  InterfaceDescriptor->iInterface = iInterface;
}
