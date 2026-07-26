/*
 * XREFs of ?LockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x140166FF0
 * Callers:
 *     ndisEtwWriteMiniportRundown @ 0x140096F84 (ndisEtwWriteMiniportRundown.c)
 * Callees:
 *     <none>
 */

void __fastcall Ndis::BindEngine::LockBindings(Ndis::BindEngine *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&this->m_lock, 0LL);
}
