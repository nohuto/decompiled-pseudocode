/*
 * XREFs of ?Dispose@FxDmaEnabler@@UEAAEXZ @ 0x140089B10
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x14008A2F0 (-ReleaseResources@FxDmaEnabler@@AEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxDmaEnabler::Dispose(FxDmaEnabler *this)
{
  FxDmaEnabler::ReleaseResources(this);
  if ( (*((_BYTE *)this + 380) & 1) != 0 )
    this->m_DeviceBase->RemoveDmaEnabler(this->m_DeviceBase, this);
  return 1;
}
