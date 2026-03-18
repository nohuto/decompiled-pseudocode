/*
 * XREFs of ?PnpEventFinal@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x140079FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x14003D074 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?SetDelayedDeletion@FxEventQueue@@QEAAXXZ @ 0x140082A38 (-SetDelayedDeletion@FxEventQueue@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventFinal(FxPkgPnp *This, __int64 a2, unsigned __int8 a3)
{
  $71A79B3032D24EA9B43E6D1B24F5E953 *v3; // rdi
  FxPkgPnp *v6; // rcx

  v3 = &This->96;
  if ( !This->m_DeviceRemoveProcessed )
    IoAcquireRemoveLockEx(
      (PIO_REMOVE_LOCK)&v3->m_DeviceBase->m_DeviceObject.m_DeviceObject[1],
      FxPkgPnp::PnpEventFinal,
      a5,
      1u,
      0x20u);
  if ( BYTE3(v3->m_DeviceBase[1].m_Globals) )
  {
    v6 = *(FxPkgPnp **)(*(_QWORD *)&v3->m_DeviceBase[1].m_ObjectFlags + 648LL);
    if ( _InterlockedExchangeAdd(&v6->m_PendingChildCount, 0xFFFFFFFF) == 1 )
      FxPkgPnp::PnpProcessEvent(v6, PnpEventChildrenRemovalComplete, a3);
  }
  if ( This->m_DeviceRemoveProcessed )
  {
    This->m_SetDeviceRemoveProcessed = 1;
  }
  else
  {
    IoReleaseRemoveLockAndWaitEx(
      (PIO_REMOVE_LOCK)&v3->m_DeviceBase->m_DeviceObject.m_DeviceObject[1],
      FxPkgPnp::PnpEventFinal,
      0x20u);
    FxEventQueue::SetDelayedDeletion(&This->m_PnpMachine);
  }
  return 314LL;
}
