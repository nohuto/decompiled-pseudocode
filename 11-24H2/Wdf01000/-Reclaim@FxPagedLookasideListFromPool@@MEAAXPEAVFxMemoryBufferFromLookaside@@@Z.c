/*
 * XREFs of ?Reclaim@FxPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x140068830
 * Callers:
 *     <none>
 * Callees:
 *     ?_Reclaim@FxLookasideList@@KAXPEAU_FX_DRIVER_GLOBALS@@PEAU_NPAGED_LOOKASIDE_LIST@@PEAVFxMemoryBufferFromLookaside@@@Z @ 0x140068854 (-_Reclaim@FxLookasideList@@KAXPEAU_FX_DRIVER_GLOBALS@@PEAU_NPAGED_LOOKASIDE_LIST@@PEAVFxMemoryBu.c)
 */

void __fastcall FxPagedLookasideListFromPool::Reclaim(
        FxPagedLookasideListFromPool *this,
        FxMemoryBufferFromLookaside *Memory)
{
  FxLookasideList::_Reclaim(this->m_Globals, &this->m_ObjectLookaside, Memory);
}
