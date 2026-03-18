/*
 * XREFs of ?Dispose@FxDmaEnabler@@UEAAEXZ @ 0x140089B10
 * Callers:
 *     <none>
 * Callees:
 *     ?CallCleanup@FxObject@@QEAAXXZ @ 0x14004B0F8 (-CallCleanup@FxObject@@QEAAXXZ.c)
 *     ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x14008A34C (-ReleaseResources@FxDmaEnabler@@AEAAXXZ.c)
 *     Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline @ 0x14008A394 (Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

char __fastcall FxDmaEnabler::Dispose(FxDmaEnabler *this)
{
  char v2; // di

  if ( Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline() )
  {
    v2 = 1;
    if ( this->m_RunningUserModeDriver )
    {
      FxObject::CallCleanup(this);
      v2 = 0;
    }
    FxDmaEnabler::ReleaseResources(this);
    if ( (*((_BYTE *)this + 380) & 1) != 0 )
      this->m_DeviceBase->RemoveDmaEnabler(this->m_DeviceBase, this);
    return v2;
  }
  else
  {
    FxDmaEnabler::ReleaseResources(this);
    if ( (*((_BYTE *)this + 380) & 1) != 0 )
      this->m_DeviceBase->RemoveDmaEnabler(this->m_DeviceBase, this);
    return 1;
  }
}
