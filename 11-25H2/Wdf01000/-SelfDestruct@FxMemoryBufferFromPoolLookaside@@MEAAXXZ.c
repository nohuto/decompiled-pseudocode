/*
 * XREFs of ?SelfDestruct@FxMemoryBufferFromPoolLookaside@@MEAAXXZ @ 0x140056950
 * Callers:
 *     <none>
 * Callees:
 *     ?SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ @ 0x1400569E0 (-SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxMemoryBufferFromPoolLookaside::SelfDestruct(FxMemoryBufferFromPoolLookaside *this)
{
  ((void (__fastcall *)(FxLookasideList *, void *))this->m_pLookaside->FxMemoryBufferFromLookaside::__vftable[1].SelfDestruct)(
    this->m_pLookaside,
    this->m_Pool);
  FxMemoryBufferFromLookaside::SelfDestruct(this);
}
