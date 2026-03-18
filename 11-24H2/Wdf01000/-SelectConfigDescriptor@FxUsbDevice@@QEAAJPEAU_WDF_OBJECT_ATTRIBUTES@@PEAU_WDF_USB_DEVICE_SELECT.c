/*
 * XREFs of ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x14009F4C4
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x14009D510 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x14004FC24 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@@Z @ 0x14009E264 (-CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INT.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfigDescriptor(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  _USB_CONFIGURATION_DESCRIPTOR *ConfigurationDescriptor; // r14
  _USB_INTERFACE_DESCRIPTOR **InterfaceDescriptors; // rsi
  __int64 NumInterfaceDescriptors; // rbx
  __int64 v8; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  bool v13; // zf
  ULONG Tag; // r8d
  unsigned __int64 v15; // r9
  void *v16; // rax
  FX_POOL **v17; // rax
  _USBD_INTERFACE_LIST_ENTRY *v18; // rbp
  unsigned int v19; // ebx
  FX_POOL **v20; // rcx
  __int64 v21; // rdx
  FX_POOL *v22; // rax
  FX_POOL **ConfigRequest; // rax
  FX_POOL **v24; // rsi
  __m128i v25; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  ConfigurationDescriptor = Params->Types.Descriptor.ConfigurationDescriptor;
  InterfaceDescriptors = Params->Types.Descriptor.InterfaceDescriptors;
  NumInterfaceDescriptors = Params->Types.Descriptor.NumInterfaceDescriptors;
  v8 = 0LL;
  m_Globals = this->m_Globals;
  while ( (unsigned int)v8 < (unsigned int)NumInterfaceDescriptors )
  {
    if ( !InterfaceDescriptors[v8] )
      return 3221225485LL;
    v8 = (unsigned int)(v8 + 1);
  }
  v11 = (unsigned int)(NumInterfaceDescriptors + 1);
  if ( (unsigned int)v11 < (unsigned int)NumInterfaceDescriptors )
    return 3221225621LL;
  v12 = 16 * v11;
  if ( v12 > 0xFFFFFFFF )
    return 3221225621LL;
  v13 = m_Globals->FxPoolTrackingOn == 0;
  Tag = m_Globals->Tag;
  v25.m128i_i64[0] = 0LL;
  v25.m128i_i64[1] = 64LL;
  v15 = (unsigned int)v12;
  if ( v13 )
    v16 = 0LL;
  else
    v16 = retaddr;
  v17 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v25, v15, Tag, v16);
  v18 = (_USBD_INTERFACE_LIST_ENTRY *)v17;
  if ( v17 )
  {
    if ( (_DWORD)NumInterfaceDescriptors )
    {
      v20 = v17;
      v21 = NumInterfaceDescriptors;
      do
      {
        v22 = (FX_POOL *)*InterfaceDescriptors++;
        *v20 = v22;
        v20 += 2;
        --v21;
      }
      while ( v21 );
    }
    if ( !ConfigurationDescriptor )
      ConfigurationDescriptor = this->m_ConfigDescriptor;
    ConfigRequest = FxUsbDevice::CreateConfigRequest(this, (FX_POOL *)ConfigurationDescriptor, v18);
    v24 = ConfigRequest;
    if ( ConfigRequest )
    {
      v19 = FxUsbDevice::SelectConfig(this, PipesAttributes, (_URB *)ConfigRequest, FxUrbTypeLegacy, 0LL);
      FxPoolFree(v24);
    }
    else
    {
      v19 = -1073741670;
    }
    FxPoolFree(v18);
  }
  else
  {
    v19 = -1073741670;
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x13u, WPP_FxUsbDevice_cpp_Traceguids, 0xC000009A);
  }
  return v19;
}
