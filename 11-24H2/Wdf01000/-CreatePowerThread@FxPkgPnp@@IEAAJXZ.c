/*
 * XREFs of ?CreatePowerThread@FxPkgPnp@@IEAAJXZ @ 0x1400A6250
 * Callers:
 *     ?QueryForPowerThread@FxPkgPdo@@EEAAJXZ @ 0x1400A2D60 (-QueryForPowerThread@FxPkgPdo@@EEAAJXZ.c)
 *     ?QueryForPowerThread@FxPkgFdo@@EEAAJXZ @ 0x1400A71A0 (-QueryForPowerThread@FxPkgFdo@@EEAAJXZ.c)
 * Callees:
 *     ?ExitThread@FxSystemThread@@QEAAEXZ @ 0x1400ABEA0 (-ExitThread@FxSystemThread@@QEAAEXZ.c)
 *     ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1400ABFC8 (-_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

int __fastcall FxPkgPnp::CreatePowerThread(FxPkgPnp *this)
{
  FxDeviceBase *m_DeviceBase; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned __int16 m_ObjectSize; // ax
  _DEVICE_OBJECT *m_DeviceObject; // r9
  WDFDEVICE__ *v6; // r8
  int result; // eax
  FxSystemThread *v8; // rbx
  FxSystemThread *pThread; // [rsp+30h] [rbp+8h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  pThread = 0LL;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  v6 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v6 = 0LL;
  result = FxSystemThread::_CreateAndInit(&pThread, m_Globals, v6, m_DeviceObject);
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_PowerThread, (signed __int64)pThread, 0LL) )
    {
      v8 = pThread;
      FxSystemThread::ExitThread(pThread);
      v8->DeleteObject(v8);
    }
    this->m_HasPowerThread = 1;
    return 0;
  }
  return result;
}
