/*
 * XREFs of ?Lock@CTokenManager@@UEAAXXZ @ 0x14000CE90
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14000DD60 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::Lock(CTokenManager *this)
{
  CTokenManager::AcquireTokenManagerLock(this);
}
