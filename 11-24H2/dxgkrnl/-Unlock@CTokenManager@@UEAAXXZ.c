/*
 * XREFs of ?Unlock@CTokenManager@@UEAAXXZ @ 0x14001C340
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001D270 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::Unlock(CTokenManager *this)
{
  CTokenManager::ReleaseTokenManagerLock(this);
}
