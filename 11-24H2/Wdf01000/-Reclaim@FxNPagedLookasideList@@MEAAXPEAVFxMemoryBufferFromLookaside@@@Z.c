/*
 * XREFs of ?Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x140066F80
 * Callers:
 *     <none>
 * Callees:
 *     FxFreeToNPagedLookasideList @ 0x14000BF30 (FxFreeToNPagedLookasideList.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x14008191C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 */

void __fastcall FxNPagedLookasideList::Reclaim(
        FxNPagedLookasideListFromPool *this,
        FxMemoryBufferFromLookaside *Memory)
{
  FxMemoryBufferFromLookaside *v2; // rbx

  v2 = (FxMemoryBufferFromLookaside *)((char *)Memory - 48);
  if ( SLOBYTE(Memory->m_ObjectFlags) >= 0 )
    v2 = Memory;
  if ( this->m_Globals->FxPoolTrackingOn )
    FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v2[-1].m_BufferSize);
  FxFreeToNPagedLookasideList(&this->m_ObjectLookaside, (void *)v2[-1].m_BufferSize);
}
