/*
 * XREFs of ?Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x140068B40
 * Callers:
 *     <none>
 * Callees:
 *     FxFreeToNPagedLookasideList @ 0x140032D00 (FxFreeToNPagedLookasideList.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x14008192C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
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
  FxFreeToNPagedLookasideList(&this->m_ObjectLookaside, (_SLIST_ENTRY *)v2[-1].m_BufferSize);
}
