/*
 * XREFs of ?LockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x1401735E0
 * Callers:
 *     ndisEtwWriteMiniportRundown @ 0x1400A13F8 (ndisEtwWriteMiniportRundown.c)
 * Callees:
 *     <none>
 */

void __fastcall Ndis::BindEngine::LockBindings(Ndis::BindEngine *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&this->m_lock, 0LL);
}
