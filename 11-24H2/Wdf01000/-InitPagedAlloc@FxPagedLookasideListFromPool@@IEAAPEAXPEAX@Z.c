/*
 * XREFs of ?InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z @ 0x140095ABC
 * Callers:
 *     ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x140052E40 (-Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 * Callees:
 *     ?FxPoolInsertPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x140095978 (-FxPoolInsertPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     memset @ 0x1400AC800 (memset.c)
 */

FX_POOL **__fastcall FxPagedLookasideListFromPool::InitPagedAlloc(
        FxPagedLookasideListFromPool *this,
        FX_POOL_TRACKER *Alloc)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FX_POOL_TRACKER *v5; // rdi
  void *Caller; // [rsp+38h] [rbp+0h]

  m_Globals = this->m_Globals;
  memset(Alloc, 0, this->m_RawBufferSize);
  if ( m_Globals->FxPoolTrackingOn )
  {
    v5 = Alloc + 1;
    Alloc[1].Link.Flink = &Alloc->Link;
    Alloc[1].Link.Blink = &m_Globals->Linkage;
    FxPoolInsertPagedAllocateTracker(
      &m_Globals->FxPoolFrameworks,
      Alloc,
      this->m_RawBufferSize,
      this->m_PoolTag,
      Caller);
  }
  else
  {
    v5 = Alloc;
    Alloc->Link.Flink = &Alloc->Link;
    Alloc->Link.Blink = &m_Globals->Linkage;
  }
  return &v5->Pool;
}
