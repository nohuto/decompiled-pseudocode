/*
 * XREFs of ?UnlockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x140167030
 * Callers:
 *     ndisEtwWriteMiniportRundown @ 0x140096F84 (ndisEtwWriteMiniportRundown.c)
 * Callees:
 *     <none>
 */

void __fastcall Ndis::BindEngine::UnlockBindings(Ndis::BindEngine *this)
{
  KeLeaveCriticalRegion();
  ExReleasePushLockEx(&this->m_lock, 0LL);
}
