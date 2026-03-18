/*
 * XREFs of imp_WdfUsbTargetDeviceSelectConfig @ 0x14009D440
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDd @ 0x14000562C (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_dd @ 0x140005770 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140036790 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_DDd @ 0x140055CD8 (WPP_IFR_SF_DDd.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x14005A73C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     WPP_IFR_SF_qqddd @ 0x14007F860 (WPP_IFR_SF_qqddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1400863E4 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qqDLd @ 0x14009C928 (WPP_IFR_SF_qqDLd.c)
 *     WPP_IFR_SF_qqLd @ 0x14009CA64 (WPP_IFR_SF_qqLd.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x14009EEC0 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x14009F3F4 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x14009FF84 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1400A02F0 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceSelectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  _FX_DRIVER_GLOBALS *v8; // r14
  __int64 result; // rax
  unsigned int v10; // ebx
  unsigned __int16 v11; // r9
  unsigned int m_NumInterfaces; // r8d
  unsigned int v13; // esi
  _URB *_a3; // rax
  _USB_INTERFACE_DESCRIPTOR **InterfaceDescriptors; // rdx
  const void *v17; // rcx
  int NumberConfiguredPipes; // eax
  const void *v19; // rcx
  unsigned int i; // ebx
  _USB_INTERFACE_DESCRIPTOR **v21; // r15
  int v22; // edx
  int m_NumSettings; // ecx
  int v24; // ecx
  const void *v25; // rax
  _FX_DRIVER_GLOBALS **ObjectGlobals; // [rsp+20h] [rbp-30h]
  unsigned __int64 retaddr; // [rsp+88h] [rbp+38h]
  FxUsbDevice *pUsbDevice; // [rsp+90h] [rbp+40h] BYREF
  FxUsbInterface *pUsbInterface; // [rsp+A8h] [rbp+58h] BYREF

  pUsbInterface = 0LL;
  pUsbDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice,
    (_FX_DRIVER_GLOBALS **)&pUsbInterface);
  if ( !Params )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)pUsbInterface, retaddr);
  v8 = (_FX_DRIVER_GLOBALS *)pUsbInterface;
  result = FxVerifierCheckIrqlLevel((_FX_DRIVER_GLOBALS *)pUsbInterface, 0);
  if ( (int)result >= 0 )
  {
    if ( Params->Size != 32 )
    {
      v10 = -1073741820;
      WPP_IFR_SF_DDd(
        v8,
        (unsigned __int8)WPP_FxUsbDeviceAPI_cpp_Traceguids,
        0xEu,
        0xFu,
        WPP_FxUsbDeviceAPI_cpp_Traceguids,
        Params->Size,
        0x20u,
        -1073741820);
      return v10;
    }
    if ( (unsigned int)(Params->Type - 1) > 5 )
    {
      v10 = -1073741811;
      WPP_IFR_SF_dd(v8, 2u, 0xEu, 0x10u, WPP_FxUsbDeviceAPI_cpp_Traceguids, 32, -1073741811);
      return v10;
    }
    result = FxValidateObjectAttributes(v8, PipesAttributes, 1);
    if ( (int)result < 0 )
      return result;
    if ( pUsbDevice->m_MismatchedInterfacesInConfigDescriptor )
    {
      v10 = -1073741808;
      WPP_IFR_SF_qDd(
        v8,
        (unsigned __int8)WPP_FxUsbDeviceAPI_cpp_Traceguids,
        0xEu,
        0x12u,
        WPP_FxUsbDeviceAPI_cpp_Traceguids,
        UsbDevice,
        Params->Type,
        0xC0000010);
      return v10;
    }
    m_NumInterfaces = pUsbDevice->m_NumInterfaces;
    if ( !(_BYTE)m_NumInterfaces )
    {
      WPP_IFR_SF_qDd(
        v8,
        (unsigned __int8)WPP_FxUsbDeviceAPI_cpp_Traceguids,
        0xEu,
        0x13u,
        WPP_FxUsbDeviceAPI_cpp_Traceguids,
        UsbDevice,
        Params->Type,
        0);
      return 0LL;
    }
    if ( Params->Type == WdfUsbTargetDeviceSelectConfigTypeDeconfig )
      return (unsigned int)FxUsbDevice::Deconfig(pUsbDevice);
    if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeSingleInterface )
    {
      if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeMultiInterface )
      {
        if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeInterfacesPairs )
        {
          if ( Params->Type == WdfUsbTargetDeviceSelectConfigTypeInterfacesDescriptor )
          {
            InterfaceDescriptors = Params->Types.Descriptor.InterfaceDescriptors;
            if ( !InterfaceDescriptors || !Params->Types.Descriptor.NumInterfaceDescriptors )
            {
              v13 = -1073741811;
              WPP_IFR_SF_qqDLd(
                v8,
                (unsigned __int8)InterfaceDescriptors,
                m_NumInterfaces,
                v11,
                (const _GUID *)ObjectGlobals,
                UsbDevice,
                InterfaceDescriptors,
                Params->Types.Descriptor.NumInterfaceDescriptors,
                Params->Type);
              return v13;
            }
            return (unsigned int)FxUsbDevice::SelectConfigDescriptor(pUsbDevice, PipesAttributes, Params);
          }
          else
          {
            if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeUrb )
              return (unsigned int)-1073741811;
            _a3 = Params->Types.Urb.Urb;
            if ( !_a3 || _a3->UrbHeader.Function || _a3->UrbHeader.Length < 0x40u )
            {
              v13 = -1073741811;
              WPP_IFR_SF_qqLd(
                v8,
                (unsigned __int8)WPP_FxUsbDeviceAPI_cpp_Traceguids,
                0xEu,
                0x15u,
                WPP_FxUsbDeviceAPI_cpp_Traceguids,
                UsbDevice,
                _a3,
                Params->Type,
                -1073741811);
              return v13;
            }
            return (unsigned int)FxUsbDevice::SelectConfig(pUsbDevice, PipesAttributes, _a3, FxUrbTypeLegacy, 0LL);
          }
        }
        if ( !Params->Types.Descriptor.InterfaceDescriptors )
        {
          v13 = -1073741811;
          if ( pUsbDevice->m_ObjectSize )
            v17 = (const void *)((unsigned __int64)pUsbDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v17 = 0LL;
          WPP_IFR_SF_qd(v8, 2u, 0xEu, 0x16u, WPP_FxUsbDeviceAPI_cpp_Traceguids, v17, -1073741811);
          return v13;
        }
        NumberConfiguredPipes = Params->Types.SingleInterface.NumberConfiguredPipes;
        if ( (_BYTE)NumberConfiguredPipes != (_BYTE)m_NumInterfaces )
        {
          v13 = -1073741811;
          if ( pUsbDevice->m_ObjectSize )
            v19 = (const void *)((unsigned __int64)pUsbDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v19 = 0LL;
          WPP_IFR_SF_qddd(
            v8,
            (unsigned __int8)WPP_FxUsbDeviceAPI_cpp_Traceguids,
            0xEu,
            0x17u,
            WPP_FxUsbDeviceAPI_cpp_Traceguids,
            v19,
            NumberConfiguredPipes,
            m_NumInterfaces,
            -1073741811);
          return v13;
        }
      }
      for ( i = 0; ; ++i )
      {
        if ( i >= Params->Types.SingleInterface.NumberConfiguredPipes )
          return (unsigned int)FxUsbDevice::SelectConfigMulti(pUsbDevice, PipesAttributes, Params);
        pUsbInterface = 0LL;
        v21 = &Params->Types.Descriptor.InterfaceDescriptors[2 * i];
        FxObjectHandleGetPtr(
          (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
          (unsigned __int64)*v21,
          0x1204u,
          (void **)&pUsbInterface);
        v22 = *((unsigned __int8 *)v21 + 8);
        m_NumSettings = pUsbInterface->m_NumSettings;
        if ( (unsigned __int8)v22 >= (unsigned __int8)m_NumSettings )
          break;
      }
      v24 = m_NumSettings - 1;
      if ( pUsbDevice->m_ObjectSize )
        v25 = (const void *)((unsigned __int64)pUsbDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v25 = 0LL;
      v10 = -1073741811;
      WPP_IFR_SF_qqddd(
        v8,
        (unsigned __int8)WPP_FxUsbDeviceAPI_cpp_Traceguids,
        0xEu,
        0x18u,
        WPP_FxUsbDeviceAPI_cpp_Traceguids,
        v25,
        *v21,
        v22,
        v24,
        -1073741811);
      return v10;
    }
    return (unsigned int)FxUsbDevice::SelectConfigSingle(pUsbDevice, PipesAttributes, Params);
  }
  return result;
}
