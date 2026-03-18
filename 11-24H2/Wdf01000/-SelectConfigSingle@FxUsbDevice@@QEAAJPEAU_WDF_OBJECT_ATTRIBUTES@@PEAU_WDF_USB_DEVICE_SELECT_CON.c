/*
 * XREFs of ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1400A03C0
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x14009D510 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x14004FC24 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     WPP_IFR_SF_qdd @ 0x14005F07C (WPP_IFR_SF_qdd.c)
 *     ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x14007E234 (-GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z.c)
 *     ?CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@@Z @ 0x14009E264 (-CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INT.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfigSingle(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipeAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  int _a2; // eax
  const void *_a1; // rcx
  FxUsbInterface **m_Interfaces; // r11
  __int64 v10; // r11
  const void *v11; // rcx
  FX_POOL **ConfigRequest; // rax
  FX_POOL **v13; // rbp
  int v14; // esi
  FxUsbInterface *v15; // rdx
  unsigned __int16 m_ObjectSize; // cx
  _USB_INTERFACE_DESCRIPTOR **v17; // rdx
  _USBD_INTERFACE_LIST_ENTRY listEntry[2]; // [rsp+40h] [rbp-28h] BYREF

  *(_OWORD *)&Params->Types.Descriptor.ConfigurationDescriptor = 0LL;
  _a2 = this->m_NumInterfaces;
  if ( (unsigned __int8)_a2 > 1u )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qdd(this->m_Globals, 2u, 0xEu, 0x1Bu, WPP_FxusbDeviceKm_cpp_Traceguids, _a1, _a2, -1073741811);
    return 3221225485LL;
  }
  m_Interfaces = this->m_Interfaces;
  *(_OWORD *)&listEntry[0].Interface = 0LL;
  listEntry[1].Interface = 0LL;
  listEntry[0].InterfaceDescriptor = FxUsbInterface::GetSettingDescriptor(*m_Interfaces, 0);
  if ( !listEntry[0].InterfaceDescriptor )
  {
    v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v11 = 0LL;
    WPP_IFR_SF_qd(
      this->m_Globals,
      2u,
      0xEu,
      0x1Cu,
      WPP_FxusbDeviceKm_cpp_Traceguids,
      v11,
      *(unsigned __int8 *)(*(_QWORD *)v10 + 146LL));
    return 3221225485LL;
  }
  ConfigRequest = FxUsbDevice::CreateConfigRequest(this, (FX_POOL *)this->m_ConfigDescriptor, listEntry);
  v13 = ConfigRequest;
  if ( ConfigRequest )
  {
    v14 = FxUsbDevice::SelectConfig(this, PipeAttributes, (_URB *)ConfigRequest, FxUrbTypeLegacy, 0LL);
    if ( v14 >= 0 )
    {
      Params->Types.SingleInterface.NumberConfiguredPipes = (*this->m_Interfaces)->m_NumberOfConfiguredPipes;
      v15 = *this->m_Interfaces;
      m_ObjectSize = v15->m_ObjectSize;
      v17 = (_USB_INTERFACE_DESCRIPTOR **)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v17 = 0LL;
      Params->Types.Descriptor.InterfaceDescriptors = v17;
    }
    FxPoolFree(v13);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v14;
}
