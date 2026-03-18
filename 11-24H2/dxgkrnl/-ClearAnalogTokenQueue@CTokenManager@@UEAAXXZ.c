/*
 * XREFs of ?ClearAnalogTokenQueue@CTokenManager@@UEAAXXZ @ 0x14009A1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001D238 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001D270 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x14002009C (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::ClearAnalogTokenQueue(CTokenManager *this)
{
  CTokenManager::AcquireTokenManagerLock(this);
  CTokenQueue::DeleteAllTokens((CTokenManager *)((char *)this + 360));
  CTokenManager::ReleaseTokenManagerLock(this);
}
