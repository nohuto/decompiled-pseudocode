/*
 * XREFs of ?GetPairedSurfaceInfo@CompositionSurfaceObject@@UEBAJAEAIAEA_K@Z @ 0x14009AA20
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetPairedSurfaceInfo(
        CompositionSurfaceObject *this,
        unsigned int *a2,
        unsigned __int64 *a3)
{
  CPushLock *v6; // rdi
  __int64 (__fastcall ***v7)(_QWORD, unsigned int *, unsigned __int64 *); // rcx
  unsigned int v8; // ebx

  KeEnterCriticalRegion();
  v6 = (CompositionSurfaceObject *)((char *)this + 16);
  ExAcquirePushLockSharedEx((char *)this + 16, 0LL);
  v7 = (__int64 (__fastcall ***)(_QWORD, unsigned int *, unsigned __int64 *))*((_QWORD *)this + 16);
  if ( v7 )
    v8 = (**v7)(v7, a2, a3);
  else
    v8 = -1073741811;
  CPushLock::ReleaseLock(v6);
  return v8;
}
