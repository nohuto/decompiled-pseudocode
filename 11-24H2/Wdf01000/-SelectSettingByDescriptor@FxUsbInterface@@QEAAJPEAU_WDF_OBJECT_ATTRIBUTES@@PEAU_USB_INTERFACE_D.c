/*
 * XREFs of ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x14009FA4C
 * Callers:
 *     imp_WdfUsbInterfaceSelectSetting @ 0x14007F9B0 (imp_WdfUsbInterfaceSelectSetting.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x14004F8DC (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x14005076C (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1400863D4 (WPP_IFR_SF_qddd.c)
 */

__int64 __fastcall FxUsbInterface::SelectSettingByDescriptor(
        FxUsbInterface *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r11
  int _a3; // ecx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rbx
  _FX_DRIVER_GLOBALS *v11; // rcx
  __int64 bNumEndpoints; // rax
  void *v13; // r8
  ULONG Tag; // r10d
  FX_POOL **v15; // rax
  _URB *v16; // rbp
  unsigned int v17; // ebx
  __m128i v18; // [rsp+50h] [rbp-28h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( this->m_ConfiguredPipes && this->m_CurAlternateSetting == InterfaceDescriptor->bAlternateSetting )
    return 0LL;
  p_m_Globals = &this->m_Globals;
  _a3 = this->m_InterfaceNumber;
  if ( InterfaceDescriptor->bInterfaceNumber == (_BYTE)_a3 )
  {
    v11 = *p_m_Globals;
    bNumEndpoints = InterfaceDescriptor->bNumEndpoints;
    v13 = retaddr;
    v18 = 0LL;
    Tag = v11->Tag;
    v18.m128i_i64[1] = 64LL;
    if ( !v11->FxPoolTrackingOn )
      v13 = 0LL;
    v15 = FxPoolAllocator(v11, &v11->FxPoolFrameworks, &v18, 24 * bNumEndpoints + 56, Tag, v13);
    v16 = (_URB *)v15;
    if ( v15 )
    {
      FxUsbInterface::FormatSelectSettingUrb(
        this,
        (_URB *)v15,
        InterfaceDescriptor->bNumEndpoints,
        InterfaceDescriptor->bAlternateSetting);
      v17 = FxUsbInterface::SelectSetting(this, PipesAttributes, v16);
      FxPoolFree(v16);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
    return v17;
  }
  else
  {
    m_ObjectSize = this->m_ObjectSize;
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qddd(
      *p_m_Globals,
      InterfaceDescriptor->bInterfaceNumber,
      0xEu,
      0xEu,
      WPP_FxUsbInterface_cpp_Traceguids,
      _a2,
      _a3,
      InterfaceDescriptor->bInterfaceNumber,
      -1073741811);
    return 3221225485LL;
  }
}
