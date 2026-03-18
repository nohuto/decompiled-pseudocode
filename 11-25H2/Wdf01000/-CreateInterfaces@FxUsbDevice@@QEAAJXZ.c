/*
 * XREFs of ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x14009EAA0
 * Callers:
 *     FxUsbTargetDeviceCreate @ 0x140059F74 (FxUsbTargetDeviceCreate.c)
 * Callees:
 *     WPP_IFR_SF_dd @ 0x140005770 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x140037570 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_dqd @ 0x140061E2C (WPP_IFR_SF_dqd.c)
 *     ?FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX2J_KW4FxUsbValidateDescriptorOp@@K@Z @ 0x14007D7DC (-FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX.c)
 *     ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x14007D8A8 (-FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z.c)
 *     ??0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x140080F9C (--0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@.c)
 *     ?FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@_K@Z @ 0x14009E360 (-FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIP.c)
 *     ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x14009F5B8 (-CreateSettings@FxUsbInterface@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

__int64 __fastcall FxUsbDevice::CreateInterfaces(FxUsbDevice *this)
{
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  __int64 wTotalLength; // r12
  signed int _a1; // edi
  unsigned __int16 v6; // r9
  __int64 bNumInterfaces; // rcx
  unsigned __int64 v8; // r9
  ULONG Tag; // ecx
  void *v10; // rax
  FX_POOL **v11; // rax
  _USB_CONFIGURATION_DESCRIPTOR *v12; // r14
  int v13; // edx
  unsigned __int64 v14; // rdx
  unsigned __int8 *p_bLength; // r8
  unsigned __int8 v16; // bp
  _USB_COMMON_DESCRIPTOR *DescriptorType; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  _USB_INTERFACE_DESCRIPTOR *v20; // r15
  __int64 bLength; // rcx
  unsigned __int8 v22; // al
  FX_POOL **v23; // rax
  FxObject *v24; // rax
  FxUsbInterface *v25; // r14
  __int64 v26; // rcx
  int v27; // eax
  int m_NumInterfaces; // ecx
  FxUsbValidateDescriptorOp _a2; // [rsp+30h] [rbp-158h]
  __m128i v31; // [rsp+40h] [rbp-148h] BYREF
  unsigned __int8 descCountBitMap[256]; // [rsp+50h] [rbp-138h] BYREF
  void *retaddr; // [rsp+188h] [rbp+0h]

  m_ConfigDescriptor = this->m_ConfigDescriptor;
  m_Globals = this->m_Globals;
  wTotalLength = m_ConfigDescriptor->wTotalLength;
  _a1 = FxUsbValidateConfigDescriptorHeaders(m_Globals, m_ConfigDescriptor, wTotalLength);
  if ( _a1 < 0 )
  {
    v6 = 10;
LABEL_3:
    WPP_IFR_SF_D(m_Globals, 2u, 0xEu, v6, WPP_FxUsbDevice_cpp_Traceguids, _a1);
    return (unsigned int)_a1;
  }
  _a1 = FxUsbValidateDescriptorType(
          m_Globals,
          this->m_ConfigDescriptor,
          &this->m_ConfigDescriptor->bLength,
          &this->m_ConfigDescriptor->bLength + this->m_ConfigDescriptor->wTotalLength,
          4,
          9uLL,
          _a2,
          0);
  if ( _a1 < 0 )
  {
    v6 = 11;
    goto LABEL_3;
  }
  bNumInterfaces = this->m_ConfigDescriptor->bNumInterfaces;
  if ( (_BYTE)bNumInterfaces )
    v8 = 8 * bNumInterfaces;
  else
    v8 = 8LL;
  Tag = m_Globals->Tag;
  v10 = retaddr;
  v31.m128i_i64[0] = 0LL;
  v31.m128i_i64[1] = 64LL;
  if ( !m_Globals->FxPoolTrackingOn )
    v10 = 0LL;
  v11 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v31, v8, Tag, v10);
  v12 = this->m_ConfigDescriptor;
  this->m_Interfaces = (FxUsbInterface **)v11;
  v13 = v12->bNumInterfaces;
  if ( v11 )
  {
    this->m_NumInterfaces = v13;
    memset(descCountBitMap, 0, 0xFFuLL);
    v14 = v12->wTotalLength;
    p_bLength = &v12->bLength;
    v16 = 0;
    while ( 1 )
    {
      DescriptorType = FxUsbFindDescriptorType((char *)v12, v14, p_bLength, 4);
      v20 = (_USB_INTERFACE_DESCRIPTOR *)DescriptorType;
      if ( !DescriptorType || v16 >= v12->bNumInterfaces )
        break;
      bLength = DescriptorType[1].bLength;
      v22 = descCountBitMap[bLength];
      if ( (v22 & 1) == 0 )
      {
        descCountBitMap[bLength] = v22 | 1;
        v23 = FxObjectHandleAlloc2(this->m_Globals, v18, 0x98uLL, v19, 0LL, 0, FxObjectTypeExternal);
        if ( !v23
          || (FxUsbInterface::FxUsbInterface((FxUsbInterface *)v23, m_Globals, this, v20),
              (v25 = (FxUsbInterface *)v24) == 0LL) )
        {
          _a1 = -1073741670;
          WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0xDu, WPP_FxUsbDevice_cpp_Traceguids, v16, -1073741670);
          return (unsigned int)_a1;
        }
        _a1 = FxObject::Commit(v24, 0LL, 0LL, this, 1u);
        if ( _a1 < 0 )
          return (unsigned int)_a1;
        _a1 = FxUsbInterface::CreateSettings(v25);
        if ( _a1 < 0 )
          return (unsigned int)_a1;
        v26 = v16++;
        this->m_Interfaces[v26] = v25;
      }
      v12 = this->m_ConfigDescriptor;
      p_bLength = &v20->bLength + v20->bLength;
      v14 = wTotalLength;
    }
    if ( v16 || (v27 = this->m_NumInterfaces, !(_BYTE)v27) )
    {
      if ( !v20 || this->m_NumInterfaces )
      {
        m_NumInterfaces = this->m_NumInterfaces;
        if ( v16 < (unsigned __int8)m_NumInterfaces )
        {
          WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbDevice_cpp_Traceguids, m_NumInterfaces, v16);
          this->m_NumInterfaces = v16;
        }
      }
      else
      {
        WPP_IFR_SF_(this->m_Globals, 3u, 0xEu, 0xFu, WPP_FxUsbDevice_cpp_Traceguids);
        this->m_MismatchedInterfacesInConfigDescriptor = 1;
      }
    }
    else
    {
      _a1 = -1073741808;
      WPP_IFR_SF_dqd(this->m_Globals, 2u, 0xEu, 0xEu, WPP_FxUsbDevice_cpp_Traceguids, v27, v12, -1073741808);
    }
  }
  else
  {
    _a1 = -1073741670;
    WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0xCu, WPP_FxUsbDevice_cpp_Traceguids, v13, -1073741670);
  }
  return (unsigned int)_a1;
}
