/*
 * XREFs of ?PowerEnableWakeAtBusOverload@FxPkgPdo@@EEAAJXZ @ 0x140070840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPdo::PowerEnableWakeAtBusOverload(FxPkgPdo *this)
{
  __int64 m_SystemPowerState; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _SYSTEM_POWER_STATE); // rax
  unsigned __int16 m_ObjectSize; // r8
  unsigned __int64 v6; // rcx
  __int64 result; // rax
  FxDeviceBase *v8; // rcx
  __int64 v9; // rdx

  m_SystemPowerState = this->m_SystemPowerState;
  m_DeviceBase = this->m_DeviceBase;
  m_Method = this->m_DeviceEnableWakeAtBus.m_Method;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( !m_Method )
  {
    result = 0LL;
LABEL_5:
    v8 = this->m_DeviceBase;
    this->m_EnableWakeAtBusInvoked = 1;
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v8[1].m_ObjectFlags + 648LL) + 888LL);
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 904));
    return result;
  }
  v6 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    v6 = 0LL;
  result = ((__int64 (__fastcall *)(unsigned __int64, __int64))m_Method)(v6, m_SystemPowerState);
  if ( (int)result >= 0 )
    goto LABEL_5;
  return result;
}
