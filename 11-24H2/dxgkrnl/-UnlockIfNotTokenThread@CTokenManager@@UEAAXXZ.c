/*
 * XREFs of ?UnlockIfNotTokenThread@CTokenManager@@UEAAXXZ @ 0x14005A970
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001D270 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::UnlockIfNotTokenThread(CTokenManager *this)
{
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)this + 4) )
    CTokenManager::ReleaseTokenManagerLock(this);
}
