/*
 * XREFs of ?ResetAdapterCollection@CTokenManager@@UEAAXXZ @ 0x140065130
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14000DD60 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14000DD98 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x14002EB50 (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x14002EB88 (-InternalDiscard@CAdapterCollection@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::ResetAdapterCollection(CTokenManager *this)
{
  CTokenManager::AcquireTokenManagerLock(this);
  ExAcquirePushLockExclusiveEx((char *)this + 152, 0LL);
  *((_BYTE *)this + 160) = 1;
  CAdapterCollection::InternalDiscard((CTokenManager *)((char *)this + 112));
  CPushLockCriticalSection::Release((CTokenManager *)((char *)this + 152));
  *((_DWORD *)this + 22) = 0;
  CTokenManager::ReleaseTokenManagerLock(this);
}
