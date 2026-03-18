/*
 * XREFs of ?Lock@CTokenManager@@UEAAXXZ @ 0x14001C360
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001D238 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::Lock(CTokenManager *this)
{
  CTokenManager::AcquireTokenManagerLock(this);
}
