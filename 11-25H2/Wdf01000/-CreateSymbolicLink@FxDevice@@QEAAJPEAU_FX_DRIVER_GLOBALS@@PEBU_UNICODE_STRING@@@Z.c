/*
 * XREFs of ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x140094CF8
 * Callers:
 *     imp_WdfDeviceCreateSymbolicLink @ 0x14007E460 (imp_WdfDeviceCreateSymbolicLink.c)
 * Callees:
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x140019C10 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1400532DC (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x14007C774 (--1FxAutoString@@QEAA@XZ.c)
 *     WPP_IFR_SF_qddd @ 0x1400863E4 (WPP_IFR_SF_qddd.c)
 */

__int64 __fastcall FxDevice::CreateSymbolicLink(
        FxDevice *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *SymbolicLinkName)
{
  const void *v6; // rbx
  unsigned __int16 v7; // r9
  bool v8; // zf
  int DeviceProperty; // edi
  __int64 v10; // rcx
  _DEVICE_OBJECT *SafePhysicalDevice; // r14
  unsigned __int16 m_ObjectSize; // cx
  unsigned __int16 v13; // ax
  const void *_a2; // rbx
  void *v15; // rax
  ULONG Tag; // ecx
  FX_POOL **v17; // rax
  unsigned __int16 v18; // ax
  FxAutoString *p_m_DeviceName; // r14
  unsigned __int16 v20; // ax
  FxAutoString pdoName; // [rsp+50h] [rbp-20h] BYREF
  __m128i v23; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int length; // [rsp+A0h] [rbp+30h] BYREF

  pdoName = 0LL;
  if ( this->m_DeviceName.Buffer )
  {
    p_m_DeviceName = (FxAutoString *)&this->m_DeviceName;
    goto LABEL_23;
  }
  if ( this->m_Legacy )
  {
    v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v7 = 12;
    v8 = this->m_ObjectSize == 0;
    DeviceProperty = -1073741436;
LABEL_28:
    if ( v8 )
      v6 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, v7, WPP_FxDeviceKm_cpp_Traceguids, v6, DeviceProperty);
    goto LABEL_31;
  }
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this);
  if ( !SafePhysicalDevice )
  {
    v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v7 = 13;
    v8 = *(_WORD *)(v10 + 10) == 0;
    DeviceProperty = -1073741436;
    goto LABEL_28;
  }
  length = 0;
  DeviceProperty = IoGetDeviceProperty(SafePhysicalDevice, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &length);
  if ( (int)(DeviceProperty + 0x80000000) >= 0 && DeviceProperty != -1073741789 )
  {
    m_ObjectSize = this->m_ObjectSize;
    v7 = 14;
    v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v8 = m_ObjectSize == 0;
    goto LABEL_28;
  }
  if ( length <= 0xFFFF )
  {
    if ( !length )
    {
      DeviceProperty = -1073741436;
      v7 = 16;
LABEL_27:
      v20 = this->m_ObjectSize;
      v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v8 = v20 == 0;
      goto LABEL_28;
    }
    v15 = retaddr;
    Tag = FxDriverGlobals->Tag;
    v23.m128i_i64[0] = 0LL;
    v23.m128i_i64[1] = 256LL;
    if ( !FxDriverGlobals->FxPoolTrackingOn )
      v15 = 0LL;
    v17 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v23, length, Tag, v15);
    if ( !v17 )
    {
      DeviceProperty = -1073741670;
      v7 = 17;
      goto LABEL_27;
    }
    pdoName.m_UnicodeString.Buffer = (wchar_t *)v17;
    DeviceProperty = IoGetDeviceProperty(
                       SafePhysicalDevice,
                       DevicePropertyPhysicalDeviceObjectName,
                       length,
                       v17,
                       &length);
    if ( DeviceProperty < 0 )
    {
      v18 = this->m_ObjectSize;
      v7 = 18;
      v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v8 = v18 == 0;
      goto LABEL_28;
    }
    p_m_DeviceName = &pdoName;
    pdoName.m_UnicodeString.MaximumLength = length;
    pdoName.m_UnicodeString.Length = length - 2;
LABEL_23:
    DeviceProperty = FxDuplicateUnicodeString(FxDriverGlobals, SymbolicLinkName, &this->m_SymbolicLinkName);
    if ( DeviceProperty >= 0 )
    {
      DeviceProperty = IoCreateSymbolicLink(&this->m_SymbolicLinkName, &p_m_DeviceName->m_UnicodeString);
      if ( DeviceProperty >= 0 )
        goto LABEL_31;
      FxPoolFree((_QWORD *)this->m_SymbolicLinkName.Buffer);
      v7 = 20;
      this->m_SymbolicLinkName = 0LL;
    }
    else
    {
      v7 = 19;
    }
    goto LABEL_27;
  }
  v13 = this->m_ObjectSize;
  _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  DeviceProperty = -1073741675;
  if ( !v13 )
    _a2 = 0LL;
  WPP_IFR_SF_qddd(FxDriverGlobals, 0xFFu, 0x12u, 0xFu, WPP_FxDeviceKm_cpp_Traceguids, _a2, length, 0xFFFF, -1073741675);
LABEL_31:
  FxAutoString::~FxAutoString(&pdoName);
  return (unsigned int)DeviceProperty;
}
