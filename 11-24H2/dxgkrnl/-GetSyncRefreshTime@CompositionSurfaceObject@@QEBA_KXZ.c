/*
 * XREFs of ?GetSyncRefreshTime@CompositionSurfaceObject@@QEBA_KXZ @ 0x14001B428
 * Callers:
 *     ?SyncIntervalSatisfied@CFlipToken@@IEAA_NAEBUCOMPOSITION_FRAME_INFO@@@Z @ 0x14009BEF8 (-SyncIntervalSatisfied@CFlipToken@@IEAA_NAEBUCOMPOSITION_FRAME_INFO@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

unsigned __int64 __fastcall CompositionSurfaceObject::GetSyncRefreshTime(CompositionSurfaceObject *this)
{
  __int64 v2; // rbx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 48, 0LL);
  v2 = 0LL;
  if ( !*((_QWORD *)this + 25) )
    v2 = *((_QWORD *)this + 23);
  CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  return v2;
}
