/*
 * XREFs of ?EnsureLocked@CTokenManager@@UEAA_NXZ @ 0x14009A330
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001D238 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

char __fastcall CTokenManager::EnsureLocked(struct _KTHREAD **this)
{
  if ( KeGetCurrentThread() == this[4] || KeGetCurrentThread() == this[13] )
    return 0;
  CTokenManager::AcquireTokenManagerLock((CTokenManager *)this);
  return 1;
}
