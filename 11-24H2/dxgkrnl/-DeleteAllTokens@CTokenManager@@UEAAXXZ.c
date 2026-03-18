/*
 * XREFs of ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x140024F20
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001D238 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001D270 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x14002009C (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 *     ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x140024F88 (-DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x140024FDC (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ @ 0x140025030 (-DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1400250EC (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CTokenManager::DeleteAllTokens(CTokenManager *this)
{
  CTokenManager::AcquireTokenManagerLock(this);
  CTokenManager::DeleteAllLegacyTokenBuffers(this);
  CTokenManager::DeleteAllTokenQueues(this);
  CTokenQueue::DeleteAllTokens((CTokenManager *)((char *)this + 360));
  (*(void (__fastcall **)(CTokenManager *))(*(_QWORD *)this + 152LL))(this);
  CTokenManager::DeleteAllCompositionTokens(this);
  CTokenManager::DeleteAllFlipManagerTokens(this);
  *((_QWORD *)this + 3) = 0LL;
  CTokenManager::ReleaseTokenManagerLock(this);
}
