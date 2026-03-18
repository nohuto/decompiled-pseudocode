/*
 * XREFs of ?PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x14009CDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x14005F470 (-QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 */

__int64 __fastcall CompositionSurfaceObject::PairedQueryStats(
        CompositionSurfaceObject *this,
        struct CSM_BUFFER_STATISTICS *a2)
{
  int Stats; // eax
  CPushLock *v5; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 16, 0LL);
  Stats = CCompositionSurface::QueryStats((CompositionSurfaceObject *)((char *)this + 8), a2);
  v5 = (CompositionSurfaceObject *)((char *)this + 16);
  LODWORD(this) = Stats;
  CPushLock::ReleaseLock(v5);
  return (unsigned int)this;
}
