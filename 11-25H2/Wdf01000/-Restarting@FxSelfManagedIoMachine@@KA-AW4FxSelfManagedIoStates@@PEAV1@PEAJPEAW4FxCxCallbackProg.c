/*
 * XREFs of ?Restarting@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x14001AD40
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x14001C94C (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::Restarting(
        FxSelfManagedIoMachine *This,
        int *Status,
        FxCxCallbackProgress *Progress)
{
  FxPkgPnp *m_PkgPnp; // rax
  FxPnpDeviceSelfManagedIoRestart *p_m_DeviceSelfManagedIoRestart; // r10
  FxPnpDeviceSelfManagedIoRestart *v7; // rcx
  FxDeviceBase *m_DeviceBase; // r9
  unsigned __int64 v9; // r9
  FxCxCallbackProgress v10; // al
  FxCxCallbackProgress v12; // [rsp+30h] [rbp+8h] BYREF

  m_PkgPnp = This->m_PkgPnp;
  p_m_DeviceSelfManagedIoRestart = &This->m_DeviceSelfManagedIoRestart;
  v12 = FxCxCallbackProgressInitialized;
  v7 = &This->m_DeviceSelfManagedIoRestart;
  m_DeviceBase = m_PkgPnp->m_DeviceBase;
  LOWORD(m_PkgPnp) = m_DeviceBase->m_ObjectSize;
  v9 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !(_WORD)m_PkgPnp )
    v9 = 0LL;
  p_m_DeviceSelfManagedIoRestart->m_Device = (WDFDEVICE__ *)v9;
  *Status = FxPrePostCallback::InvokeStateful(v7, &v12, FxCxCleanupAfterPreOrClientFailure);
  v10 = v12;
  if ( Progress )
    *Progress = v12;
  if ( *Status < 0 )
    return (unsigned int)((unsigned __int8)v10 < FxCxCallbackProgressClientSucceeded) + 9;
  else
    return 5LL;
}
