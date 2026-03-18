/*
 * XREFs of ?_Reclaim@FxLookasideList@@KAXPEAU_FX_DRIVER_GLOBALS@@PEAU_NPAGED_LOOKASIDE_LIST@@PEAVFxMemoryBufferFromLookaside@@@Z @ 0x14006A104
 * Callers:
 *     ?Reclaim@FxPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x14006A0E0 (-Reclaim@FxPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z.c)
 * Callees:
 *     FxFreeToNPagedLookasideList @ 0x140032D00 (FxFreeToNPagedLookasideList.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x14008192C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 */

void __fastcall FxLookasideList::_Reclaim(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _NPAGED_LOOKASIDE_LIST *List,
        FxMemoryBufferFromLookaside *Memory)
{
  FxMemoryBufferFromLookaside *v3; // rbx

  v3 = (FxMemoryBufferFromLookaside *)((char *)Memory - 48);
  if ( SLOBYTE(Memory->m_ObjectFlags) >= 0 )
    v3 = Memory;
  if ( FxDriverGlobals->FxPoolTrackingOn )
    FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v3[-1].m_BufferSize);
  FxFreeToNPagedLookasideList(List, (_SLIST_ENTRY *)v3[-1].m_BufferSize);
}
