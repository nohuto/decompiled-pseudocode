/*
 * XREFs of ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x14009FF84
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x14009D440 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x14005A73C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x14007D8A8 (-FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z.c)
 *     ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x14007E5C4 (-GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1400863E4 (WPP_IFR_SF_qddd.c)
 *     ?CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@@Z @ 0x14009E194 (-CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INT.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfigMulti(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  void *v3; // rax
  _FX_DRIVER_GLOBALS **p_m_Globals; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _WDF_OBJECT_ATTRIBUTES *v8; // rbp
  __int64 m_NumInterfaces; // rdx
  ULONG Tag; // r8d
  _USBD_INTERFACE_LIST_ENTRY *v11; // r14
  unsigned __int8 i; // bl
  __int64 v14; // rsi
  _USB_INTERFACE_DESCRIPTOR *SettingDescriptor; // rax
  __int64 v16; // r11
  FxUsbInterface *v17; // rcx
  __int64 m_ObjectSize; // rax
  const void *_a1; // rdi
  unsigned int v20; // ebx
  unsigned __int8 v21; // si
  unsigned __int8 j; // bp
  _FX_DRIVER_GLOBALS *v23; // rcx
  _USB_INTERFACE_DESCRIPTOR **v24; // rbx
  __int64 v25; // r13
  unsigned __int8 v26; // al
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rbx
  unsigned __int8 *p_bLength; // rcx
  unsigned __int64 wTotalLength; // rdx
  _USB_COMMON_DESCRIPTOR *DescriptorType; // rax
  _USB_COMMON_DESCRIPTOR *v31; // r11
  _USB_COMMON_DESCRIPTOR *v32; // rcx
  unsigned __int16 v33; // ax
  int v34; // edx
  const void *v35; // rdi
  unsigned __int16 v36; // r9
  int v37; // ecx
  unsigned __int16 v38; // ax
  FX_POOL **ConfigRequest; // rsi
  int _a4; // [rsp+38h] [rbp-1A0h]
  unsigned __int8 v41; // [rsp+50h] [rbp-188h]
  void *PPObject; // [rsp+58h] [rbp-180h] BYREF
  __m128i v43; // [rsp+60h] [rbp-178h] BYREF
  _FX_DRIVER_GLOBALS **v44; // [rsp+70h] [rbp-168h]
  _WDF_OBJECT_ATTRIBUTES *v45; // [rsp+78h] [rbp-160h]
  unsigned __int8 *p_NumberOfConfiguredInterfaces; // [rsp+80h] [rbp-158h]
  unsigned __int8 bitArray[256]; // [rsp+90h] [rbp-148h] BYREF
  void *retaddr; // [rsp+1D8h] [rbp+0h]

  v3 = retaddr;
  p_m_Globals = &this->m_Globals;
  v45 = PipesAttributes;
  v44 = &this->m_Globals;
  m_Globals = this->m_Globals;
  Params->Types.MultiInterface.NumberOfConfiguredInterfaces = 0;
  p_NumberOfConfiguredInterfaces = &Params->Types.MultiInterface.NumberOfConfiguredInterfaces;
  v8 = PipesAttributes;
  m_NumInterfaces = this->m_NumInterfaces;
  Tag = m_Globals->Tag;
  v43.m128i_i64[0] = 0LL;
  v43.m128i_i64[1] = 64LL;
  if ( !m_Globals->FxPoolTrackingOn )
    v3 = 0LL;
  v43.m128i_i64[0] = (__int64)FxPoolAllocator(
                                m_Globals,
                                &m_Globals->FxPoolFrameworks,
                                &v43,
                                16 * (m_NumInterfaces + 1),
                                Tag,
                                v3);
  v11 = (_USBD_INTERFACE_LIST_ENTRY *)v43.m128i_i64[0];
  if ( !v43.m128i_i64[0] )
    return 3221225626LL;
  if ( Params->Type == WdfUsbTargetDeviceSelectConfigTypeMultiInterface )
  {
    for ( i = 0; i < this->m_NumInterfaces; ++i )
    {
      v14 = i;
      SettingDescriptor = FxUsbInterface::GetSettingDescriptor(this->m_Interfaces[v14], 0);
      v11[v16].InterfaceDescriptor = SettingDescriptor;
      if ( !SettingDescriptor )
      {
        _mm_lfence();
        v17 = this->m_Interfaces[v14];
        m_ObjectSize = this->m_ObjectSize;
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !(_WORD)m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xEu, 0x1Du, WPP_FxusbDeviceKm_cpp_Traceguids, _a1, v17->m_InterfaceNumber);
        v20 = -1073741811;
        goto $Done_60;
      }
    }
  }
  else
  {
    v21 = 0;
    memset(bitArray, 0, 0xFFuLL);
    for ( j = 0; j < Params->Types.SingleInterface.NumberConfiguredPipes; ++j )
    {
      v23 = *p_m_Globals;
      v24 = &Params->Types.Descriptor.InterfaceDescriptors[2 * j];
      PPObject = 0LL;
      FxObjectHandleGetPtr(v23, (unsigned __int64)*v24, 0x1204u, &PPObject);
      v25 = *((unsigned __int8 *)PPObject + 146);
      v41 = *((_BYTE *)v24 + 8);
      v26 = bitArray[v25];
      if ( (v26 & 1) == 0 )
      {
        m_ConfigDescriptor = this->m_ConfigDescriptor;
        bitArray[v25] = v26 | 1;
        p_bLength = &m_ConfigDescriptor->bLength;
        wTotalLength = m_ConfigDescriptor->wTotalLength;
        do
        {
          DescriptorType = FxUsbFindDescriptorType((char *)m_ConfigDescriptor, wTotalLength, p_bLength, 4);
          if ( !DescriptorType )
            break;
          v32 = DescriptorType;
          v31 = 0LL;
          if ( DescriptorType[1].bLength != (_BYTE)v25 )
            v32 = 0LL;
          if ( DescriptorType[1].bDescriptorType == v41 )
            v31 = v32;
          p_bLength = &DescriptorType->bLength + DescriptorType->bLength;
        }
        while ( !v31 );
        v11 = (_USBD_INTERFACE_LIST_ENTRY *)v43.m128i_i64[0];
        p_m_Globals = v44;
        *(_QWORD *)(v43.m128i_i64[0] + 16LL * v21) = v31;
        if ( !v31 )
        {
          v20 = -1073741811;
          v33 = this->m_ObjectSize;
          v34 = v41;
          v35 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          _a4 = v25;
          if ( !v33 )
            v35 = 0LL;
          v36 = 30;
LABEL_29:
          WPP_IFR_SF_qddd(*p_m_Globals, v34, 0xEu, v36, WPP_FxusbDeviceKm_cpp_Traceguids, v35, v34, _a4, -1073741811);
          goto $Done_60;
        }
        ++v21;
      }
    }
    if ( this->m_NumInterfaces > v21 )
    {
      v20 = -1073741811;
      v37 = this->m_NumInterfaces;
      v38 = this->m_ObjectSize;
      v36 = 31;
      v35 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v34 = v21;
      _a4 = v37;
      if ( !v38 )
        v35 = 0LL;
      goto LABEL_29;
    }
    v8 = v45;
  }
  ConfigRequest = FxUsbDevice::CreateConfigRequest(this, (FX_POOL *)this->m_ConfigDescriptor, v11);
  if ( ConfigRequest )
  {
    v20 = FxUsbDevice::SelectConfig(this, v8, (_URB *)ConfigRequest, FxUrbTypeLegacy, p_NumberOfConfiguredInterfaces);
    FxPoolFree(ConfigRequest);
  }
  else
  {
    v20 = -1073741670;
  }
$Done_60:
  FxPoolFree(v11);
  return v20;
}
