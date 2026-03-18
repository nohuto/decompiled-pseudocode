/*
 * XREFs of ?Init@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x140082300
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x14001C94C (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::Init(
        FxSelfManagedIoMachine *This,
        int *Status,
        FxCxCallbackProgress *Progress)
{
  FxPkgPnp *m_PkgPnp; // rax
  FxDeviceBase *m_DeviceBase; // r9
  WDFDEVICE__ *v7; // r9
  FxCxCallbackProgress v8; // al
  FxCxCallbackProgress v10; // [rsp+30h] [rbp+8h] BYREF

  m_PkgPnp = This->m_PkgPnp;
  v10 = FxCxCallbackProgressInitialized;
  m_DeviceBase = m_PkgPnp->m_DeviceBase;
  LOWORD(m_PkgPnp) = m_DeviceBase->m_ObjectSize;
  v7 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !(_WORD)m_PkgPnp )
    v7 = 0LL;
  This->m_DeviceSelfManagedIoInit.m_Device = v7;
  *Status = FxPrePostCallback::InvokeStateful(
              &This->m_DeviceSelfManagedIoInit,
              &v10,
              FxCxCleanupAfterPreOrClientFailure);
  v8 = v10;
  if ( Progress )
    *Progress = v10;
  if ( *Status >= 0 )
    return 5LL;
  if ( v8 )
    return 4 - (unsigned int)((unsigned __int8)v8 < FxCxCallbackProgressClientSucceeded);
  return 1LL;
}
