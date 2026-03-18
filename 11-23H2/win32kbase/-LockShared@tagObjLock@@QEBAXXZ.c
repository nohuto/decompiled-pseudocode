/*
 * XREFs of ?LockShared@tagObjLock@@QEBAXXZ @ 0x1C0131AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tagObjLock::LockShared(tagObjLock *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)this + 4);
}
