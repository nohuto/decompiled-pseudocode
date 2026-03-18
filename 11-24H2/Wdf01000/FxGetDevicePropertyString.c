/*
 * XREFs of FxGetDevicePropertyString @ 0x140001D20
 * Callers:
 *     LogDriverInfoStream @ 0x14007C650 (LogDriverInfoStream.c)
 * Callees:
 *     WPP_IFR_SF_DDd @ 0x140002768 (WPP_IFR_SF_DDd.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x140046ACC (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 */

void __fastcall FxGetDevicePropertyString(
        FxDevice *Fdo,
        unsigned __int32 DeviceProperty,
        _UNICODE_STRING *PropertyString)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  DEVICE_REGISTRY_PROPERTY v6; // edx
  __int64 v7; // rcx
  _DEVICE_OBJECT *SafePhysicalDevice; // r15
  __int16 v9; // ax
  const void *_a1; // rcx
  NTSTATUS globals; // eax
  unsigned __int8 v12; // dl
  unsigned int Tag; // ecx
  void *v14; // rax
  unsigned __int8 v15; // dl
  void *v16; // rdi
  NTSTATUS v17; // eax
  unsigned __int8 v18; // dl
  unsigned __int16 v19; // cx
  unsigned __int64 v20; // rdx
  FxPoolTypeOrPoolFlags v21; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int length; // [rsp+80h] [rbp+30h] BYREF

  m_Globals = Fdo->m_Globals;
  length = 0;
  *PropertyString = 0LL;
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(Fdo);
  if ( SafePhysicalDevice )
  {
    globals = IoGetDeviceProperty(SafePhysicalDevice, v6, 0, 0LL, &length);
    if ( globals == -1073741789 )
    {
      Tag = m_Globals->Tag;
      v14 = retaddr;
      *(_QWORD *)&v21.UsePoolType = 0LL;
      v21.u.PoolFlags = 256LL;
      if ( !m_Globals->FxPoolTrackingOn )
        v14 = 0LL;
      v16 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v21, length, Tag, v14);
      if ( v16 )
      {
        v17 = IoGetDeviceProperty(SafePhysicalDevice, (DEVICE_REGISTRY_PROPERTY)DeviceProperty, length, v16, &length);
        if ( v17 >= 0 )
        {
          v19 = length;
          PropertyString->Buffer = (wchar_t *)v16;
          PropertyString->MaximumLength = v19;
          v20 = (unsigned __int16)(v19 - 2);
          PropertyString->Length = v20;
          *((_WORD *)v16 + (v20 >> 1)) = 0;
        }
        else
        {
          WPP_IFR_SF_DDd(m_Globals, v18, 0x12u, 0x13u, WPP_FxTelemetryKm_cpp_Traceguids, length, DeviceProperty, v17);
          FxPoolFree(v16);
        }
      }
      else
      {
        WPP_IFR_SF_DDd(
          m_Globals,
          v15,
          0x12u,
          0x12u,
          WPP_FxTelemetryKm_cpp_Traceguids,
          DeviceProperty,
          length,
          -1073741670);
      }
    }
    else
    {
      WPP_IFR_SF_DDd(m_Globals, v12, 0x12u, 0x11u, WPP_FxTelemetryKm_cpp_Traceguids, DeviceProperty, length, globals);
    }
  }
  else
  {
    v9 = *(_WORD *)(v7 + 10);
    _a1 = (const void *)(v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v9 )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x10u, WPP_FxTelemetryKm_cpp_Traceguids, _a1, -1073741808);
  }
}
