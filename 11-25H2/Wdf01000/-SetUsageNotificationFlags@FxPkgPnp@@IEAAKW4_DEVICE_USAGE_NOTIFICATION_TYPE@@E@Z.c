/*
 * XREFs of ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x14007875C
 * Callers:
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140077D68 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?IsInSpecialUse@FxPkgPnp@@IEAAEXZ @ 0x1400179E8 (-IsInSpecialUse@FxPkgPnp@@IEAAEXZ.c)
 *     ?AdjustUsageCount@FxPkgPnp@@IEAAJW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x140078968 (-AdjustUsageCount@FxPkgPnp@@IEAAJW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 *     ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x140081724 (-_UsageToSpecialType@FxPkgPnp@@KA-AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@.c)
 *     ?IsUsagePowerRelated@FxPkgPnp@@IEAAEW4_WDF_SPECIAL_FILE_TYPE@@@Z @ 0x1400A6300 (-IsUsagePowerRelated@FxPkgPnp@@IEAAEW4_WDF_SPECIAL_FILE_TYPE@@@Z.c)
 *     WPP_IFR_SF_dddDqqd @ 0x1400A6C20 (WPP_IFR_SF_dddDqqd.c)
 */

__int64 __fastcall FxPkgPnp::SetUsageNotificationFlags(FxPkgPnp *this, __int32 Type, unsigned __int8 InPath)
{
  int _a6; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // r9
  _DEVICE_OBJECT *m_DeviceObject; // r10
  unsigned int globals; // edi
  unsigned __int16 m_ObjectSize; // ax
  unsigned int v11; // r8d
  const void *v12; // r9
  _WDF_SPECIAL_FILE_TYPE v13; // eax
  FxPkgPnp *v14; // rcx
  FxDeviceBase *v15; // rdx
  __int64 v16; // rdx
  const _GUID *v18; // [rsp+20h] [rbp-48h]

  _a6 = InPath;
  m_Globals = this->m_Globals;
  m_DeviceBase = this->m_DeviceBase;
  m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  globals = m_DeviceObject->Flags;
  if ( m_Globals->FxVerboseOn )
  {
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v11 = BYTE2(m_DeviceBase[1].m_Globals);
    v12 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v12 = 0LL;
    WPP_IFR_SF_dddDqqd(
      m_Globals,
      Type,
      v11,
      (unsigned __int16)v12,
      v18,
      Type,
      _a6,
      this->m_SpecialFileCount[Type - 1],
      globals,
      m_DeviceObject,
      v12,
      v11);
  }
  FxPkgPnp::AdjustUsageCount(this, (_DEVICE_USAGE_NOTIFICATION_TYPE)Type, _a6);
  v13 = FxPkgPnp::_UsageToSpecialType((_DEVICE_USAGE_NOTIFICATION_TYPE)Type);
  if ( FxPkgPnp::IsUsagePowerRelated(v14, v13) )
  {
    v15 = this->m_DeviceBase;
    if ( BYTE1(v15[1].m_Globals) )
    {
      v15->m_DeviceObject.m_DeviceObject->Flags = globals ^ (v15->m_AttachedDevice.m_DeviceObject->Flags ^ globals) & 0x6000;
    }
    else if ( (_BYTE)_a6 )
    {
      v15->m_DeviceObject.m_DeviceObject->Flags &= ~0x2000u;
    }
    else if ( BYTE2(v15[1].m_Globals) && !FxPkgPnp::IsInSpecialUse(this) )
    {
      *(_DWORD *)(*(_QWORD *)(v16 + 144) + 48LL) |= 0x2000u;
    }
  }
  return globals;
}
