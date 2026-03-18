/*
 * XREFs of ?Unlock@CTokenManager@@UEAAXXZ @ 0x14000CE70
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14000DD98 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::Unlock(CTokenManager *this)
{
  CTokenManager::ReleaseTokenManagerLock(this);
}
