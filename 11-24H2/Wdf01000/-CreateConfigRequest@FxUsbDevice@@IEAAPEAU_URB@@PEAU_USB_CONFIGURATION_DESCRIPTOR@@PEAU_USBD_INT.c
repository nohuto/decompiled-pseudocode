/*
 * XREFs of ?CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@@Z @ 0x14009E264
 * Callers:
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x14009F4C4 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1400A0054 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1400A03C0 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 * Callees:
 *     WPP_IFR_SF_qDd @ 0x1400017F0 (WPP_IFR_SF_qDd.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x140068900 (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 */

FX_POOL **__fastcall FxUsbDevice::CreateConfigRequest(
        FxUsbDevice *this,
        FX_POOL *ConfigDesc,
        _USBD_INTERFACE_LIST_ENTRY *InterfaceList)
{
  _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor; // rax
  _USBD_INTERFACE_LIST_ENTRY *_a2; // rbx
  unsigned __int16 v7; // di
  signed int v8; // eax
  unsigned __int8 v9; // dl
  __int64 v10; // r9
  unsigned int _a3; // r10d
  FX_POOL **result; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v14; // rax
  ULONG Tag; // r8d
  void **i; // r8
  int v17; // r11d
  _DWORD *v18; // r10
  int v19; // ecx
  _USB_INTERFACE_DESCRIPTOR *v20; // r9
  __m128i v21; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int16 size; // [rsp+80h] [rbp+18h] BYREF

  InterfaceDescriptor = InterfaceList->InterfaceDescriptor;
  _a2 = InterfaceList;
  if ( InterfaceList->InterfaceDescriptor )
  {
    v7 = 40;
    size = 40;
    while ( InterfaceDescriptor )
    {
      v8 = RtlUShortAdd(v7, 24 * (InterfaceDescriptor->bNumEndpoints + 1), &size);
      if ( v8 < 0 )
      {
        WPP_IFR_SF_qDd(this->m_Globals, v9, 0xEu, 0x10u, WPP_usbutil_cpp_Traceguids, _a2, _a3, v8);
        return 0LL;
      }
      v7 = size;
      InterfaceDescriptor = *(_USB_INTERFACE_DESCRIPTOR **)(v10 + 16);
    }
  }
  else
  {
    v7 = 88;
  }
  m_Globals = this->m_Globals;
  v14 = retaddr;
  v21 = 0LL;
  Tag = m_Globals->Tag;
  v21.m128i_i64[1] = 64LL;
  if ( !m_Globals->FxPoolTrackingOn )
    v14 = 0LL;
  result = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v21, v7, Tag, v14);
  if ( result )
  {
    for ( i = (void **)(result + 5); ; i = (void **)((char *)i + *(unsigned __int16 *)i) )
    {
      v20 = _a2->InterfaceDescriptor;
      if ( !_a2->InterfaceDescriptor )
        break;
      v17 = 0;
      *((_BYTE *)i + 2) = v20->bInterfaceNumber;
      *((_BYTE *)i + 3) = v20->bAlternateSetting;
      *((_DWORD *)i + 4) = v20->bNumEndpoints;
      *(_WORD *)i = 24 * (v20->bNumEndpoints + 1);
      if ( v20->bNumEndpoints )
      {
        v18 = i + 5;
        do
        {
          v19 = -(this->m_SspIsochPipeFlags != 0);
          *v18 = -1;
          ++v17;
          v18[1] = v19 & 0x100;
          v18 += 6;
        }
        while ( v17 < v20->bNumEndpoints );
      }
      _a2->Interface = (_USBD_INTERFACE_INFORMATION *)i;
      ++_a2;
    }
    *(_WORD *)result = v7;
    *((_WORD *)result + 1) = 0;
    result[3] = ConfigDesc;
  }
  return result;
}
