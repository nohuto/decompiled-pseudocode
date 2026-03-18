/*
 * XREFs of ?FlushAndRundown@FxInterrupt@@AEAAXXZ @ 0x140082700
 * Callers:
 *     ?Dispose@FxInterrupt@@UEAAEXZ @ 0x14007EFF0 (-Dispose@FxInterrupt@@UEAAEXZ.c)
 * Callees:
 *     ?FlushAndRundownInternal@FxInterrupt@@AEAAXXZ @ 0x140082778 (-FlushAndRundownInternal@FxInterrupt@@AEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxInterrupt::FlushAndRundown(FxInterrupt *this)
{
  FxDeviceBase *m_DeviceBase; // rcx

  KeFlushQueuedDpcs();
  FxInterrupt::FlushAndRundownInternal(this);
  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase )
  {
    this->m_DeviceBase = 0LL;
    m_DeviceBase->Release(
      m_DeviceBase,
      this,
      1578,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\interruptobject.cpp");
  }
  this->Release(
    this,
    FxInterrupt::_InterruptThunk,
    1584,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\interruptobject.cpp");
}
