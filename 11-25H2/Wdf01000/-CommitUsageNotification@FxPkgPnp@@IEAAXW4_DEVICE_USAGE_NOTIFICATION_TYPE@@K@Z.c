/*
 * XREFs of ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x140078884
 * Callers:
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140077D68 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x14001D588 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     WPP_IFR_SF_dDqq @ 0x1400A6B10 (WPP_IFR_SF_dDqq.c)
 */

void __fastcall FxPkgPnp::CommitUsageNotification(
        FxPkgPnp *this,
        _DEVICE_USAGE_NOTIFICATION_TYPE Type,
        __int16 OldFlags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int level; // ebp
  unsigned int v7; // edx
  FxDeviceBase *m_DeviceBase; // r9
  const void *id; // r8
  const _GUID *v10; // [rsp+20h] [rbp-38h]

  m_Globals = this->m_Globals;
  level = this->m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags;
  if ( (OldFlags & 0x2000) != 0 )
  {
    if ( (level & 0x2000) != 0 )
      goto LABEL_7;
    v7 = 1024;
  }
  else
  {
    if ( (level & 0x2000) == 0 )
      goto LABEL_7;
    v7 = 512;
  }
  FxPkgPnp::PowerProcessEvent(this, v7, 0);
LABEL_7:
  IoInvalidateDeviceState(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
  if ( m_Globals->FxVerboseOn )
  {
    m_DeviceBase = this->m_DeviceBase;
    id = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      id = 0LL;
    WPP_IFR_SF_dDqq(
      m_Globals,
      Type - 1,
      (unsigned int)id,
      (unsigned __int16)m_DeviceBase,
      v10,
      this->m_SpecialFileCount[Type - 1],
      level,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      id);
  }
}
