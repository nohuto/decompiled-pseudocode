/*
 * XREFs of ?UnlockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x1401736A0
 * Callers:
 *     ndisEtwWriteMiniportRundown @ 0x1400A13F8 (ndisEtwWriteMiniportRundown.c)
 * Callees:
 *     <none>
 */

void __fastcall Ndis::BindEngine::UnlockBindings(Ndis::BindEngine *this)
{
  KeLeaveCriticalRegion();
  ExReleasePushLockEx(&this->m_lock, 0LL);
}
