/*
 * XREFs of ?_PnpSetLock@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1400A2E70
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x14002D90C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPdo::_PnpSetLock(FxPkgPnp *This, FxIrp *Irp)
{
  FxDeviceBase *m_DeviceBase; // rcx
  FxIrp *v4; // rbx
  __int64 (__fastcall *m_Lock)(unsigned __int64, FxIrp *); // rax
  unsigned __int16 m_ObjectSize; // r8
  unsigned __int64 v7; // rcx
  signed int v8; // r8d

  m_DeviceBase = This->m_DeviceBase;
  v4 = Irp;
  m_Lock = (__int64 (__fastcall *)(unsigned __int64, FxIrp *))This[1].m_SpinLock.m_Lock;
  LOBYTE(Irp) = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.SetLock.Lock;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( m_Lock )
  {
    v7 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v7 = 0LL;
    v8 = m_Lock(v7, Irp);
    if ( v8 >= 0 )
      v4->m_Irp->IoStatus.Information = 0LL;
  }
  else
  {
    v8 = -1073741823;
  }
  return FxPkgPnp::CompletePnpRequest(This, v4, v8);
}
